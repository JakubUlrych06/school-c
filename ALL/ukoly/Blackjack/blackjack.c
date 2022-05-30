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
  int hitOrStay = 5;
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
  int setBust1 = 0;
  int setBust2 = 0;
  int setBust3 = 0;
  int playersEnded = 0;
  int blocked1 = 0;
  int blocked2 = 0;
  int blocked3 = 0;
  int setWin1 = 0;
  int setWin2 = 0;
  int setWin3 = 0;
  int dealerBust = 0;
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
        if(pickAcard < 5)
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
    aCardsInQueue = aCardsInQueue - 1;
    printf("\nYou have receved a A card");
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
    space();
    printf("Player 1");
    printf("\n\nCard A has been added to your cards\n");
    printf("\nVisible dealer card has value: %f", cardPackDealer);
    printf("\nYour current total card value is: %f\n", cardPack);

  }
  int aCard2()
  {
    aCardsInQueue2 = aCardsInQueue2 - 1;
    printf("\nYou have receved a A card");
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
    space();
    printf("Player 2");
    printf("\n\nCard A has been added to your cards\n");
    printf("\nVisible dealer card has value: %f", cardPackDealer);
    printf("\nYour current total card value is: %f\n", cardPack2);
  }
  int aCard3()
  {
    aCardsInQueue3 = aCardsInQueue3 - 1;
    printf("\nYou have receved a A card");
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
    space();
    printf("Player 3");
    printf("\n\nCard A has been added to your cards\n");
    printf("\nVisible dealer card has value: %f", cardPackDealer);
    printf("\nYour current total card value is: %f\n", cardPack3);
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
    space();
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
    if (setBust1 != 3)
    {
    playersEnded = playersEnded + 1;
    printf("\nYou busted and lose your bet\nWait till the end of this round");
    setBust1 = 3;
    }
  }
  int BUST2()
  {
    if (setBust2 != 3)
    {
    playersEnded = playersEnded + 1;
    printf("\nYou busted and lose your bet\nWait till the end of this round");
    setBust2 = 3;
    }
  }
  int BUST3()
  {
    if (setBust3 != 3)
    {
    playersEnded = playersEnded + 1;
    printf("\nYou busted and lose your bet\nWait till the end of this round");
    setBust3 = 3;
    }
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
if (blocked1 == 0)
  {
  blocked1 = 1;
  playersEnded = playersEnded + 1;
  }
  space();
  printf("Player 1\n");
  printf("Wait till other players finish playing this round");
  printf("\nType '1' to switch to next player\n");  
}
  int STAY2()
{
if (blocked2 == 0)
  {
  blocked2 = 1;
  playersEnded = playersEnded + 1;
  }
  space();
  printf("Player 2\n");
  printf("Wait till other players finish playing this round");
  printf("\nType '1' to switch to next player\n");
}
  int STAY3()
{
  if (blocked3 == 0)
  {
  blocked3 = 1;
  playersEnded = playersEnded + 1;
  }
  space();
  printf("Player 3\n");
  printf("Wait till other players finish playing this round");
  printf("\nType '1' to switch to next player\n");
}
  int chack()
  {
   if(aCardsInQueue > 0)
    {
       aCard();
    }
    
    if (cardPack > 21)
    {
     BUST();
    }
    if (cardPack == 21)
    {
      if(setWin1 == 0)
      {
        setWin1 = 1;
        playersEnded = playersEnded + 1;
      }
    }
    if(playersEnded == 3)
    {
      endRound();
    }
  }
  int chack2()
  {
    if(aCardsInQueue2 > 0)
    {
       aCard2();
    }
    
    if (cardPack2 > 21)
    {
     BUST2();
    }
     if (cardPack2 == 21)
    {
      if(setWin2 == 0)
      {
        setWin2 = 1;
        playersEnded = playersEnded + 1;
      }
    }
  if(playersEnded == 3)
      {
        endRound();
      }
  }
  int chack3()
  {
    if(aCardsInQueue3 > 0)
    {
       aCard3();
    }
    
    if (cardPack3 > 21)
    {
     BUST3();
    }
    if (cardPack3 == 21)
    {
      if(setWin3 == 0)
      {
        setWin3 = 1;
        playersEnded = playersEnded + 1;
      }
    }
    if(playersEnded == 3)
    {
      endRound();
    }
  }
  int next()
{
  if (playersEnded == 3)
  {
    endRound();
  }

  if (setWin1 == 0)
  {
  if (blocked1 == 0)
  {
   if (setBust1 < 1)
    {
  space();
  printf("Player 1\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack);
  chack();
  chack();
  chack();
  if(setBust1 != 3)
  {
  HITORSTAY();
  }
  chack();
  chack();
  chack();
  space();
  printf("Player 1\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack);
  printf("\nType '1' to switch to next player\n");
   }
    else
    {
      space();
      printf("Player 1\n");
      printf("You have busted and lose your bet wait till the round ends...");
      printf("\nType '1' to switch to next player\n");
  }
  }
  else 
  {
    STAY();
  }
  }
  else
  {   
      space();
      printf("Player 1\n");
      printf("Wait till other players finish playing this round");
      printf("\nType '1' to switch to next player\n");  
  }
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next2();
  }
}
  int next2()
{
  if (playersEnded == 3)
  {
    endRound();
  }
  if (setWin2 == 0)
  {
  if (blocked2 == 0)
  {
   if (setBust2 < 1)
    {
  space();
  printf("Player 2\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack2);
  chack2();
  chack2();
  chack2();
  if(setBust2 != 3)
  {
  HITORSTAY2();
  }
  chack2();
  chack2();
  chack2();
  space();
  printf("Player 2\n");
  printf("\nVisible dealer card has value: %f", cardPackDealer);
  printf("\nYour current total card value is: %f\n", cardPack2);
  printf("\nType '1' to switch to next player\n");
   }
    else
    {
      space();
      printf("Player 2\n");
      printf("You have busted and lose your bet wait till the round ends...");
      printf("\nType '1' to switch to next player\n");
  }
  }
  else 
  {
    STAY2();
  }
}
  else
  {
      space();
      printf("Player 2\n");
      printf("Wait till other players finish playing this round");
      printf("\nType '1' to switch to next player\n");  
  }
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next3();
  }
}
  int next3()
{
  if (playersEnded == 3)
  {
    endRound();
  }
  if (setWin3 == 0)
  {
  if (blocked3 == 0)
  {
   if (setBust3 < 1)
    {
    space();
    printf("Player 3\n");
    printf("\nVisible dealer card has value: %f", cardPackDealer);
    printf("\nYour current total card value is: %f\n", cardPack3);
    chack3();
    chack3();
    chack3();
    if(setBust3 != 3)
  {
    HITORSTAY3();
  }
    chack3();
    chack3();
    chack3();
    space();
    printf("Player 3\n");
    printf("\nVisible dealer card has value: %f", cardPackDealer);
    printf("\nYour current total card value is: %f\n", cardPack3);
    printf("\nType '1' to switch to next player\n");
    }
    else
    {
      space();
      printf("Player 3\n");
      printf("You have busted and lose your bet wait till the round ends...");
      printf("\nType '1' to switch to next player\n");
  }
  }
  else 
  {
    STAY3();
  }
  }
  else
  {
      space();
      printf("Player 3\n");
      printf("Wait till other players finish playing this round");
      printf("\nType '1' to switch to next player\n");  
  }
  scanf("%i", &nextPlayer);
  getchar();
  if(nextPlayer != 648345)
  {
    next();
  }
}
  int playerEnd1()
  {
    printf("\n\n");
    
    if (setBust1 == 0)
    {
      if (dealerBust == 0)
      {
        if (blocked1 == 1)
        {
         if (cardPack > cardPackDealer)
         {
           bet = bet * 2;
           credits = credits + bet;
           printf("\nPlayer 1\n");
            printf("Has higher card value than dealer that means 'player 1' has won\n");
            printf("Your current credits: %i\n", credits);
         }
        else
         {
           printf("\nPlayer 1\n");
            printf("Has lower card value than dealer that means 'player 1' has lose thier bet\n");
           printf("Your current credits: %i\n", credits);
         }
        }
         if (setWin1 == 1)
        {
           bet = bet * 1.5;
           credits = credits + bet;
           printf("\nPlayer 1\n");
            printf("Has card walue that is equals to 21 that means you won 1.5 your bet\n");
           printf("Your current credits: %i\n", credits);
       }
      }
      else 
      {
          bet = bet * 2;
          credits = credits + bet;
          printf("\nDealer has busted that means you win twice your bet\n");
          printf("Your current credits: %i\n", credits);
      }
    }
    else
    {
        printf("\nPlayer 1\n");
        printf("Has busted that means 'player 1' has losed thier bet\n");
        printf("Your current credits: %i\n", credits);
    }
      bet = 0;
  }
  int playerEnd2()
  {
    printf("\n\n");
      if (setBust2 == 0)
        {
          if (dealerBust == 0)
          {
            if (blocked2 == 1)
            {
              if (cardPack2 > cardPackDealer)
              {
              bet2 = bet2 * 2;
              credits2 = credits2 + bet2;
              printf("\nPlayer 2\n");
              printf("Has higher card value than dealer that means 'player 2' has won\n");
              printf("Your current credits: %i\n", credits2);
              }
              else
              {
              printf("\nPlayer 2\n");
              printf("Has lower card value than dealer that means 'player 2' has lose thier bet\n");
              printf("Your current credits: %i\n", credits2);
              }
            }
            if (setWin2 == 1)
            {
             bet2 = bet2 * 1.5;
             credits2 = credits2 + bet2;
             printf("\nPlayer 2\n");
             printf("Has card walue that is equals to 21 that means you won 1.5 your bet\n");
             printf("Your current credits: %i\n", credits2);
           }
          }
          else 
          {
            bet2 = bet2 * 2;
            credits2 = credits2 + bet2;
            printf("\nDealer has busted that means you win twice your bet\n");
            printf("Your current credits: %i\n", credits2);
          
          }
      }
      else
      {
        printf("\nPlayer 2\n");
        printf("Has busted that means 'player 2' has losed thier bet\n");
        printf("Your current credits: %i\n", credits2);
      }
      bet2 = 0;
  }
  int playerEnd3()
  {
    printf("\n\n");
    if (setBust3 == 0)
        {
          if (dealerBust == 0)
          {
            if (blocked3 == 1)
             {
               if (cardPack3 > cardPackDealer)
                {
                  bet3 = bet3 * 2;
                  credits3 = credits3 + bet3;
                  printf("\nPlayer 3\n");
                  printf("Has higher card value than dealer that means 'player 3' has won\n");
                  printf("Your current credits: %i\n", credits3);
                }
                else
                {
                 printf("\nPlayer 3\n");
                 printf("Has lower card value than dealer that means 'player 3' has lose thier bet\n");
                 printf("Your current credits: %i\n", credits3);
                }
              }
            if (setWin3 == 1)
              {
                bet3 = bet3 * 1.5;
                credits3 = credits3 + bet3;
                printf("\nPlayer 3\n");
                printf("Has card walue that is equals to 21 that means you won 1.5 your bet\n");
                printf("Your current credits: %i\n", credits3);
              }
          }
          else 
          {
            bet3 = bet3 * 2;
            credits3 = credits3 + bet3;
            printf("\nDealer has busted that means you win twice your bet\n");
            printf("Your current credits: %i\n", credits3);
          
          }
      }
      else
      {
        printf("\nPlayer 3\n");
        printf("Has busted that means 'player 3' has losed thier bet\n");
        printf("Your current credits: %i\n", credits3);
      }
      bet3 = 0;
  }
  int dealerSapawnTestBugFix()
  {
    dealerSpawnTest();
  }
  int dealerSpawnTest()
  {
    if (cardPackDealer < 16)
    {
      dealerSpawn();
      dealerSapawnTestBugFix();
    }
    if (cardPackDealer > 21)
    {
      if(dealerBust == 0)
      {
        dealerBust = 1;
      }
    }
  }
  int resetValues()
  {
    bet = 0;
    bet2 = 0;
    bet3 = 0;
    cardPack = 0;
    cardPack2 = 0;
    cardPack3 = 0;
    cardPackDealer = 0;
    setBust1 = 0;
    setBust2 = 0;
    setBust3 = 0;
    dealerBust = 0;
    blocked1 = 0;
    blocked2 = 0;
    blocked3 = 0;
    setWin1 = 0;
    setWin2 = 0;
    setWin3 = 0;
    playersEnded = 0;
  }
  int endRound()
  {
    dealerSpawn();
    dealerSpawnTest();
    space();
    printf("Round ended...\n\nDealer total card value is %f", cardPackDealer);
    playerEnd1();
    playerEnd2();
    playerEnd3();
    resetValues();
    pickCards();
    dealerSpawn();
    printf("\n\nType 1 to start new round\n");
    scanf("%d", &start); 
    getchar();
  if (start != 4387465)
  {
    placeBet1();
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
