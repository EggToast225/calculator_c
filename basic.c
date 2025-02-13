// Calculators needs operands and operators
// needs to be able to do simple arithmetic


int get_operands(int *operand1, int *operand2){

        int operand1, operand2;

        printf("Enter 2 numbers: ");
        scanf("%d %d", &operand1, &operand2);
        return 0;
}

char get_operator(){

        char operator;
        printf("Enter an operator ('+', '-', '/', '*') ");

        operator = getchar();

        return operator;
}

void get_input(int *a, int *b, int *c){
        get_operands(a,b);

        *c = get_operator();

}        

int calculate(int a, int b, char operator){

        int result;

        switch (operator){
        case '+':
                result = a + b;
                break;

        case '-':
                result = a-b;
                break;

        case '*':
                result = a*b;
                break;

        case '/':
                result = a / b;
                break;
        default:
                printf("Error: Invalid operator\n")
                return 0;
        }

return result;

}


