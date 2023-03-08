#include"computeLPS.h"

void computeLPS(std::string pat, int* lps) {
    int j = 0;
    lps[0] = 0;
    int i = 1;
    while (i < pat.size()) {
        if (pat[i] == pat[j]) {
            j++;
            lps[i] = j;
            i++;
        }
        else{
            if (j != 0) {
                j = lps[j - 1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

