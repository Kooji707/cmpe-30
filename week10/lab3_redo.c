 #include <stdio.h> 
 #include <string.h>  
 
void findRepetition(char * str) {      
    int len = strlen(str);          
    int count = 0;
    int  repetition = 0;
    
    for(int i=0;i<len;i++) {
        count = 1;
        for(int j=i+1;j<len;j++) { 
            if(str[i] == str[j] && str[i] != ' ') { 
                count = count + 1;       
                str[j] = '0';             
            }         
        }
        if(count > 1 && str[i] != '0') {
            printf("%c is repeating %d times",str[i],count);
            repetition = 1;         
        }     
    }     
    if(repetition == 0) {
        printf("None of the characters are repeating");     
    } 
}  

int main() {

    char str[100];        
    printf("Enter name you want to check: \n");
    fgets(str,sizeof(str),stdin);   
    findRepetition(str);          
    return 0; 

} 