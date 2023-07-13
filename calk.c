// This is a 'simple' calculator for a few specific things that i used during last year of high school
// YES, the sin cos tan part is very bloated and could be remade but im lazy
#include <stdio.h>
#include <math.h>

double a, b, c, h, k, z, y, x;
double pi = atan(1) * 4;
int c0, c1, c2, c3, c4;
int e;

void empty_input(void) /* simple helper-function to empty stdin */  //(taken from stack overflow because im not a smart)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
        c = getchar();
}
void cleanscreen(void)
{
    for (int i = 0; i < 50; i++) // clear the screen
    {
        printf("\n");
    }
}
void parabole(void)
{
    double a, b, c, h, k, y, x;
    int c0, c1, c2, c3, c4;

    printf("\n\nQuelle forme est connue?:\n(1)general,\n(2)canonique,\n(3)Factoriser\n:");
    scanf("%d", &c2);
    printf("\n");
    if (c2 == 1) // canonique
    {
        printf("a: ");
        scanf("%lf", &a);
        printf("b: ");
        scanf("%lf", &b);
        printf("c: ");
        scanf("%lf", &c);

        x = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); //Z1
        y = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); //Z2

        h = (-b) / (2 * a);
        k = ((4 * a * c) - pow(b, 2)) / (4 * a);

        printf("\n\ny = %gx^2 + %gx + %g\n", a, b, c); // general form
        printf("y = %g ( x - %g )^2 + %g \n", a, h, k); // canonique
        printf("y = %g ( x1 - %g ) ( x2 - %g ) \n", a, x, y);

        printf("\nZ1: %g\n", x);
        printf("Z2: %g\n", y);
        printf("\nh: %g\n", h);
        printf("k: %g\n", k);
        printf("\na: %g\n", a);
        printf("b: %g\n", b);
        printf("c: %g\n", c);

    }
    else if (c2 == 2)
    {
        printf("a: ");
        scanf("%lf", &a);
        printf("h: ");
        scanf("%lf", &h);
        printf("k: ");
        scanf("%lf", &k);


        x = (h)+sqrt((-k) / (a));
        y = (h)-sqrt((-k) / (a));

        b = -x - y;
        c = x * y;

        printf("\n\ny = %gx^2 + %gx + %g\n", a, b, c); // general form
        printf("y = %g ( x - %g )^2 + %g \n", a, h, k); // canonique
        printf("y = %g ( x1 - %g ) ( x2 - %g ) \n", a, x, y);

        printf("\nZ1: %g\n", x);
        printf("Z2: %g\n", y);
        printf("\nh: %g\n", h);
        printf("k: %g\n", k);
        printf("\na: %g\n", a);
        printf("b: %g\n", b);
        printf("c: %g\n", c);
    }
    else if (c2 == 3)
    {
        printf("a: ");
        scanf("%lf", &a);
        printf("Z1: ");
        scanf("%lf", &x);
        printf("Z2: ");
        scanf("%lf", &y);

        h = (x + y) / 2;
        k = a * (h - x) * (h - y);

        b = -x - y;
        c = x * y;

        printf("\n\ny = %gx^2 + %gx + %g\n", a, b, c); // general form
        printf("y = %g ( x - %g )^2 + %g \n", a, h, k); // canonique
        printf("y = %g ( x1 - %g ) ( x2 - %g ) \n", a, x, y);

        printf("\nZ1: %g\n", x);
        printf("Z2: %g\n", y);
        printf("\nh: %g\n", h);
        printf("k: %g\n", k);
        printf("\na: %g\n", a);
        printf("b: %g\n", b);
        printf("c: %g\n", c);

    }
}
void fn_de_sqrt(void)
{
    double a, h, k, x, y;
    int b;

    printf("h: ");
    scanf("%lf", &h);
    printf("k: ");
    scanf("%lf", &k);
    printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);

    printf("\nIs \"b\" positive or negative(Enter 1 or -1) ? : ");
    scanf("%d", &b);

    a = (y - k) / (sqrt(b * (x - h)));

    printf("y = %g sqrt( %d(x - %g) ) + %g", a, b, h, k);
}
void heron(void)
{
    double a, b, c, y, x;

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);

    y = (a + b + c) / 2;
    x = sqrt(y * (y - a) * (y - b) * (y - c));

    printf("%g\n", x);
}
void sct(void)
{
    double a, b, c, h, k, z, y, x;
    int c0, c1, c2, c3, c4;
    double pi = atan(1) * 4;
    double o, an, m, rd; //rd(Radians to degrees)
    printf("      /|\n");
    printf("     / |\n");
    printf("    /  |\n");
    printf("   /   |\n");
    printf("  /    |\n");
    printf(" /     |\n");
    printf("/2_____|\n");
    printf("    l   \n");
    printf("Find;\n (1)length\n (2)angle\n");
    scanf("%d", &c2);
    if (c2 == 1) //find length
    {
        printf("\n\nUse \n(1)Sin,\n(2)Cos,\n(3)Tan\n");
        scanf("%d", &c3);
        if (c3 == 1) //sin
        {
            printf("\nFind ;\n(1)Opposite,\n(2)Hypotenuse?\n");
            scanf("%d", &c4);
            if (c4 == 1) // opposite
            {
                printf("Enter hypotenuse and angle\n");
                printf("Hyp: ");
                scanf("%lf", &h);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = h * sin(rd);
                printf("%g\n", x);
            }
            else if (c4 == 2)
            {
                printf("Enter Opposite and angle\n");
                printf("O: ");
                scanf("%lf", &o);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = o / sin(rd);
                printf("%g\n", x);
            }
        }
        else if (c3 == 2) //cos
        {
            printf("\nFind ;\n(1)Adjacent,\n(2)Hypotenuse?\n");
            scanf("%d", &c4);
            if (c4 == 1) // opposite
            {
                printf("Enter hypotenuse and angle\n");
                printf("Hyp: ");
                scanf("%lf", &h);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = h * cos(rd);
                printf("%g\n", x);
            }
            else if (c4 == 2)
            {
                printf("Enter Adjacent and angle\n");
                printf("O: ");
                scanf("%lf", &a);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = a / cos(rd);
                printf("%g\n", x);
            }
        }
        else if (c3 == 3) //tan
        {
            printf("\nFind ;\n(1)Adjacent,\n(2)Opposite?\n");
            scanf("%d", &c4);
            if (c4 == 1) // opposite
            {
                printf("Enter Opposite and angle\n");
                printf("Hyp: ");
                scanf("%lf", &o);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = o / tan(rd);
                printf("%g\n", x);
            }
            else if (c4 == 2)
            {
                printf("Enter Adjacent and angle\n");
                printf("O: ");
                scanf("%lf", &a);
                printf("angle: ");
                scanf("%lf", &an);
                rd = an * pi / 180;
                x = a * tan(rd);
                printf("%g\n", x);
            }
        }
    }
    else if (c2 == 2)
    {
        printf("Use \n(1)Sin, \n(2)Cos or \n(3)Tan \n");
        scanf("%d", &c3);
        if (c3 == 1) //sin
        {
            printf("Opposite : ");
            scanf("%lf", &o);
            printf("Hypotenuse : ");
            scanf("%lf", &h);
            x = asin(o / h);
            rd = x * 180 / pi;
            printf("%g", rd);
        }
        else if (c3 == 2) // cos
        {
            printf("Adjacent : ");
            scanf("%lf", &a);
            printf("Hypotenuse : ");
            scanf("%lf", &h);
            x = acos(a / h);
            rd = x * 180 / pi;
            printf("%g", rd);
        }
        else if (c3 == 3) // tan
        {
            printf("Adjacent : ");
            scanf("%lf", &a);
            printf("Opposite : ");
            scanf("%lf", &o);
            x = atan(o / a);
            rd = x * 180 / pi;
            printf("%g", rd);
        }
    }
}
void T(void)
{
    double a, b, c;
    printf("\nConvert: \n F to C (1)\n C to F (2)\n C to K (3)\n K to C (4)\n F to K (5)\n K to F (6)\n: ");
    scanf("%d", &c2);
    if (c2 == 1) //f to c 
    {
        printf("�F: ");
        scanf("%lf", &a);
        x = (a - 32) * 0.5556;
        printf("\n�F: %g\n�C: %g", a, x);
    }
    else if (c2 == 2) // c to f
    {
        printf("�C: ");
        scanf("%lf", &a);
        x = a * 1.8 + 32;
        printf("\n�C: %g\n�F: %g", a, x);
    }
    else if (c2 == 3) // c to k
    {
        printf("�C: ");
        scanf("%lf", &a);
        x = a + 273.15;
        printf("\n�C: %g\nK: %g", a, x);
    }
    else if (c2 == 4) // k to c
    {
        printf("K: ");
        scanf("%lf", &a);
        x = a - 273.15;
        printf("\nK: %g\n�C: %g", a, x);
    }
    else if (c2 == 5) // F to K
    {
        printf("�F: ");
        scanf("%lf", &a);
        x = ((a - 32) * 5 / 9) + 273.15;
        printf("\n�F: %g\nK: %g", a, x);
    }
    else if (c2 == 6) // K to F
    {
        printf("K: ");
        scanf("%lf", &a);
        x = ((a - 273.15) * 9 / 5) + 32;
        printf("\nK: %g\n�F: %g", a, x);
    }
}



