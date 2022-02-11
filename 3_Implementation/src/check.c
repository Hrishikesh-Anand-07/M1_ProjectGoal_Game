#include "TICTACTOE.h"

int check()
{
    if (s[1] == s[2] && s[2] == s[3])
        return 1;
        
    else if (s[4] == s[5] && s[5] == s[6])
        return 1;
        
    else if (s[7] == s[8] && s[8] == s[9])
        return 1;
        
    else if (s[1] == s[4] && s[4] == s[7])
        return 1;
        
    else if (s[2] == s[5] && s[5] == s[8])
        return 1;
        
    else if (s[3] == s[6] && s[6] == s[9])
        return 1;
        
    else if (s[1] == s[5] && s[5] == s[9])
        return 1;
        
    else if (s[3] == s[5] && s[5] == s[7])
        return 1;
        
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3' && s[4] != '4' && 
        s[5]!='5' && s[6] != '6' && s[7] != '7' && s[8] != '8' && s[9] != '9')
        return 0;
    else
        return  - 1;
}
