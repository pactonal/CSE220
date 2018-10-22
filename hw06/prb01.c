/*******************************************************************************
#include <stdio.h>

int main(void) {
    char selectedCard;
    printf("Choose a card\n");
    scanf("%c", &selectedCard);

    if (selectedCard == 'J' || selectedCard == 'Q' || selectedCard == 'K') {
        printf("Your earn 10 points\n");
    } else if ((selectedCard >= '5' && selectedCard <= '9')
                || selectedCard == 'T') {
        printf("You earn 2 pts\n");
    } else if (selectedCard == '1') {
        printf("You earn 20 pts\n");
    } else {
        printf("No cheating allowed. You earn 0 pts\n");
    }

    return 0;
}

*******************************************************************************/
#include <stdio.h>
#define jack 'J'
#define queen 'Q'
#define king 'K' 
#define ace '1'
#define five '5'
#define nine '9'
#define ten 'T'

int main(void) {

    typedef char Card;
    Card selectedCard;

    printf("Choose a card\n");
    scanf("%c", &selectedCard);

    if (selectedCard == jack || selectedCard == queen || selectedCard == king) {
        printf("Your earn 10 points\n");
    } else if ((selectedCard >= five && selectedCard <= nine)
                || selectedCard == ten) {
        printf("You earn 2 pts\n");
    } else if (selectedCard == ace) {
        printf("You earn 20 pts\n");
    } else {
        printf("No cheating allowed. You earn 0 pts\n");
    }

    return 0;
}
