#include "gtest/gtest.h"

#include <iostream>
#include <math.h>

#include "date.h"


class DateTest : public ::testing::Test {
 public:
  void SetUp( ) { 
    // code here will execute just before the test ensues 
	first_day = Date(2018, 9, 4);
	last_day = Date(2018, 12, 11);
  }
 protected:
  Date first_day;          // first day of classes
  Date last_day;           // last day of classes
};

TEST_F(DateTest, GetDateTests){
  //Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
  Date date11(1000, 10, 9);

 // EXPECT_EQ(date4.GetDate(), "0000-00-00") << "date4 GetDate() failure";
  //EXPECT_EQ(date5.GetDate(), "9999-99-99") << "date5 GetDate() failure";
  EXPECT_EQ(date6.GetDate(), "1900-01-01") << "date6 GetDate() failure";
  EXPECT_EQ(date7.GetDate(), "1901-01-10") << "date7 GetDate() failure";
  EXPECT_EQ(date8.GetDate(), "1901-10-01") << "date8 GetDate() failure";
  EXPECT_EQ(date9.GetDate(), "9999-12-31") << "date9 GetDate() failure";
  EXPECT_EQ(date10.GetDate(), "1000-09-10") << "date10 GetDate() failure";
  EXPECT_EQ(date11.GetDate(), "1000-10-09") << "date11 GetDate() failure";
}

TEST_F(DateTest, GetUSDateTests){
  //Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
  Date date11(1000, 10, 9);

 // EXPECT_EQ(date4.GetUsDate(), "00-00-0000") << "date4 GetUsDate() failure";
  //EXPECT_EQ(date5.GetUsDate(), "99-99-9999") << "date5 GetUsDate() failure";
  EXPECT_EQ(date6.GetUsDate(), "01-01-1900") << "date6 GeUsDate() failure";
  EXPECT_EQ(date7.GetUsDate(), "01-10-1901") << "date7 GetUsDate() failure";
  EXPECT_EQ(date8.GetUsDate(), "10-01-1901") << "date8 GetUsDate() failure";
  EXPECT_EQ(date9.GetUsDate(), "12-31-9999") << "date9 GetUsDate() failure";
  EXPECT_EQ(date10.GetUsDate(), "09-10-1000") << "date10 GetUsDate() failure";
  EXPECT_EQ(date11.GetUsDate(), "10-09-1000") << "date11 GetUsDate() failure";
}

TEST_F(DateTest, PrintDateTests) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31\n";
  std::string expected_out_2 = "1776-07-04\n";
  std::string expected_out_3 = "2018-10-31\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout(); // You must do this EVERY TIME, or else it will segfault
  ind_day.PrintDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);

  //Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
//  Date date11(1000, 10, 9);      

 // std::string expected_out_4 = "0000-00-00\n";
  //std::string expected_out_5 = "9999-99-99\n";
  std::string expected_out_6 = "1900-01-01\n";
  std::string expected_out_7 = "1901-01-10\n";
  std::string expected_out_8 = "1901-10-01\n";
  std::string expected_out_9 = "9999-12-31\n";
  std::string expected_out_10 = "1000-09-10\n";
//  std::string expected_out_11 = "1000-10-9\n";
  
 // testing::internal::CaptureStdout();
 // date4.PrintDate(true);
 // std::string output4 = testing::internal::GetCapturedStdout();

  /*testing::internal::CaptureStdout();
  date5.PrintDate(true);
  std::string output5 = testing::internal::GetCapturedStdout();*/
  
  testing::internal::CaptureStdout();
  date6.PrintDate(true);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date7.PrintDate(true);
  std::string output7 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date8.PrintDate(true);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date9.PrintDate(true);
  std::string output9 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date10.PrintDate(true);
  std::string output10 = testing::internal::GetCapturedStdout();
  
 // testing::internal::CaptureStdout();
