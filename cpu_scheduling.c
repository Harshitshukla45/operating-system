#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct {

char pid;
int at,bt,ct,tat,wt,rt;

}pro;
int comp(pro a,pro b)
{
    return a.at< b.at;
}
int main()
{
    pro p[5];
    printf("enter the value of all PID's , AT's & BT's\n");
    for(int i=0;i<5;i++)
    {
       // scanf("%c",&pro.pid);
        scanf("%d%d",&p[i].at,&p[i].bt);

    }
    qsort((void*)p,5,sizeof(p[0]),comp);

    int go=0;
    for(int i=0;i<5;i++)
    {
        if(go>p[i].at)
        {
           p[i].ct=go+p[i].bt;
        }
        else{
           p[i].ct=p[i].at+p[i].bt;
        }
        go=p[i].ct;
    }

    for(int i=0;i,5;i++)
    {
       p[i].tat=p[i].ct-p[i].at;
       p[i].wt=p[i].tat-p[i].bt;
       p[i].rt=p[i].ct-p[i].bt;
    }

    for(int i=0;i<5;i++)
    {
       // printf("%c ",pro.pid);
        printf("%d %d %d %d %d %d",p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
        printf("\n");
    }

return 0;
}
