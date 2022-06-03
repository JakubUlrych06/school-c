#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int end;
  int num;
  int card;
  time_t t;
  float cardPack = 0;
  int cardDealer = 0;
  float cardPackDealer = 0;
  int currentA;
  int aCardOne;
  int start;
  int aCardsInQueue = 0;
  int pickAcard;
  int bet;
  int credits = 300;
  int hitOrStay;
  int placeBetFailed()
  {
    bet = 0;
    placeBet();
  }
  int dealerSpawn()
  {
    
    cardDealer = rand() % 11;    
    if (cardDealer > 1)
      {
        cardPackDealer = cardPackDealer + cardDealer;
      }
      else
     {pickAcard = rand() %20;
        if(pickAcard < 10)
        {
          cardPackDealer = cardPackDealer + 11;
        }
        else
        {
          cardPackDealer = cardPackDealer + 1;
        }
     }
    
  }
  int aCard()
  {
    
    printf("\nand you have receved a A card");
    printf("\nPlease enter its value. Options: 1 or 11\n");
    scanf("%d", &currentA); 
    getchar();
    if (currentA > 10)
    {
      aCardOne = 11;
    }
     if (currentA < 11)
    {
      aCardOne = 1;
    }
    cardPack = cardPack + aCardOne;
    printf("\n\nCard A has been added to your cards\n");
    aCardsInQueue = aCardsInQueue - 1;
    next();
  }
  int cards()
    {
    card = rand() % 11;    
    if (card > 1)
 {
    cardPack = cardPack + card;
 }
else
{
   aCardsInQueue = aCardsInQueue + 1;
}
    }
  int placeBet()
  {
    printf("Your current Money: %i\nPlace your bet\n", credits);
    scanf("%d", &bet);
    getchar();
    if (bet < credits + 1)
    {
      credits = credits - bet;
    }
    else
    {
      printf("You dont have enough money, place bet that you can afford\n");
      placeBetFailed();
    }
  }
  int HITORSTAY()
  {
    printf("If you want to 'hit' type 1 and if you want to 'stay' type 0\n");
    scanf("%i", &hitOrStay);
    getchar();
    if (hitOrStay == 1)
    {
      HIT();
    }
    else
    {
      STAY();
    }
  }
  int BUST()
  {
    printf("\nYou busted and lose your bet\nYour current credit is %i\n", credits);
    return 0;
  }
  int HIT()
{
  cards();
  next();
}
  int STAY()
{

}
  int next()
{
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack);
  if(aCardsInQueue > 0)
    {
       aCard();
    }
  if (cardPack > 21)
  {
    BUST();
  }
  HITORSTAY();
}

int main()
{
  srand((unsigned) time(&t));
  dealerSpawn();
  printf("Welcome to blackjack game type 1 to start the game\n");
  scanf("%d", &start); 
  getchar();
  if (start == 1)
  {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    placeBet();
    for(int ii = 0; ii < 2; ii ++)
   {
     cards();
   }

    //printf("Your current total card value is: %f", cardPack);
    next();
    scanf("%d", &end);
     return 0;
  }

}
