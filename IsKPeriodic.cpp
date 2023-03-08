#include"isKPeriodic.h"

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
bool isKPeriodic(const std::string& txt, int k) {
    
    if(k <= 0){
       std::cout << "\033[31m" << "строка не может не может быть кратна числу " << k << std::endl;
       std::cout << "для проверки нужно целое натуральное число " << "\033[0m" << std::endl; 
       std::cout << std::endl; 
       return false;
    }
    std::string pat;
    for (int i = 0; i < k; i++)
        pat += txt[i];
    int* lps = new int[pat.size()];
    computeLPS(pat, lps);
    int c = 0;//cчетчик индексов подстрок
    int i = 0;
    int j = 0;
    while (i < txt.size()) {
        if (pat[j] == txt[i]) {
                i++;
                j++;
        }
        if (j == pat.size()) {
            if(j % k == 0 && i % k == 0){// отбрасываем подстроки "с наложением" и подсчитываем все возможные для данной строки подстроки 
                 c++ ;// счетчик индексов подстрок
            }
               j = lps[j - 1];
        }
            else if (i < txt.size() && pat[j] != txt[i]) {
            if (j != 0){
                j = lps[j - 1];
            }
            else {
                i = i + 1;
            }
        }
    }
    
    if (k * c == txt.size() && k != txt.size()) {
       std::cout  << txt << std::endl;
       std::cout << "строка кратна числу " << k << std::endl;
       std::cout << std::endl;
       return true;
    }
    else {       
       std::cout  << txt << std::endl;
       std::cout << "строка не кратна числу " << k << std::endl;
       std::cout << std::endl;
       return false;
    }
}
