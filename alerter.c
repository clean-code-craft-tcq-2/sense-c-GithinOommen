#include "alerter.h"
#include "stats.h"
int ledAlertCallCount,emailAlertCallCount=0;
void ledAlerter()
{
   ledAlertCallCount= ledAlertCallCount+1;
}
void emailAlerter()
{
  emailAlertCallCount=emailAlertCallCount+1;
}

void check_and_alert (float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats){
      alerters[0]();
    alerters[1]();
}
