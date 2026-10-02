#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char ready,q1,q2,q3,q4,q5,q6,q7,q8,q9,q10;
    int point;
    point = 0;

    


    printf("Hello Gamer, Welcome to our brand new quize game, you know the rules right? You have to correct the answer and you will get 10 points, there will be 5 questions. So are you ready??[Y]es or [N]o ?:  ");
    scanf("%c",&ready);

    ready == 'Y' || ready == 'y' ? printf("Okay lets start the game") : exit(0);

    //! Quesion 01:

    printf("1. What is the capital of Australia? \n A) Sydney B) Melbourne \n C) Canberra D) Perth \n");

    scanf(" %c",&q1);

    if(q1 == 'c' || q1 == 'C'){
        printf("Congratulations You made it right,You got 10 points. \n");
        point += 10;
    }else{
        printf("Ohh noo You made a wrong answer, best of luck for the next question. \n");
    }

    //! Quesion 02:
    
    printf("\n2.Which is the largest planet in our Solar System? \n A) Earth B) Jupiter \n C) Saturn D) Neptune \n");

    scanf(" %c",&q2);

    if(q2 == 'b' || q2 == 'B'){
        printf("Congratulations You made it right,You got 10 points.\n");
        point += 10;
    }else{
        printf("Ohh noo You made a wrong answer, best of luck for the next question.\n");
    }

        //! Quesion 03:
    
    printf("\n3.Who wrote the play Romeo and Juliet? \nA) William Shakespeare B) Charles Dickens \n C) Mark Twain D) Leo Tolstoy \n");

    scanf(" %c",&q3);

    if(q3 == 'a' || q3 == 'A'){
        printf("Congratulations You made it right,You got 10 points.\n");
        point += 10;
    }else{
        printf("Ohh noo You made a wrong answer, best of luck for the next question.\n");
    }

    
        //! Quesion 04:
    
    printf("\n4.Which is the fastest land animal? \n A) Tiger B) Lion \n C) Horse D) Cheetah \n");

    scanf(" %c",&q4);

    if(q4 == 'd' || q4 == 'D'){
        printf("Congratulations You made it right,You got 10 points.\n");
        point += 10;
    }else{
        printf("Ohh noo You made a wrong answer, best of luck for the next question.\n");
    }

     //! Quesion 05:
    
    printf("\n5.Which element has the chemical symbol O? \n A) Oxygen B) Nitrogen \n C) Helium D) Oxide \n");

    scanf(" %c",&q5);

    if(q5 == 'a' || q5 == 'A'){
        printf("Congratulations You made it right,You got 10 points.\n");
        point += 10;
    }else{
        printf("Ohh noo You made a wrong answer. \n");
    }

    printf("So, Now time to see your points!! \n");

    printf("\n You have made %d points, Congratulations", point);
    printf("\n Want to see the answer script? [Y]es or [N]o: ");
    scanf(" %c",&q6);
    
    q6 == 'Y' || q6 == 'y'? printf("\n Send me 1500 taka on BKASH") : exit(0);

    



    


   


    return 0;
}