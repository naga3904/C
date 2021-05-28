#include<stdio.h>

typedef struct timestamp{
    int date;
    int month;
    int year;
    int hour;
    int min;
    int sec;
}date;

void display(date d1,date d2){
    printf("%d/%d/%d %d-%d-%d\n",d1.date,d1.month,d1.year,d1.hour,d1.min,d1.sec);
    printf("%d/%d/%d %d-%d-%d\n",d2.date,d2.month,d2.year,d2.hour,d2.min,d2.sec);
}

int datecmp(date d1,date d2){
    if (d1.year > d2.year)
    {
        return 1;
    }
    if(d1.year == d2.year){
        return 0;
    }
    if(d1.year < d2.year){
        return -1;
    }
}

int main(){
    int out;
    date d1={5,10,2021,12,30,35};
    date d2 = {6,10,2020,12,30,36};
    display(d1,d2);
    out = datecmp(d1,d2);
    printf("%d",out);
    return 0;
}