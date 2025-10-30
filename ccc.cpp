int compra=prices[0];
        int min=0;
        for (int i=0; i<prices.size(); i++){
            if (prices[i] < compra){
                compra= prices[i];
                min= i;
            }   
        }  
        int venta=prices[min];      
        int max= min;
        for  (int j=min; j <prices.size(); j++){  
            if (prices[j]> venta){
                venta= prices[j];
                max= j;  
                
            }
            
        }; 
        int ganancia= venta - compra;   
        
    return ganancia;