//  date11.PrintDate(true);
 // std::string output11 = testing::internal::GetCapturedStdout();

 // EXPECT_EQ(output4, expected_out_4) << "failure output4 vs expected_out_4 with PrintDate(true)";
  //EXPECT_EQ(output5, expected_out_5) << "failure output5 vs expected_out_5 with PrintDate(true)";
  EXPECT_EQ(output6, expected_out_6) << "failure output6 vs expected_out_6 with PrintDate(true)";
  EXPECT_EQ(output7, expected_out_7) << "failure output7 vs expected_out_7 with PrintDate(true)";
  EXPECT_EQ(output8, expected_out_8) << "failure output8 vs expected_out_8 with PrintDate(true)";
  EXPECT_EQ(output9, expected_out_9) << "failure output9 vs expected_out_9 with PrintDate(true)";
  EXPECT_EQ(output10, expected_out_10) << "failure output10 vs expected_out_10 with PrintDate(true)";
 // EXPECT_EQ(output11, expected_out_11) << "failure output11 vs expected_out_11 with PrintDate(true)";
  
}

TEST_F(DateTest, PrintDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "1999-12-31";
  std::string expected_out_2 = "1776-07-04";
  std::string expected_out_3 = "2018-10-31";
  
  testing::internal::CaptureStdout();
  y2k.PrintDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();
  
  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);

 // Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
 // Date date11(1000, 10, 9);      

  //std::string expected_out_4 = "0000-00-00";
  //std::string expected_out_5 = "9999-99-99";
  std::string expected_out_6 = "1900-01-01";
  std::string expected_out_7 = "1901-01-10";
  std::string expected_out_8 = "1901-10-01";
  std::string expected_out_9 = "9999-12-31";
  std::string expected_out_10 = "1000-09-10";
  //std::string expected_out_11 = "1000-10-9";
  
 // testing::internal::CaptureStdout();
 // date4.PrintDate(false);
 // std::string output4 = testing::internal::GetCapturedStdout();
  
  /*testing::internal::CaptureStdout();
  date5.PrintDate(false);
  std::string output5 = testing::internal::GetCapturedStdout();*/
  
  testing::internal::CaptureStdout();
  date6.PrintDate(false);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date7.PrintDate(false);
  std::string output7 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date8.PrintDate(false);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date9.PrintDate(false);
  std::string output9 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date10.PrintDate(false);
  std::string output10 = testing::internal::GetCapturedStdout();
  
 // testing::internal::CaptureStdout();
 // date11.PrintDate(false);
  //std::string output11 = testing::internal::GetCapturedStdout();

 // EXPECT_EQ(output4, expected_out_4) << "failure output4 vs expected_out_4 with PrintDate(false)";
  //EXPECT_EQ(output5, expected_out_5) << "failure output5 vs expected_out_5 with PrintDate(false)";
  EXPECT_EQ(output6, expected_out_6) << "failure output6 vs expected_out_6 with PrintDate(false)";
  EXPECT_EQ(output7, expected_out_7) << "failure output7 vs expected_out_7 with PrintDate(false)";
  EXPECT_EQ(output8, expected_out_8) << "failure output8 vs expected_out_8 with PrintDate(false)";
  EXPECT_EQ(output9, expected_out_9) << "failure output9 vs expected_out_9 with PrintDate(false)";
  EXPECT_EQ(output10, expected_out_10) << "failure output10 vs expected_out_10 with PrintDate(false)";
 // EXPECT_EQ(output11, expected_out_11) << "failure output11 vs expected_out_11 with PrintDate(false)";
}

