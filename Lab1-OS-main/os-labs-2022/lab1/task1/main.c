#include "stdio.h"
#include "unistd.h"

int main() {
    int pid0 = fork();//p1
    if (pid0 == 0) 
    { 
        int pid1 = fork(); //p2
        if (pid1 == 0)
        {
        }
        else
        {
            int pid2 = fork(); //p3
            if (pid2 == 0)
            {
            }
            else
            {
                int pid3 = fork(); //p4
                if (pid3 == 0)
                {
                }
                else
                {
                    sleep(10);
                }
            }     
        }
    }
    else 
    {
        int pid1 = fork();//p6
        if (pid1 == 0)
        {
            int pid2 = fork(); //p7
            if (pid2 == 0)
            {                
            }
            else
            {
                sleep(10);
            }
        }
        else
        {
            sleep(10);
        }
    }
    return 0;
}