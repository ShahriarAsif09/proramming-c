int main(void) {

int roll;
printf("Enter Roll Number=");

scanf("%d",&roll);
if(roll>=1 && roll<=30)
printf("Roll %d is in group A %n",roll);
else if(roll>=31 && roll<=60)
printf("Roll %d is in group B %n",roll);
else if(roll>=61 && roll<=100)
printf("Roll %d is in group C %n",roll);
else;
printf("Roll %d is invaide %n",roll);
return 0;
}