TEST_F(DateTest, PrintUSDateTestsWithoutNewline) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "12-31-1999";
  std::string expected_out_2 = "07-04-1776";
  std::string expected_out_3 = "10-31-2018";
  
  testing::internal::CaptureStdout();
  y2k.PrintUsDate(false);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintUsDate(false);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(false);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);

 // Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
 // Date date11(1000, 10, 9);      

  //std::string expected_out_4 = "00-00-0000";
  //std::string expected_out_5 = "99-99-9999";
  std::string expected_out_6 = "01-01-1900";
  std::string expected_out_7 = "01-10-1901";
  std::string expected_out_8 = "10-01-1901";
  std::string expected_out_9 = "12-31-9999";
  std::string expected_out_10 = "09-10-1000";
  //std::string expected_out_11 = "10-9-1000";

 // testing::internal::CaptureStdout();
 // date4.PrintUsDate(false);
 // std::string output4 = testing::internal::GetCapturedStdout();
  
  /*testing::internal::CaptureStdout();
  date5.PrintUsDate(false);
  std::string output5 = testing::internal::GetCapturedStdout();*/
  
  testing::internal::CaptureStdout();
  date6.PrintUsDate(false);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date7.PrintUsDate(false);
  std::string output7 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date8.PrintUsDate(false);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date9.PrintUsDate(false);
  std::string output9 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date10.PrintUsDate(false);
  std::string output10 = testing::internal::GetCapturedStdout();
  
 // testing::internal::CaptureStdout();
 // date11.PrintUsDate(false);
 // std::string output11 = testing::internal::GetCapturedStdout();

  //EXPECT_EQ(output4, expected_out_4) << "failure output4 vs expected_out_4 with PrintUsDate(false)";
  //EXPECT_EQ(output5, expected_out_5) << "failure output5 vs expected_out_5 with PrintUsDate(false)";
  EXPECT_EQ(output6, expected_out_6) << "failure output6 vs expected_out_6 with PrintUsDate(false)";
  EXPECT_EQ(output7, expected_out_7) << "failure output7 vs expected_out_7 with PrintUsDate(false)";
  EXPECT_EQ(output8, expected_out_8) << "failure output8 vs expected_out_8 with PrintUsDate(false)";
  EXPECT_EQ(output9, expected_out_9) << "failure output9 vs expected_out_9 with PrintUsDate(false)";
  EXPECT_EQ(output10, expected_out_10) << "failure output10 vs expected_out_10 with PrintUsDate(false)";
 // EXPECT_EQ(output11, expected_out_11) << "failure output11 vs expected_out_11 with PrintUsDate(false)";

}

TEST_F(DateTest, PrintUSDateTestsNEWLINE) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween
  
  std::string expected_out_1 = "12-31-1999\n";
  std::string expected_out_2 = "07-04-1776\n";
  std::string expected_out_3 = "10-31-2018\n";
  
  testing::internal::CaptureStdout();
  y2k.PrintUsDate(true);
  std::string output1 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  ind_day.PrintUsDate(true);
  std::string output2 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  best_holiday.PrintUsDate(true);
  std::string output3 = testing::internal::GetCapturedStdout();

  EXPECT_EQ(output1, expected_out_1);
  EXPECT_EQ(output2, expected_out_2);
  EXPECT_EQ(output3, expected_out_3);

  //Date date4(0, 0, 0);              
  //Date date5(9999, 99, 99);            
  Date date6(1900, 01, 01); 
  Date date7(1901, 01, 10);              
  Date date8(1901, 10, 01);            
  Date date9(9999, 12, 31);
  Date date10(1000, 9, 10);
 // Date date11(1000, 10, 9);      

  //std::string expected_out_4 = "00-00-0000\n";
  //std::string expected_out_5 = "99-99-9999\n";
  std::string expected_out_6 = "01-01-1900\n";
  std::string expected_out_7 = "01-10-1901\n";
  std::string expected_out_8 = "10-01-1901\n";
  std::string expected_out_9 = "12-31-9999\n";
  std::string expected_out_10 = "09-10-1000\n";
 // std::string expected_out_11 = "10-9-1000\n";

 // testing::internal::CaptureStdout();
 // date4.PrintUsDate(true);
 // std::string output4 = testing::internal::GetCapturedStdout();
  
  /*testing::internal::CaptureStdout();
  date5.PrintUsDate(true);
  std::string output5 = testing::internal::GetCapturedStdout();*/
  
  testing::internal::CaptureStdout();
  date6.PrintUsDate(true);
  std::string output6 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date7.PrintUsDate(true);
  std::string output7 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date8.PrintUsDate(true);
  std::string output8 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date9.PrintUsDate(true);
  std::string output9 = testing::internal::GetCapturedStdout();
  
  testing::internal::CaptureStdout();
  date10.PrintUsDate(true);
  std::string output10 = testing::internal::GetCapturedStdout();
  
 // testing::internal::CaptureStdout();
 // date11.PrintUsDate(true);
  //std::string output11 = testing::internal::GetCapturedStdout();

 // EXPECT_EQ(output4, expected_out_4) << "failure output4 vs expected_out_4 with PrintUsDate(true)";
  //EXPECT_EQ(output5, expected_out_5) << "failure output5 vs expected_out_5 with PrintUsDate(true)";
  EXPECT_EQ(output6, expected_out_6) << "failure output6 vs expected_out_6 with PrintUsDate(true)";
  EXPECT_EQ(output7, expected_out_7) << "failure output7 vs expected_out_7 with PrintUsDate(true)";
  EXPECT_EQ(output8, expected_out_8) << "failure output8 vs expected_out_8 with PrintUsDate(true)";
  EXPECT_EQ(output9, expected_out_9) << "failure output9 vs expected_out_9 with PrintUsDate(true)";
  EXPECT_EQ(output10, expected_out_10) << "failure output10 vs expected_out_10 with PrintUsDate(true)";
  //EXPECT_EQ(output11, expected_out_11) << "failure output11 vs expected_out_11 with PrintUsDate(true)";

}

