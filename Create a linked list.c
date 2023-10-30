#include<stdio.h>
#include<stdlib.h>


struct dgm //dugum yapisi olusturuldu

{

    int no;

    char ad[20];

    int yas;

    struct dgm *sonraki;

};

typedef struct dgm dugum;

dugum *ilk;

dugum *lise_olustur()

{


    int i;
    int n;
    
    dugum *p , *ilk;

    printf(" \n Kac adet kayit girilecek: ");
    scanf("%d",&n);


    for ( i = 0; i < n; i++)

    {

        if (i == 0)

        {

            ilk = (dugum*)malloc(sizeof(dugum));

            p  = ilk;
            
        }

        else
        
        {

            p->sonraki = (dugum*)malloc(sizeof(dugum));

            p = p->sonraki;
            
        }

        scanf ("%d %s %d", &p->no, p->ad, &p->yas);
        
    }


    p->sonraki = NULL;

    return (ilk);


    
}



int main()

{

    system("color 0A");

    dugum *ilk;

    ilk = lise_olustur();

     while (ilk != NULL)

     {

        printf( " %d %s %d \n", ilk->no, ilk->ad, ilk->yas);

        ilk = ilk->sonraki;
        
     }

    return 0;
    
    
    
}





 
