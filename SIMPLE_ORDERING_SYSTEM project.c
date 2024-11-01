#include <stdio.h>

int main()
  {
    // DATA TYPES
    float _totalcharges = 0;
    int _numberofsnacks, _quantity;
    char _nameofsnacks;

    // Intro
    printf("\t\tABC RESTAURANT ONLINE ORDER PLACEMENTXXXXXXXXXXXXXXXXXXX\n");
    printf("\t\t\t\tWELCOME !\n");

    printf("Please select from the following Menu\n1.B = Burger (Rs 200)\n2.F = French Fries (Rs 50)\n3.P = Pizza (Rs 500)\n4.S = Sandwiches (Rs 150)\n\n");
    
    // Prompt for number of snacks
    printf("number of Snacks you want to order ? ");
    scanf("%d",&_numberofsnacks);

    for(int i = 1; i <= _numberofsnacks; i++)
    {
      printf("Enter Snacks name: ");
      scanf(" %c",&_nameofsnacks);

      switch (_nameofsnacks)
    {
    case 'B':
      printf("Enter quantity: ");
      scanf("%d", &_quantity);
      _totalcharges = _totalcharges + _quantity * 200;
      break;
    
    case 'F':
      printf("Enter quantity: ");
      scanf("%d", &_quantity);
       _totalcharges = _totalcharges + _quantity * 50;
      break;
    
    case 'P':
      printf("Enter quantity: ");
      scanf("%d", &_quantity);
       _totalcharges = _totalcharges + _quantity * 500;
      break;
    
    case 'S':
      printf("Enter quantity: ");
      scanf("%d", &_quantity);
      _totalcharges = _totalcharges + _quantity * 150;
      break;
    
    default:
      printf("Sorry, we dont have that");
      break;
    }
    }
    printf("Total Charges = %f\n\n",_totalcharges);
    printf("Thank You for Ordering");

    return 0;
  }