TEST_F(DateTest, OperatorAdditionTest) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  EXPECT_EQ((y2k.operator+(0)).GetDate(), "1999-12-31") << "y2k operator+0 fail";
  EXPECT_EQ((ind_day.operator+(0)).GetDate(), "1776-07-04") << "ind_day operator+0 fail";
  EXPECT_EQ((best_holiday.operator+(0)).GetDate(), "2018-10-31") << "best_holiday operator+0 fail"; 
  EXPECT_EQ((y2k.operator+(0)).GetUsDate(), "12-31-1999") << "y2k operator+0 fail 2";
  EXPECT_EQ((ind_day.operator+(0)).GetUsDate(), "07-04-1776") << "ind_day operator+0 fail 2";
  EXPECT_EQ((best_holiday.operator+(0)).GetUsDate(), "10-31-2018") << "best_holiday operator+0 fail 2"; 

  EXPECT_EQ((y2k.operator+(1)).GetDate(), "2000-01-01") << "y2k operator+1 fail";
  EXPECT_EQ((ind_day.operator+(1)).GetDate(), "1776-07-05") << "ind_day operator+1 fail";
  EXPECT_EQ((best_holiday.operator+(1)).GetDate(), "2018-11-01") << "best_holiday operator+1 fail"; 
  EXPECT_EQ((y2k.operator+(1)).GetUsDate(), "01-01-2000") << "y2k operator+1 fail 2";
  EXPECT_EQ((ind_day.operator+(1)).GetUsDate(), "07-05-1776") << "ind_day operator+1 fail 2";
  EXPECT_EQ((best_holiday.operator+(1)).GetUsDate(), "11-01-2018") << "best_holiday operator+1 fail 2"; 

  EXPECT_EQ((y2k.operator+(-1)).GetDate(), "1999-12-30") << "y2k operator+(-1) fail";
  EXPECT_EQ((ind_day.operator+(-1)).GetDate(), "1776-07-03") << "ind_day operator+(-1) fail";
  EXPECT_EQ((best_holiday.operator+(-1)).GetDate(), "2018-10-30") << "best_holiday operator+(-1) fail"; 
  EXPECT_EQ((y2k.operator+(-1)).GetUsDate(), "12-30-1999") << "y2k operator+(-1) fail 2";
  EXPECT_EQ((ind_day.operator+(-1)).GetUsDate(), "07-03-1776") << "ind_day operator+(-1) fail 2";
  EXPECT_EQ((best_holiday.operator+(-1)).GetUsDate(), "10-30-2018") << "best_holiday operator+(-1) fail 2"; 

  Date day_test1(1999, 4, 30); 
  Date day_test2(2000, 1, 1);
  Date day_test3(1900, 1, 1); 
  Date day_test4(9999, 12, 31); 
       
  Date month_test1(1776, 11, 1);
  Date month_test2(2000, 12, 31); 
             
  Date year_test1(1998, 1, 1);
  Date year_test2(1999, 1, 1);
  Date year_test3(1999, 12, 31);

  EXPECT_EQ((day_test1.operator+(1)).GetDate(), "1999-05-01") << "day_test1 operator+(1) fail";
  EXPECT_EQ((day_test1.operator+(1)).GetUsDate(), "05-01-1999") << "day_test1 operator+(1) fail 2";
  EXPECT_EQ((day_test1.operator+(-1)).GetDate(), "1999-04-29") << "day_test1 operator+(-1) fail 3";
  EXPECT_EQ((day_test1.operator+(-1)).GetUsDate(), "04-29-1999") << "day_test1 operator+(-1) fail 4";

  EXPECT_EQ((day_test2.operator+(1)).GetDate(), "2000-01-02") << "day_test2 operator+(1) fail"; 
  EXPECT_EQ((day_test2.operator+(1)).GetUsDate(), "01-02-2000") << "day_test2 operator+(1) fail 2";
  EXPECT_EQ((day_test2.operator+(-1)).GetDate(), "1999-12-31") << "day_test2 operator+(-1) fail 3"; 
  EXPECT_EQ((day_test2.operator+(-1)).GetUsDate(), "12-31-1999") << "day_test2 operator+(-1) fail 4";

  EXPECT_EQ((day_test3.operator+(1)).GetDate(), "1900-01-02") << "day_test3 operator+(1) fail";
  EXPECT_EQ((day_test3.operator+(1)).GetUsDate(), "01-02-1900") << "day_test3 operator+(1) fail 2";
  EXPECT_EQ((day_test3.operator+(-1)).GetDate(), "1899-12-31") << "day_test3 operator+(-1) fail 3";
  EXPECT_EQ((day_test3.operator+(-1)).GetUsDate(), "12-31-1899") << "day_test3 operator+(-1) fail 4";

  EXPECT_EQ((day_test4.operator+(1)).GetDate(), "10000-01-01") << "day_test4 operator+(1) fail"; 
  EXPECT_EQ((day_test4.operator+(1)).GetUsDate(), "01-01-10000") << "day_test4 operator+(1) fail 2";
  EXPECT_EQ((day_test4.operator+(-1)).GetDate(), "9999-12-30") << "day_test4 operator+(-1) fail 3"; 
  EXPECT_EQ((day_test4.operator+(-1)).GetUsDate(), "12-30-9999") << "day_test4 operator+(-1) fail 4";

  EXPECT_EQ((month_test1.operator+(30)).GetDate(), "1776-12-01") << "month_test1 operator+(30) fail";
  EXPECT_EQ((month_test1.operator+(30)).GetUsDate(), "12-01-1776") << "month_test1 operator+(30) fail 2";
  EXPECT_EQ((month_test1.operator+(-31)).GetDate(), "1776-10-01") << "month_test1 operator+(-31) fail 3";
  EXPECT_EQ((month_test1.operator+(-31)).GetUsDate(), "10-01-1776") << "month_test1 operator+(-31) fail 4";
 
  EXPECT_EQ((month_test2.operator+(31)).GetDate(), "2001-01-31") << "month_test2 operator+(31) fail";
  EXPECT_EQ((month_test2.operator+(31)).GetUsDate(), "01-31-2001") << "month_test2 operator+(31) fail 2";
  EXPECT_EQ((month_test2.operator+(-31)).GetDate(), "2000-11-30") << "month_test2 operator+(-31) fail 3";
  EXPECT_EQ((month_test2.operator+(-31)).GetUsDate(), "11-30-2000") << "month_test2 operator+(-31) fail 4";

  EXPECT_EQ((year_test1.operator+(365)).GetDate(), "1999-01-01") << "year_test1 operator+(365) fail"; 
  EXPECT_EQ((year_test1.operator+(365)).GetUsDate(), "01-01-1999") << "year_test1 operator+(365) fail 2";
  EXPECT_EQ((year_test1.operator+(-365)).GetDate(), "1997-01-01") << "year_test1 operator+(-365) fail 3";
  EXPECT_EQ((year_test1.operator+(-365)).GetUsDate(), "01-01-1997") << "year_test1 operator+(-365) fail 4";

  EXPECT_EQ((year_test2.operator+(365)).GetDate(), "2000-01-01") << "year_test2 operator+(365) fail"; 
  EXPECT_EQ((year_test2.operator+(365)).GetUsDate(), "01-01-2000") << "year_test2 operator+(365) fail 2";
  EXPECT_EQ((year_test2.operator+(-365)).GetDate(), "1998-01-01") << "year_test2 operator+(-365) fail 3";
  EXPECT_EQ((year_test2.operator+(-365)).GetUsDate(), "01-01-1998") << "year_test2 operator+(-365) fail 4"; 

  EXPECT_EQ((year_test3.operator+(366)).GetDate(), "2000-12-31") << "year_test3 operator+(365) fail"; 
  EXPECT_EQ((year_test3.operator+(366)).GetUsDate(), "12-31-2000") << "year_test3 operator+(365) fail 2";
  EXPECT_EQ((year_test3.operator+(-365)).GetDate(), "1998-12-31") << "year_test3 operator+(-365) fail 3";
  EXPECT_EQ((year_test3.operator+(-365)).GetUsDate(), "12-31-1998") << "year_test3 operator+(-365) fail 4";  

}

