// Main Concept: Functions + parameters + return values
// Target Time: 15 min
// Create a unit converter for length: mm, cm, m, and km. Create separate functions for the conversions instead of putting all calculations inside main().


#include <stdio.h>

void convert_mm_to_cm(float mm);
void convert_mm_to_m(float mm);
void convert_mm_to_km(float mm);
void convert_cm_to_mm(float cm);
void convert_cm_to_m(float cm);
void convert_cm_to_km(float cm);
void convert_m_to_mm(float m);
void convert_m_to_cm(float m);
void convert_m_to_km(float m);
void convert_km_to_mm(float km);
void convert_km_to_cm(float km);
void convert_km_to_m(float km);

int main()
{
    int choice;
    float value;
    do
    {
        printf("\n\n---------- Unit Converter ----------\n\n");

        printf("1. Convert mm to cm\n");
        printf("2. Convert mm to m\n");
        printf("3. Convert mm to km\n");
        printf("4. Convert cm to mm\n");
        printf("5. Convert cm to m\n");
        printf("6. Convert cm to km\n");
        printf("7. Convert m to mm\n");
        printf("8. Convert m to cm\n");
        printf("9. Convert m to km\n");
        printf("10. Convert km to mm\n");
        printf("11. Convert km to cm\n");
        printf("12. Convert km to m\n");
        printf("13. Exit\n");


        printf("Enter the Choice(1-12): ");
        scanf("%d", &choice);



        switch (choice)
        {
        case 1:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_mm_to_cm(value);
            break;

        case 2:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_mm_to_m(value);
            break;

        case 3:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_mm_to_km(value);
            break;
            
        case 4:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_cm_to_mm(value);
            break;
            
        case 5:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_cm_to_m(value);
            break;
            
        case 6:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_cm_to_km(value);
            break;
            
        case 7:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_m_to_mm(value);
            break;
           
        case 8:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_m_to_cm(value);
            break;
            
        case 9:
             printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_m_to_km(value);
            break;
            
        case 10:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_km_to_mm(value);
            break;
            
        case 11:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_km_to_cm(value);
            break;
            
        case 12:
            printf("Enter value in mm: ");
            scanf("%f", &value);
            convert_km_to_m(value);
            break;
        
        case 13:
            printf("Thank you for using the Converter.\n");
            break;        
            
        
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }


    } while (choice != 13);
    return 0;
    
}

void convert_mm_to_cm(float mm)
{
    float cm = mm / 10.0;
    printf("%.2f mm is equal to %.2f cm\n", mm, cm);
}

void convert_mm_to_m(float mm)
{
    float m = mm / 1000;
    printf("%.2f mm is equal to %.2f m\n",mm, m);
}
void convert_mm_to_km(float mm)
{
    float km = mm / 1000000;
    printf("%.2f mm is equale to %.2f km\n", mm, km);
}
void convert_cm_to_mm(float cm)
{
    float mm = cm * 10;
    printf("%.2f cm is equale to %.2f mm\n", cm, mm);
}
void convert_cm_to_m(float cm)
{
    float m = cm / 100;
    printf("%.2f cm is equale to %.2f m\n", cm, m);
}
void convert_cm_to_km(float cm)
{
    float km = cm / 1000000;
    printf("%.2f cm is equal to %.2f km", cm, km);
}
void convert_m_to_mm(float m)
{
    float mm = m * 1000;
    printf("%.2f m is equal to %.2f mm\n",m, mm);   
}
void convert_m_to_cm(float m)
{
    float cm = m * 100;
    printf("%.2f m is equal to %.2f cm\n",m, cm);
}
void convert_m_to_km(float m)
{
    float km = m / 1000;
    printf("%.2f m is equal to %.2f km", m, km);
}
void convert_km_to_mm(float km)
{
    float mm = km * 1000000;
    printf("%.2f km is equal to %.2f mm",km, mm);
}
void convert_km_to_cm(float km)
{
    float cm = km * 1000000;
    printf("%.2f km is equal to %.2f cm\n", km,cm);
}
void convert_km_to_m(float km)
{
    float m = km * 1000000;
    printf("%.2f km is equal to %.2f m\n", km,m);
}


