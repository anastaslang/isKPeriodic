#include "isKPeriodic.h"

int main(){
  
      isKPeriodic("abcabcabcabcabcabc", 9);
      isKPeriodic("abcabcabcabcabcabc", 6);
      isKPeriodic("abcabcabcabcabcabc", 3);
      isKPeriodic("abcabcabcabcabcabc", 10);
      isKPeriodic("abcabcabcabcabcabc", 40);
      isKPeriodic("fofofo", 6);
      isKPeriodic("fofofo", 3);
      isKPeriodic("fofofo", 2);
      isKPeriodic("fofofot", 7);
      isKPeriodic("fofofo", -7);
      isKPeriodic("fofofo", 0);
         
     return 0;
}
