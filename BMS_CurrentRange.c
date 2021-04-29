

#include <stdio.h>
#include "BMS_CurrentRange.h"

Range_Validity BMS_CurrentReading_Validity(int numofReadings,int *BMS_Current_Range)
{
    if((numofReadings== 0) || (BMS_Current_Range == NULL))
    {
        return Invalid_Range;
    }
    else
    {
        return  Valid_Range;
    }
}

int BMS_NumofCurrentReadings_InRange(int numofReadings,int *BMS_Current_Range,int *defined_range)
{
    int i,count = 0;
    for(i=0;i<numofReadings;i++)
    {
        if((BMS_Current_Range[i] >= defined_range[0]) && (BMS_Current_Range[i] <= defined_range[1]))
        {
            count++;
        }
    }
    return count;
}
