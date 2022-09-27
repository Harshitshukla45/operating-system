#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{

int pid;
int at,bt,ct,tat,wt,rt;

}pro;
int n;
int comp(const void* a,const void *b)
{   
    pro *l=(pro*)a;
    pro *r=(pro*)b;
    return (l->at-r->at);
}
int main()
{
    printf("enter the value of all n, AT's & BT's\n");
    scanf("%d",&n);
    pro p[5];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i].at);
        scanf("%d",&p[i].bt);

    }
    qsort(p,n,sizeof(pro),comp);

    int go=0;
    for(int i=0;i<n;i++)
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

    for(int i=0;i<n;i++)
    {
       p[i].tat=p[i].ct-p[i].at;
       p[i].wt=p[i].tat-p[i].bt;
       p[i].rt=p[i].ct-p[i].bt;
    }
     printf("pid\tat\tbt\tct\ttat\twt\trt\n");
    float avg_tat=0,avg_wt=0;
    for(int i=0;i<n;i++)
    {
        //printf("%d ",p[i].pid);
        printf("P[%d]\t%d\t%d\t%d\t%d\t%d\t%d",i+1,p[i].at,p[i].bt,p[i].ct,p[i].tat,p[i].wt,p[i].rt);
        avg_tat += p[i].tat;
        avg_wt=p[i].wt;
        printf("\n");
    }
    avg_tat /= n;
    avg_wt /= n;
    printf("average of tat and wt are %f and %f\n",avg_tat,avg_wt);
    

return 0;
}
