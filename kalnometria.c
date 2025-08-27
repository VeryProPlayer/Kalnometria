#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pi 3.14159265358979323846
#include <unistd.h>
void derad(){
double degrees;
double rad;
printf("Insert an angle:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf(" The radians is : %lf", rad);
}

void rade(){
double rad;
double degrees;
printf("Insert the radians:\n");
scanf("%lf", &rad);
degrees = rad* (180/pi);
printf("The degrees is :%lf", degrees);
}
void sine(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Sine: %f\n", sin(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Sine: %f\n", sin(rad));

sleep(2);
}


}
//cosinus
void cosinus(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Cosinus: %f\n", cos(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Cosinus: %f\n", cos(rad));

sleep(2);
}
}

//tan
void tangent(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Cosinus: %f\n", tan(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Cosinus: %f\n", tan(rad));

sleep(2);
}
}
//csc
void cosecant(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Cosinus: %f\n", 1/sin(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Cosinus: %f\n", 1/sin(rad));

sleep(2);
}
}
//sec
void secant(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Cosinus: %f\n", 1/cos(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Cosinus: %f\n", 1/cos(rad));


sleep(2);
}
}

void wysz(){
return 0;

}

//cot
void cotangent(){
char choice[20];
double rad, degrees;
printf("Would you like to enter the number in degrees or radians?:\n");
scanf("%19s", choice);
if (strcmp(choice, "degrees") == 0 || strcmp(choice, "Degrees") == 0){
printf("Insert any number in degrees:\n");
scanf("%lf", &degrees);
rad = degrees* (pi/180);
printf("Cosinus: %f\n", 1/tan(rad));
sleep(2);
}else if (strcmp(choice, "radians") == 0 || strcmp(choice, "Radians") == 0)
{
printf("Insert any number in radians:\n");
scanf("%lf", &rad);
printf("Cosinus: %f\n", 1/tan(rad));

sleep(2);
}
}

int main(){
    char choice;
while(1){
printf("=========================================================\n");
printf("Welcome, What would you like to do here ?:\n\n");
printf("1. Degrees to Radians:\n");
printf("2. Radians to Degrees:\n");
printf("3. sin(0):\n");
printf("4. cos(0):\n");
printf("5. tan(0):\n");
printf("6. csc(0):\n");
printf("7. sec(0):\n");
printf("8. cot(0):\n");
printf("9. EXIT:\n");
printf("=========================================================\n");
scanf(" %c", &choice);
switch(choice){
    case '1':
        derad();
        break;
    case '2':
        rade();
        break;
    case '3':
        sine();
        break;
    case '4':
        cosinus();
        break;
    case '5':
        tangent();
        break;
   case '6':
        cosecant();
        break;
   case '7':
        secant();
         break;
   case '8':
        cotangent();
        break;
    case '9'
        wysz();
    break;
}



}
}
