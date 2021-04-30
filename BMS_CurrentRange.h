#ifndef BMS_CurrentRange_h
#define BMS_CurrentRange_h

typedef enum
{
    Invalid_Range,
    Valid_Range
}Range_Validity;

Range_Validity BMS_CurrentReading_Validity(int numofReadings,int *BMS_Current_Range);
int BMS_NumofCurrentReadings_InRange(int numofReadings,int *BMS_Current_Range,int *defined_range);
#endif /* BMS_CurrentRange_h */