TEST_F(DateTest, OperatorSubtractionTest) {
  Date y2k(1999, 12, 31);              // y2k
  Date ind_day(1776, 7, 4);            // US Independence
  Date best_holiday(2018, 10, 31);     // Halloween

  EXPECT_EQ((y2k.operator-(0)).GetDate(), "1999-12-31") << "y2k operator-0 fail";
  EXPECT_EQ((ind_day.operator-(0)).GetDate(), "1776-07-04") << "ind_day operator-0 fail";
  EXPECT_EQ((best_holiday.operator-(0)).GetDate(), "2018-10-31") << "best_holiday operator-0 fail"; 
  EXPECT_EQ((y2k.operator-(0)).GetUsDate(), "12-31-1999") << "y2k operator-0 fail 2";
  EXPECT_EQ((ind_day.operator-(0)).GetUsDate(), "07-04-1776") << "ind_day operator-0 fail 2";
  EXPECT_EQ((best_holiday.operator-(0)).GetUsDate(), "10-31-2018") << "best_holiday operator-0 fail 2"; 

  EXPECT_EQ((y2k.operator-(-1)).GetDate(), "2000-01-01") << "y2k operator-(-1) fail";
  EXPECT_EQ((ind_day.operator-(-1)).GetDate(), "1776-07-05") << "ind_day operator-(-1) fail";
  EXPECT_EQ((best_holiday.operator-(-1)).GetDate(), "2018-11-01") << "best_holiday operator-(-1) fail"; 
  EXPECT_EQ((y2k.operator-(-1)).GetUsDate(), "01-01-2000") << "y2k operator-(-1) fail 2";
  EXPECT_EQ((ind_day.operator-(-1)).GetUsDate(), "07-05-1776") << "ind_day operator-(-1) fail 2";
  EXPECT_EQ((best_holiday.operator-(-1)).GetUsDate(), "11-01-2018") << "best_holiday operator-(-1) fail 2"; 

  EXPECT_EQ((y2k.operator-(1)).GetDate(), "1999-12-30") << "y2k operator-1 fail";
  EXPECT_EQ((ind_day.operator-(1)).GetDate(), "1776-07-03") << "ind_day operator-1 fail";
  EXPECT_EQ((best_holiday.operator-(1)).GetDate(), "2018-10-30") << "best_holiday operator-1 fail"; 
  EXPECT_EQ((y2k.operator-(1)).GetUsDate(), "12-30-1999") << "y2k operator-1 fail 2";
  EXPECT_EQ((ind_day.operator-(1)).GetUsDate(), "07-03-1776") << "ind_day operator-1 fail 2";
  EXPECT_EQ((best_holiday.operator-(1)).GetUsDate(), "10-30-2018") << "best_holiday operator-1 fail 2"; 

  Date day_test1(1999, 4, 30); 
  Date day_test2(2000, 1, 1);
  Date day_test3(1900, 1, 1); 
  Date day_test4(9999, 12, 31); 
       
  Date month_test1(1776, 11, 1);
  Date month_test2(2000, 12, 31); 
             
  Date year_test1(1998, 1, 1);
  Date year_test2(1999, 1, 1);
  Date year_test3(1999, 12, 31);

  EXPECT_EQ((day_test1.operator-(-1)).GetDate(), "1999-05-01") << "day_test1 operator-(-1) fail";
  EXPECT_EQ((day_test1.operator-(-1)).GetUsDate(), "05-01-1999") << "day_test1 operator-(-1) fail 2";
  EXPECT_EQ((day_test1.operator-(1)).GetDate(), "1999-04-29") << "day_test1 operator-1 fail 3";
  EXPECT_EQ((day_test1.operator-(1)).GetUsDate(), "04-29-1999") << "day_test1 operator-1 fail 4";

  EXPECT_EQ((day_test2.operator-(-1)).GetDate(), "2000-01-02") << "day_test2 operator-(-1) fail"; 
  EXPECT_EQ((day_test2.operator-(-1)).GetUsDate(), "01-02-2000") << "day_test2 operator-(-1) fail 2";
  EXPECT_EQ((day_test2.operator-(1)).GetDate(), "1999-12-31") << "day_test2 operator-(1) fail 3"; 
  EXPECT_EQ((day_test2.operator-(1)).GetUsDate(), "12-31-1999") << "day_test2 operator-(1) fail 4";

  EXPECT_EQ((day_test3.operator-(-1)).GetDate(), "1900-01-02") << "day_test3 operator-(-1) fail";
  EXPECT_EQ((day_test3.operator-(-1)).GetUsDate(), "01-02-1900") << "day_test3 operator-(-1) fail 2";
  EXPECT_EQ((day_test3.operator-(1)).GetDate(), "1899-12-31") << "day_test3 operator-1 fail 3";
  EXPECT_EQ((day_test3.operator-(1)).GetUsDate(), "12-31-1899") << "day_test3 operator-1 fail 4";

  EXPECT_EQ((day_test4.operator-(-1)).GetDate(), "10000-01-01") << "day_test4 operator-(-1) fail"; 
  EXPECT_EQ((day_test4.operator-(-1)).GetUsDate(), "01-01-10000") << "day_test4 operator-(-1) fail 2";
  EXPECT_EQ((day_test4.operator-(1)).GetDate(), "9999-12-30") << "day_test4 operator-1 fail 3"; 
  EXPECT_EQ((day_test4.operator-(1)).GetUsDate(), "12-30-9999") << "day_test4 operator-1 fail 4";

  EXPECT_EQ((month_test1.operator-(-30)).GetDate(), "1776-12-01") << "month_test1 operator-(-30) fail";
  EXPECT_EQ((month_test1.operator-(-30)).GetUsDate(), "12-01-1776") << "month_test1 operator-(-30) fail 2";
  EXPECT_EQ((month_test1.operator-(31)).GetDate(), "1776-10-01") << "month_test1 operator-31 fail 3";
  EXPECT_EQ((month_test1.operator-(31)).GetUsDate(), "10-01-1776") << "month_test1 operator-31 fail 4";
 
  EXPECT_EQ((month_test2.operator-(-31)).GetDate(), "2001-01-31") << "month_test2 operator-(-31) fail";
  EXPECT_EQ((month_test2.operator-(-31)).GetUsDate(), "01-31-2001") << "month_test2 operator-(-31) fail 2";
  EXPECT_EQ((month_test2.operator-(31)).GetDate(), "2000-11-30") << "month_test2 operator-31 fail 3";
  EXPECT_EQ((month_test2.operator-(31)).GetUsDate(), "11-30-2000") << "month_test2 operator-31 fail 4";

  EXPECT_EQ((year_test1.operator-(-365)).GetDate(), "1999-01-01") << "year_test1 operator-(-365) fail"; 
  EXPECT_EQ((year_test1.operator-(-365)).GetUsDate(), "01-01-1999") << "year_test1 operator-(-365) fail 2";
  EXPECT_EQ((year_test1.operator-(365)).GetDate(), "1997-01-01") << "year_test1 operator-365 fail 3";
  EXPECT_EQ((year_test1.operator-(365)).GetUsDate(), "01-01-1997") << "year_test1 operator-365 fail 4";

  EXPECT_EQ((year_test2.operator-(-365)).GetDate(), "2000-01-01") << "year_test2 operator-(-365) fail"; 
  EXPECT_EQ((year_test2.operator-(-365)).GetUsDate(), "01-01-2000") << "year_test2 operator-(-365) fail 2";
  EXPECT_EQ((year_test2.operator-(365)).GetDate(), "1998-01-01") << "year_test2 operator-365 fail 3";
  EXPECT_EQ((year_test2.operator-(365)).GetUsDate(), "01-01-1998") << "year_test2 operator-365 fail 4"; 

  EXPECT_EQ((year_test3.operator-(-366)).GetDate(), "2000-12-31") << "year_test3 operator-(-365) fail"; 
  EXPECT_EQ((year_test3.operator-(-366)).GetUsDate(), "12-31-2000") << "year_test3 operator-(-365) fail 2";
  EXPECT_EQ((year_test3.operator-(365)).GetDate(), "1998-12-31") << "year_test3 operator-365 fail 3";
  EXPECT_EQ((year_test3.operator-(365)).GetUsDate(), "12-31-1998") << "year_test3 operator-365 fail 4";

}
/**
  *
  * Note, this is the only provided test case which actually uses our test fixture
  * 
  * However, it is illegal to mix TEST() and TEST_F() in the same test case (file).
  *
 
 */
  
