#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int i;
    float sum=0,min,max;
    min=numberset[0];
    max=numberset[0];
    for(i=0;i<setlength;++i)
    {
        sum=sum+numberset[i];
        if(min>numberset[i+1])
        {
            min=numberset[i+1];
        }
        if(max<numberset[i+1])
        {
            max=numberset[i+1];
        }
    }
    s.average = sum/setlength;
    s.min=min;
    s.max=max;
	return s;
	
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
