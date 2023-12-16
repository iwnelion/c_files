int main()
{
  int num1=0, num2=0, sum=0;
  printf("gimme one number \n");
  scanf("%d", &num1);
  printf("gimme another number \n");
  scanf("%d", &num2);
  sum=num1+num2;
  printf("the sum of the numbers you gave me is %d \n", sum);
  sum=num1-num2;
  printf("the subtraction of the numbers is %d \n", sum);
  sum=num1*num2;
  printf("the multiplication of the numbers is %d \n", sum);
  return 0;
}