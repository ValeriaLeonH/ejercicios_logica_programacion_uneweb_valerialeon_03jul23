int getTotalX(int a_count, int* a, int b_count, int* b) {
    // declaramos la variable result que es la que vamos a retornar 
    int result =0;
    
    //Obtenemos el mcm, de los elementos de a
    int mcm = a[0];
    
    for (int i=0; i<a_count; i++ ){
        int mcd = a[i];
        int temp = mcm;
        
        while (mcd != 0){
            int r = mcd;
            mcd =  temp % mcd;
            temp = r;
        }
        
        mcm = (mcm * a[i])/temp;
    }
    
    // obtenemos el maximo comun divisor , de los elementos de b 
    int mcd = b[0];
    
    for (int i=1; i<2; i++){
        int a = mcd;
        int c= b[i];
        
        while(a != c){
            if(a>c){
                a-=c;
            } else {
                c-=a;
            }
        }    
        
        mcd =a ;       
    }
    
    // contamos los multiplos del minimo comun multiplo que pueden dividir al maximo comun divisor 
    int multiplo=0;
    
    while(multiplo <= mcd){
        multiplo += mcm; 
        if(mcd % multiplo ==0){
            result++;
        }
    }
    return result;

}
