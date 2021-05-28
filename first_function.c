//greeting the guest
#include<stdio.h>
#include<time.h>

//void function doesnot return anything it throws error for the return statement within it

void goodMorning(char name[20]);
void goodAfternoon(char name[20]);
void goodEvening(char name[20]);
void goodNight(char name[20]);

int main(){
    struct tm *local;//stucture tm has all time related data we use pointer local to point towards that
    time_t t;//time_t data type to hold the time
    t = time(NULL);
    local = localtime(&t);
    char username[20];
    int hour = local->tm_hour;
    printf("Enter the username : ");
    scanf("%s",&username);
    if(hour>=1 && hour<=12){
        goodMorning(username);
    }
    else if(hour>12 && hour<=17){
        goodAfternoon(username);
    }
    else if(hour>17 && hour<=20){
        goodEvening(username);
    }
    else{
        goodNight(username);
    }
    return 0;
}
void goodMorning(char name[20]){
    printf("Hello ! %s good morning\n",name);
}
void goodAfternoon(char name[20]){
    printf("Hello ! %s good afternoon\n",name);
}
void goodEvening(char name[20]){
    printf("Hello ! %s good Evening\n",name);
}
void goodNight(char name[20]){
    printf("Hello ! %s good Night\n",name);
}