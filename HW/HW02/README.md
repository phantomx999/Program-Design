# 3081 HW02 C++ Class Basics

## What You Will Learn
1. How Makefiles compile and link C++ programs
2. How to build a Makefile which includes helpful "phony" targets

### Retrieve class materials and merge into your personal repository

Navigate to your repository.

    % cd <path_to_your_repository's_root_folder>

Pull the updated materials into your _support-code_ branch. Ensure you are in the _support-code_ branch by executing the _git status_ command.

    % git status
	
The output should begin with the branch you are currently on. If it says _On branch support-code_,
you're all set. If you are still in _master_, checkout the _support-code_ branch.

    % git checkout support-code

Check for updates from the shared-upstream repository.

    % git pull upstream support-code

Add any updates into your own work in the _master_ branch.

    % git checkout master
	% git merge support-code
	
#### Merge conflicts?

If you encounter any errors during the pull or merge steps above, you may need to resolve a merge conflict. Git will tell you which files have merge conflicts. 

It is recommended that you use a merge tool to help you handle these conflicts. The editor 'atom' has been recommended by the TAs for [resolving conflicts](https://flight-manual.atom.io/using-atom/sections/github-package/#resolve-conflicts)

### What's in HW/HW02?

	
### Getting started with Makefile

A Makefile is a form of script. They are like shell scripts, but with some interesting additional features. The most important difference is that Makefiles track certain file dependencies and whether the files have changed before executing commands.

Start by creating a Makefile in the HW02 directory.

    % cd HW/HW02

In your preferred editor (emacs, vim, etc.), create the Makefile. For example:

    % vim Makefile

### Compile and Link directly

The Makefile format has three elements in the following format:

> target: dependencies
> [tab] command

For example, building a compiled object for the Duck class would look like this:

> Duck.o: Duck.h Duck.cpp
> 		g++ -c Duck.cpp

Add the above example to your Makefile. Then run _make_

    % make

Make will output the commands being run (g++ -c Duck.cpp, in this case). Now, list the directory contents with 'ls'. You should now see Duck.o exists on your system. This is the compiled version of your Duck class. It is ready for linking.

Let's add another target.

> DecoyDuck.o: Duck.h DecoyDuck.h DecoyDuck.cpp
> 		g++ -c DecoyDuck.cpp

This target will build the DecoyDuck class. Notice that we've included a secondary dependency, Duck.h. If that interface changes, we want to recompile DecoyDuck to use the correct version of Duck (and to break if the new Duck class isn't compatible with our DecoyDuck).

Let's run make again.

    % make
	
** What just happened? ** Make responded that Duck.o is up to date. That's true, it is. We didn't make any changes to the dependencies of Duck.o (Duck.h or Duck.cpp), so there was no need to recompile it. But, what about DecoyDuck.

The default target for make is the first target in the Makefile. So, running _make_ builds the first target listed unless we tell it otherwise.

Let's build DecoyDuck using the Makefile.

    % make DecoyDuck.o
	
That's better. Now, the DecoyDuck.o object has been created. 

### Building projects

We could continue, adding each target/dependency/command into the Makefile one at a time for our ducks. But, that isn't very efficient, especially for large projects.

Thankfully, there are some shortcuts we can use to help us avoid so much manual work. Replace the two targets we've created so far with the following target:

> %.o: %.cpp
>	g++ -c $^ -o $@
	
** What's happening here? ** There are three shortcuts in use: %, $^, and $@.  The % symbol is the wildcard. We're asking it to match any target that ends in .o and to use whatever is matched with .cpp as it's dependencies. So, if the target used with Make was Duck.o, it would know that Duck.cpp is its dependency.  $^ then is a synonym for the slightly longer shortcut $(inputs), which is just the list of all dependencies. Finally, $@ is a shortcut meaning the name of the target, Duck.o in our example.

Now, we can use name to build any number of object files.

    % make Duck.o
	% make MallardDuck.o
	% make RubberDuck.o

	
In the end, we want to build an executable. We want to build the application that we can actually run. That executable will be reliant on all of the compiled objects. Thankfully, we can use these objects as dependencies, and make will ensure sure they are up-to-date before constructing our executable.

Place this new target at the **_top_** of your Makefile, so that it is the default target to be built if make is called without arguments.

> MyDuckApplication: Duck.o MallardDuck.o DecoyDuck.o RubberDuck.o QuackBehavior.o MuteQuack.o Quack.o Squeak.o main.o
>	g++ $^ -o $@

Now, let's run make to build our application.

    % make
	
Note that it build any objects that weren't already built, ending with the creation of MyDuckApplication.

    % ./MyDuckApplication
	
### Cleaning your project using PHONY targets

Remember that Makefile allows you to act just like a shell script. We can also effectively automate some common commands for our project. One of the most common is the clean up our workspace, removing the .o files and the executable. Let's add this to our Makefile now.

> clean:
>	rm *.o MyDuckApplication
>
> .PHONY: clean

** What's .PHONY? ** Targets are nearly always tied to actual files on the system. Since there is no 'clean' file, we make sure that make is aware that this is a command we wish to be able invoke.

You can clean your directory, check that eveything is gone, and rebuild.

    % make clean
	% ls
	% make
	% ls

