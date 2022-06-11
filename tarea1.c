#include <stdio.h>

char mystrstr(char *ptrcadena,char *subcadena);

texto1[]="hola amigos de las cabras"
sub1[]="las"

int main(void){


}

char mystrstr(char *ptrcadena,char *subcadena)
{
    while(*ptrcadena != '\0')
    {
        int n=0;
        while(*subcadena != '\0'')
        {
            n++;
            subcadena++;
        }
        int cont1=0;
        subcadena-=n;
        while(cont1<= n)
        {
            if(*ptrcadena==*subcadena)
            {
                ptrcadena++;
                subcadena++;
                cont1++;
                if(*subcadena=='\0')
                {
                    printf("se ha encontrado la direccion del puntero");
                    ptrcadena-=n;
                    
                    return *ptrcadena;
                    
                    
                }
                
            }
            else
            {
                subcadena-=n;
                ptrcadena++;
            }
        }
        
    }
    
    return NULL;
    
    
}
