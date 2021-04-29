#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "BMS_CurrentRange.h"


TEST_CASE("To check empty BMS Current readings range") {
    int BMS_Current_Range[] = {};
       int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
  REQUIRE(BMS_CurrentReading_Validity(numofReadings,BMS_Current_Range) == Invalid_Range);
}

TEST_CASE("To check valid BMS Current readings range") {
    int BMS_Current_Range[] = {1,2,3,4,5};
       int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
  REQUIRE(BMS_CurrentReading_Validity(numofReadings,BMS_Current_Range) == Valid_Range);
}

TEST_CASE("To check total number of readings in given range") {
    int BMS_Current_Range[] = {1,2,4,4,5,8,9,10};
    int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
    int defined_range[] ={1,5};
  REQUIRE(BMS_NumofCurrentReadings_InRange(numofReadings,BMS_Current_Range,defined_range) == 5);
}

TEST_CASE("To check total number of Continous readings(with difference <=1) in given range") {
    int BMS_Current_Range[] = {1,2,3,3,4,8,9,10};
    int numofReadings = sizeof(BMS_Current_Range) / sizeof(BMS_Current_Range[0]);
    int defined_range[] ={1,5};
  REQUIRE(BMS_NumofCurrentReadings_InRange(numofReadings,BMS_Current_Range,defined_range) == 5);
}