### Try to modify and rebuild

Let's now see how make check on dependencies and only builds what's necessary. Open Squeak.cpp and add a third exclamation point (or remove one) in the _quack()_ method.

>  In Squeak.cpp:
>     cout << "SQUEAK!!!" << endl;

Now, let's run make again to see what happens.

     % make
	 
** What just happened? ** Assuming all the compiled objects and executable already existed, make should recognize that Squeak.cpp has changed. Based on this change, it should rebuild the Squeak compiled object and then rebuild the executable (since it depends on Squeak.cpp).

### Macros

Macros in Makefiles are just variables. We want to be able to add some information at the top of our Makefile which can be used throughout the targets. Let's make two Macros now. Write the following two lines at the very top of your Makefile:

> EXEFILE = MyDuckApplication
> CXXFLAGS = -c -Wall

** What are these? ** We are giving a name to the executable to be created and defining the g++ compiler flags we will use in our compile (but not linking) commands.

We need to make a few changes in our Makefile to use these Macros. First, in the %.o target, replace the '-c' flag in the current command with '$(CXXFLAGS)'

> %.o: %.cpp
> 	g++ $(CXXFLAGS) $^ -o $@

Then, in the MyDuckApplication target, replace the target name with our macro:

> $(EXEFILE): Duck.o MallardDuck.o DecoyDuck.o RubberDuck.o QuackBehavior.o MuteQuack.o Quack.o Squeak.o main.o
>	g++ $^ -o $@

And, finally, update our clean target:

> clean:
>	rm *.o $(EXEFILE)

Now, let's make sure our Macros are being used. Check the output to be sure that the new compiler flags are being utilized.

    % make clean
	% ls
	% make
	% ls
	
### Pushing Results

The code provided for HW01 will create an executable by compiling the provided
C++ files using a _makefile_. The resulting executable, hw01.out, should be created if your point2.h and point2.cc files do not cause syntax errors.

If necessary, change directories to the HW/HW01 directory.

    % cd HW/HW01

Build the executable using the makefile

	% make

**_What just happened?_** You made _HW/HW01_ your working directory with `cd`. You
executed the makefile (named _makefile_) with `make`, which created the executable _hw01.out_. 

    % ./hw01.out

**_What just happened?_** You ran the executable with `./hw01.out`.

Did the output match your expected results? If so, you are ready to push your changes to your remote repository for automated feedback. If not, debug your program locally until it is working properly.

### [OPTIONAL] Use the Google Test framework to verify your programs correctness

You may or may not have noticed another directory that was downloaded when you pulled the latest updates from the shared-upstream. The googletest directory includes a variety of files which enables you to build the google test framework and utilize it to execute unit tests against your codebase. These tests are helpful in ensuring that your code is working as expected. This directory, in conjunction with the Makefile.grader and point2_unittest.cc file, can be used to evaluate your program locally, just as the grading script will do on the grading server.

If you wish, you can make use of the framework now. To do so, you need to merely replace the existing makefile with the grader version.

    % mv Makefile Makefile.student
	
**_What just happened?_** renamed the Makefile as Makefile.student. This isn't strictly necessary, but it is nice to keep a copy of the original makefile in case you'd like to revert back to it.

    % cp Makefile.grader Makefile
	
**_What just happened?_** renamed Makefile.grader to Makefile to allow it to be used when _make_ is executed. Again, we could have moved/renamed the file, but let's keep a copy around.

    % make

**_What just happened?_** Built the Google Test framework objects and ran our unit tests (point2_unittest) against our complied code. 

    % ./point2_unittest
	
**_What just happened?_** Executes the unit tests and displays the testing results. If all goes well, you should see the tests run and pass (in green text). Otherwise, you'll see some tests fail and get the dreaded red text.

Again, once you're satisfied in your program's correctness, it's time to submit your work. But, one last task first: making sure no additional files are being pushed.

    % git status
	
This should list all the files that have changed and/or are untracked. As long as the other files listed are the two files you added for the Point2 class (point2.h and point2.cc), you're good to go!  If other files are also listed as being ready to stage for commit, you may need to update your .gitignore to make sure we don't push files that we shouldn't be committing. Once you're ready to commit just point2.h and point2.cc, continue to the next section.

### Add Changes to Repo both Locally and on the Server

[This text is the same as in the previous homework.] You need to _stage_ all changes to the repository, which prepares those items to
be permanently part of the repository. When you _commit_ those changes, they are
saved to your local repository, which lives in your cselabs account (or your
personal computer if that is what you are working on). When you _push_ those
changes, they will be copied to the repo on the server. The difference between
_commit_ and _push_ is what separates git from centralized version control
systems.

    % git status
    % git add -A
    % git commit -m "add(HW01): Adding HW01 deliverables"
    % git push

**_What just happened?_** Double-checking the files to be staged using the _git status_ command. All of the tracked changes are staged with `git add -A`. Those staged changes were committed to your local repository and tagged with the message that follows `-m`, then pushed to the server in your remote repository.

### Reading the Feedback

Pushing to the server triggers the automated grading system. Soon your repo will
contain a feedback file, letting you know if you have passed all tests of the
assignment. 

    % git pull

THIS HOMEWORK IS COMPLETE.

Congratulations!