TEST_F(DateTest, DaysBetweenTests) {
  EXPECT_EQ(first_day.GetUsDate(), "09-04-2018") << "First day of class not setup properly";
  EXPECT_EQ(last_day.GetUsDate(), "12-11-2018") << "Last day of class not setup properly";
  EXPECT_EQ(first_day.DaysBetween(last_day), 98) << "Days between is not calculated properly";
  EXPECT_EQ(last_day.DaysBetween(first_day), 98) << "Last day to first day incorrect in DaysBetween()";
  EXPECT_EQ(last_day.DaysBetween(last_day), 0) << "last day to last day incorrect in DaysBetween()";

  Date date1(2015, 12, 31);
  Date date2(2016, 12, 31);
  Date date3(2017, 12, 31);

  EXPECT_EQ(date1.DaysBetween(date2), 366) << "date1 to date2 incorrect (leap year) for DaysBetween()";
  EXPECT_EQ(date2.DaysBetween(date3), 365) << "date2 to date3  failure in DaysBetween()";
  EXPECT_EQ(date1.DaysBetween(date3), 731) << "date1 to date3 incorrect in DaysBetween()";  
}

/**
  *
  * NOPE!  Can't test PRIVATE methods
  *
  */
/*
TEST(DateTest, ConvertFromDays) {
	Date convert_first_day = ConvertToDays(2458365);
	EXPECT_STREQ(convert_first_day.GetUsDate(), "09-04-2018");
}
*/
