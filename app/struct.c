#include <stdio.h>
struct p {
    char Nom[20];
    char Prenom[20];
    struct {
        int day;
        int month;
        int year;
    } dtness;
    char matricule[20];
};
int main() {
    struct p person1;
    printf("enter Ur First Name : ");
    scanf("%s",person1.Nom);
    printf("enter Ur LastName : ");
    scanf("%s",person1.Prenom);
    printf("enter Ur matricule Number : ");
    scanf("%s",person1.matricule);
    // 2. For Integers: Use simple assignment (=)
    printf("donner le jour :");
    scanf("%d", &person1.dtness.day);
    printf("donner le mois :");
    scanf("%d", &person1.dtness.month);
    printf("donner le annee :");
    scanf("%d", &person1.dtness.year);
    
    printf("Nom: %s, Born: %02d/%02d/%d\n", 
            person1.Nom, 
            person1.dtness.day, 
            person1.dtness.month, 
            person1.dtness.year);
    return 0;
}
