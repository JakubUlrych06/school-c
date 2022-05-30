#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int nextPlayer = 648345;
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
  int credits2 = 300;
  int bet2 = 0;
  int credits3 = 300;
  int bet3 = 0;
  int card2 = 0;
  float cardPack2 = 0;
  int aCardsInQueue2 = 0;
  int card3 = 0;
  float cardPack3 = 0;
  int aCardsInQueue3 = 0;
  int currentA2 = 0;
  int aCardOne2 = 0;
  int currentA3 = 0;
  int aCardOne3 = 0;
  int space()
  {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  }
  int pickCards()
  {
    for(int ii = 0; ii < 2; ii ++)
   {
     cards();
   }
   for(int iii = 0; iii < 2; iii ++)
   {
     cards2();
   }
   for(int iiii = 0; iiii < 2; iiii ++)
   {
     cards3();
   }
  }
  int placeBetFailed()
  {
    bet = 0;
    placeBet1();
  }
  int placeBetFailed2()
  {
    bet2 = 0;
    placeBet2();
  }
  int placeBetFailed3()
  {
    bet3 = 0;
    placeBet3();
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
  }
  int aCard2()
  {
    printf("\nand you have receved a A card");
    printf("\nPlease enter its value. Options: 1 or 11\n");
    scanf("%d", &currentA2); 
    getchar();
    if (currentA2 > 10)
    {
      aCardOne2 = 11;
    }
     if (currentA2 < 11)
    {
      aCardOne2 = 1;
    }
    cardPack2 = cardPack2 + aCardOne2;
    printf("\n\nCard A has been added to your cards\n");
    aCardsInQueue2 = aCardsInQueue2 - 1;
    
  }
  int aCard3()
  {
    printf("\nand you have receved a A card");
    printf("\nPlease enter its value. Options: 1 or 11\n");
    scanf("%d", &currentA3); 
    getchar();
    if (currentA3 > 10)
    {
      aCardOne3 = 11;
    }
     if (currentA3 < 11)
    {
      aCardOne3 = 1;
    }
    cardPack3 = cardPack3 + aCardOne3;
    printf("\n\nCard A has been added to your cards\n");
    aCardsInQueue3 = aCardsInQueue3 - 1;
    
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
  int cards2()
    {
    card2 = rand() % 11;  
    if (card2 > 1)
 {
    cardPack2 = cardPack2 + card2;
 }
else
{
   aCardsInQueue2 = aCardsInQueue2 + 1;
}
    }
  int cards3()
    {
    card3 = rand() % 11;    
    if (card3 > 1)
 {
    cardPack3 = cardPack3 + card3;
 }
else
{
   aCardsInQueue3 = aCardsInQueue3 + 1;
}
    }
  int placeBet1()
  {
    printf("\n\nPlayer 1\n\n");
    printf("Your current Money: %i\nPlace your bet\n", credits);
    scanf("%d", &bet);
    getchar();
    if (bet < credits + 1)
    {
      credits = credits - bet;
    }
    else
    {
      space();
      printf("You dont have enough money, place bet that you can afford\n");
      placeBetFailed();
    }
      space();    
      placeBet2();
  }
  int placeBet2()
  {
     printf("\n\nPlayer 2\n\n");
    printf("Your current Money: %i\nPlace your bet\n", credits2);
    scanf("%d", &bet2);
    getchar();
    if (bet2 < credits2 + 1)
    {
      credits2 = credits2 - bet2;
    }
    else
    {
      space();
      printf("You dont have enough money, place bet that you can afford\n");
      placeBetFailed2();
    }
    space();    
    placeBet3();
  }
  int placeBet3()
  {
    printf("\n\nPlayer 3\n\n"); 
    printf("Your current Money: %i\nPlace your bet\n", credits3);
    scanf("%d", &bet3);
    getchar();
    if (bet3 < credits3 + 1)
    {
      credits3 = credits3 - bet3;
    }
    else
    {
      space();
      printf("You dont have enough money, place bet that you can afford\n");
      placeBetFailed3();
    }
      space();  
      next();
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
  int HITORSTAY2()
  {
    printf("If you want to 'hit' type 1 and if you want to 'stay' type 0\n");
    scanf("%i", &hitOrStay);
    getchar();
    if (hitOrStay == 1)
    {
      HIT2();
    }
    else
    {
      STAY2();
    }
  }
  int HITORSTAY3()
  {
    printf("If you want to 'hit' type 1 and if you want to 'stay' type 0\n");
    scanf("%i", &hitOrStay);
    getchar();
    if (hitOrStay == 1)
    {
      HIT3();
    }
    else
    {
      STAY3();
    }
  }
  int BUST()
  {
    printf("\nYou busted and lose your bet\nYour current credit is %i\n", credits);
  }
  int BUST2()
  {
    printf("\nYou busted and lose your bet\nYour current credit is %i\n", credits2);
  }
  int BUST3()
  {
    printf("\nYou busted and lose your bet\nYour current credit is %i\n", credits3);
  }
  int HIT()
{
  cards();
}
  int HIT2()
{
  cards2();
}
  int HIT3()
{
  cards3();
}
  int STAY()
{

}
  int STAY2()
{

}
  int STAY3()
{

}
  int chack()
  {
   /* if(aCardsInQueue > 0)
    {
       aCard();
    }
    
    if (cardPack > 21)
    {
     BUST();
    }

    if(aCardsInQueue2 > 0)
    {
       aCard2();
    }
    
    if (cardPack2 > 21)
    {
     BUST2();
    }
    if(aCardsInQueue3 > 0)
    {
       aCard3();
    }
    
    if (cardPack3 > 21)
    {
     BUST3();
    }
    */
  }
  int next()
{
  space();
  printf("Player 1\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack);
  HITORSTAY();
  chack();
  chack();
  chack();
  space();
  printf("Player 1\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack);
  printf("\nType '1' to switch to next player\n");
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next2();
  }
}
  int next2()
{
  space();
  printf("Player 2\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack2);
  HITORSTAY2();
  chack();
  chack();
  chack();
  space();
  printf("Player 2\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack2);
  printf("\nType '1' to switch to next player\n");
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next3();
  }
}
  int next3()
{
  space();
  printf("Player 3\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack3);
  HITORSTAY3();
  chack();
  chack();
  chack();
  space();
  printf("Player 3\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack3);
  printf("\nType '1' to switch to next player\n");
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next();
  }
}

int main()
{
  srand((unsigned) time(&t));
  pickCards();
  dealerSpawn();
  printf("Welcome to blackjack game type 1 to start the game\n");
  scanf("%d", &start); 
  getchar();
  if (start == 1)
  {

    space();
    placeBet1();
    //printf("Your current total card value is: %f", cardPack);
    //next();
    scanf("%d", &end);
     return 0;
  }

}
