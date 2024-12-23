#include <stdio.h>
#include <math.h>
float length, width, base, height, radius, side;
void AreaOfRectangle(){
            printf("Enter the length and width of Rectangle");
            scanf("%f %f",&length,&width);
            printf("Area of the Rectangle is %f",length*width);
}
void AreaOfTriangle(){
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            printf("The area of the triangle is: %.f\n",0.5*base*height);
}
void AreaOfCircle(){
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            printf("The area of the circle is: %f\n",M_PI * radius * radius );
}
void AreaOfSquare(){
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            printf("The area of the square is: %f\n", side*side);
}
void AreaOfParallelogram(){
            printf("Enter the base and height of the parallelogram: ");
            scanf("%f %f", &base, &height);
            printf("The area of the parallelogram is: %f\n", base*height);

}
int main() {
    int choice;

    printf("Choose the polygon to calculate the area:\n");
    printf("1. Rectangle\n");
    printf("2. Triangle\n");
    printf("3. Circle\n");
    printf("4. Square\n");
    printf("5. Parallelogram\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice){
        case 1: AreaOfRectangle();break;
        case 2: AreaOfTriangle();break;
        case 3: AreaOfCircle();break;
        case 4: AreaOfSquare();break;
        case 5: AreaOfParallelogram();break;
        default: printf("invaild Input");break;


    }
    printf("\nThank you for using polygon calculator");
    return 0;
}
