#include <msp430g2553.h>
#define LED_RED BIT0
void delay(int num);
int main()
{
  WDTCTL = WDTPW + WDTHOLD; // Stop watchdog timer
  P1DIR |= LED_RED; // initiate pin P1.0 is OUTPUT
  while(1) // loop()
  {
      P1OUT ^= LED_RED;
      delay(1000); //delay 1s
  }
}
void delay(int num)
{
  for(int i=0;i<=num;i++)
    __delay_cycles(1000);// milis second
}
