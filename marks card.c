#include<stdio.h>

int main(){
    float physics, chemistry, biology;
    printf("physics marks\n");
    scanf("%f", &physics);
    
    printf("chemistry marks\n");
    scanf("%f", &chemistry);
    
    printf("biology marks\n");
    scanf("%f", &biology);
    
    float total = (physics + chemistry + biology)/3;
    printf("your percentage is %4.2f", total);
    if(total>=35){
        if(physics<40 || chemistry<25 || biology<30){
            printf("you are failed\n");
        }
        else{
            printf("you are passed\n");
        }
    }
    else{
        printf("sorry you failed\n");
    }
    return 0;
}