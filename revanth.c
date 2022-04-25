#include <stdio.h>
int main()
{
 int a,quantity,rate,total;
 printf("\nMENU CARD \nSelect your dish \n1.Paneer Tikka \n2.Chicken Tikka \n3.Dal Makhni \n4.Butter Chicken \n5.Paneer Butter Masala\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Paneer Tikka.\n Enter the quantity :");
    scanf("%d",&quantity);
    rate=5;
    total=quantity*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 2:
    printf("\nYou have selected Chicken Tikka.\n Enter the quantity :");
    scanf("%d",&quantity);
    rate=10;
    total=quantity*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 3:
    printf("\nYou have selected Dal Makhni.\n Enter the quantity :");
    scanf("%d",&quantity);
    rate=15;
    total=quantity*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 4:
    printf("\nYou have selected Butter Chicken.\n Enter the quantity :");
    scanf("%d",&quantity);
    rate=20;
    total=quantity*rate;
    printf("\nTotal amount :%d",total);
    break;
  case 5:
    printf("\nYou have selected Paneer Butter Masala.\n Enter the quantity :");
    scanf("%d",&quantity);
    rate=15;
    total=quantity*rate;
    printf("\nTotal amount :%d",total);
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}