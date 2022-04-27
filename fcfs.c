#include<stdio.h>
struct process
{
    int pid;
    int bt;
    int wt;
    int tat;
};
void print(struct process arr[], int n) {
    printf("Process Id BurstTime WaitingTime TurnAroundTime\n");
    int av_tat = 0;
    int av_wt = 0;
    for(int i=0; i<n; i++) {
        av_wt += arr[i].wt;
        av_tat +=arr[i].tat;
        printf("%d    %d    %d    %d \n",arr[i].pid,arr[i].bt,arr[i].wt,arr[i].tat);
    }
    printf("\nAverage Waiting Time : %d\n Average Turn Around Time : %d\n",av_wt/n, av_tat/n);
}
int main() {
    int n;
    printf("Enter no of processes : \n");
    scanf("%d",&n);
    struct process arr[5];
    for(int i=0; i<n; i++) {
         printf("Enter pid & burst time : \n");
         int pid, bt;
         scanf("%d",&arr[i].pid);
         scanf("%d",&arr[i].bt);
    }
    arr[0].wt = 0;
    arr[0].tat = arr[0].bt;
    for(int i=1;i<n;i++){
        arr[i].wt = arr[i-1].wt + arr[i-1].bt;
        arr[i].tat = arr[i].wt + arr[i].bt;
    }
    print(arr,n);
}
