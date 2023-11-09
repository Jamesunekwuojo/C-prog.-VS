// A C code that calculates the grades of students.
#include <stdio.h>
int main (){
    int score;
    printf("Enter student's score:");
    scanf("%d", &score);

    if(score<41){
        printf("Grade is F ");

    } else if (score==41 || score<61){
        printf("Grade is C");

    } else if (score==61 || score<86){
        printf("Grade is B");
    } else if (score==86 || score<101) {
        printf("Congrats, grade is A");

    } else {
        printf("Enter an integer value b/w 0 and 100 ");
    }
    return 0;



    // switch(score){
    //     case 1 (score<41):
    //     printf("Grade is F ");
    //     break;

    //     case 2 (score==41 || score<61):
    //     printf("Grade is C");
    //     break;

    //     case 3 (score==61 || score<86):
    //     printf("Grade is B");
    //     break;

    //     case 4 (score==86 || score<101):
    //     printf("Congrats, grade is A");
    //     break;

    //     default:
    //     printf("Enter an integer value b/w 0 and 100 ");


    // }
    



}