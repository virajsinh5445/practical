#include <stdio.h>


int main() {
    
    int choice;
    
    printf("1. Vowel Checker\n");
    printf("2. Max element Finder\n");
    printf("3. Reverse String\n");
    printf("4. Square of Elements\n");
    printf("5. Square Pattern\n");
    printf("6. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
    while(choice != 6){
        
        switch(choice){
            
            case 1:
                char a;
    
                printf("Enter the character :- ");
                getchar();
                scanf("%c",&a);
                
                switch (a){
                    
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        printf("It is a vowel");
                        break;
                        
                    default:
                        printf("It is a consonant");
                        break;
                    
                }

                break;
            
            case 2:
                int arr[20],x,y,max = 0;
    
                printf("Enter the size of array :- ");
                scanf("%d",&x);
                
                for(int i = 0 ; i < x ; i++){
                    printf("Enter the element at index a[%d] :- ",i);
                    scanf("%d",&y);
                    arr[i] = y;
                }
                
                for(int i = 0 ; i < x ; i++){
                    if(arr[i] > max){
                        max = arr[i];
                    }
                }
            
                printf("Max number :- %d",max);

                break;
                
            case 3:
                char str[30],rev[30];
   
               int l1 = 0,l2 = 0;
               
               printf("Enter the string :-  ");
               getchar();
               fgets(str,sizeof(str),stdin);
               
               for(int i = 0 ; str[i] != '\0' ; i++){
                   l1++;
               }
               l1--;
               
               l2 = l1;
               
               for(int i = 0 ; i <= l1 ; i++){
                   rev[l2] = str[i];
                   l2--;
               }
               
               rev[l1+1] = '\0';
               
               printf("Reverse string :- \n");
               
               for(int i = 0 ; i <= l1 ; i++){
                   printf("%c",rev[i]);
               }

                break;
                
            case 4:
                int a1[10],a2[10],k,*p;
    
                p = a1;
                
                for(int i = 0 ; i < 10 ; i++){
                    
                    printf("Enter the element at index a[%d] :- ",i);
                    scanf("%d",&k);
                    a1[i] = k;
                    p++;
                    
                }
                
                p = a1;
                
                for(int i = 0 ; i < 10 ; i++){
                    
                    a2[i] = a1[i] * a1[i];
                    printf("%d\t",a2[i]);
                    p++;
                }

                break;
                
            case 5:
                for (int i = 1; i <= 5; i++) {
                    for (int j = 1; j <= i; j++) {
                        printf("%d ", i * i);
                    }
                    printf("\n");
                }

                break;
                
            default:
                printf("Invalid Choice !!!\n");
                break;
            
        }
        printf("\n\n");
        printf("1. Vowel Checker\n");
        printf("2. Max element Finder\n");
        printf("3. Reverse String\n");
        printf("4. Square of Elements\n");
        printf("5. Square Pattern\n");
        printf("6. Exit\n");
        printf("Enter your choice :- ");
        scanf("%d",&choice);
    }
    
    return 0;
}