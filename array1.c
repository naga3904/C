//sgpa calculator
#include<stdio.h>

int Sgpa_calculator(int length_of_subjects,int grade_points[length_of_subjects]){
    int Credit_score[8] = {4,4,4,3,3,3,2,2};
    int Credit_points[length_of_subjects];
    int sum = 0;
    int total_credit_score = 0;
    float sgpa;
    for(int i=0;i<=length_of_subjects-1;i++){
        Credit_points[i] = Credit_score[i]*grade_points[i];
    }
    for(int i=0;i<=length_of_subjects-1;i++){
        sum = sum+Credit_points[i];
    }
    for(int i=0;i<=7;i++){
        total_credit_score = total_credit_score+Credit_score[i];
    }
    sgpa = (float)(sum/total_credit_score);
    printf("sgpa => %f",sgpa);
}

int grade_point_calculator(int length_of_subjects,int marks[length_of_subjects]){
    int grade_points[length_of_subjects];
    for(int i=0;i<=length_of_subjects-1;i++){
        if(marks[i]>=90){
            grade_points[i] = 10;
        }
        else if(marks[i]<90 && marks[i]>=80){
            grade_points[i] = 9;
        }
        else if(marks[i]<80 && marks[i]>=70){
            grade_points[i] = 8;
        }
        else if(marks[i]<70 && marks[i]>=60){
            grade_points[i] = 7;
        }
        else if(marks[i]<60 && marks[i]>=50){
            grade_points[i] = 6;
        }
        else if(marks[i]<50 && marks[i]>=45){
            grade_points[i] = 5;
        }
        else if(marks[i]<45 && marks[i]>=40){
            grade_points[i] = 4;
        }
        else if(marks[i]<40){
            grade_points[i] = 0;
        }
    }
    Sgpa_calculator(length_of_subjects,grade_points);
}

int main(){
    // if we are assigning array during declaration itself then specifying the size is not necessary
    int length_of_subjects;
    printf("Enter the total number of subjects => ");
    scanf("%d",&length_of_subjects);
    int marks[length_of_subjects];
    for(int i=0;i<=length_of_subjects-1;i++){
        printf("Enter the marks in subject%d => ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=length_of_subjects-1;i++){
        printf("Marks socred in sub%d is %d\n",i+1,marks[i]);
    }
    grade_point_calculator(length_of_subjects,marks);
    return 0;
}