int main()
{
    int c0, c1, c2, c3, c4;

    cleanscreen();
    
    printf("Only numerical input is valid when selecting an option; too lazy to implement char intput.\n");
    printf("Input as character will make the program loop forever, if it happens, press ctrl + c to stop the program.\n");
    printf("Enter (0) to exit or any other number to continue...\n");
    scanf("%d", &c0);
    
    if (c0 == 0)
        return 0;

    cleanscreen();

    while (1)
    {
        printf("Please select an operation\n");
        printf("(0) exit,\n(1) parabole,\n(2) fn de sqrt,\n(3) Heron's formala,\n(4) SinCosTan,\n(5) Convert temperature\n:");
        scanf("%d", &c1);

        if (c1 == 1) // parabole
        {
            parabole();
            empty_input();
        }
        else if (c1 == 2)
        {
            fn_de_sqrt();
            empty_input();
        }
        else if (c1 == 3) //Heron's formula
        {
            heron();
            empty_input();
        }
        else if (c1 == 4) //sincostan
        {
            sct();
            empty_input();
        }
        else if (c1 == 5) // convert temperature
        {
            T();
            empty_input();
        }

        ///////////////////////////////////

        else if (c1 == 0) // exit
        {
            return 0;
        }
        else
        {
            printf("Enter an option\n");
        }
        printf("\n\n________________________________________\n\n");
    }
	return 0;
}
