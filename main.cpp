
#include "complex.hpp"
int main() {
    complex_number<float> c1(1.0, 2.0);
    complex_number<float> old_c1_firstcopy = c1;
    complex_number<float> old_c1_secondcopy = c1;
    complex_number<float> old_c1_thirdcopy = c1;
    complex_number<float> c2(3.0, -4.0);

    std::cout << "Numero complesso 1: " << c1 << std::endl;
    std::cout << "Numero complesso 2: " << c2 << std::endl;

    
    complex_number<float> sum = c1 + c2;
    std::cout << "Somma: " << sum << std::endl;
    
    
    c1 += c2;
    std::cout << "Somma tramite +=: stampo c1 nuovo: " << c1 << std::endl;

    
    complex_number<float> prod = old_c1_firstcopy * c2;
    std::cout << "Prodotto: " << prod << std::endl;

    old_c1_firstcopy *= c2;
    std::cout << "prodotto tramite *=: stampo c1 nuovo:  " << old_c1_firstcopy << std::endl;

    
    std::cout << "Coniugato di c2: " << c2.coniugato() << std::endl;

    
    old_c1_secondcopy += 3.0; 
    std::cout << "c1 dopo aver sommato 3.0: " << old_c1_secondcopy << std::endl;

    complex_number<float> c2new = c2 * 2.0f;  
    std::cout << "c2 dopo aver molt. per  2.0: " << c2new << std::endl;
    std::cout << "commutatività del prodotto per scalare:" << 2.0f * c2 << std::endl;

    
    complex_number<float> sum2 = 3.0f + old_c1_thirdcopy; 
    std::cout << "Somma tra un scalare 3.0 e il numero complesso c1: " << sum2 << std::endl;
    std::cout << "commutatività" << old_c1_thirdcopy + 3.0 << std::endl;
    complex_number<float> prod2 = 2.0f * old_c1_thirdcopy ; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prod2 << std::endl;
    std::cout << "commutatività" << old_c1_thirdcopy * 2.0 << std::endl;
    std::cout << "Se in input ho dei double: " << std::endl;

    
    complex_number<double> c3(1.0, 2.0);
    complex_number<double> c4(3.0, -4.0);
    complex_number<double> old_c3_firstcopy = c3;
    complex_number<double> old_c3_secondcopy = c3;
    complex_number<double> old_c3_thirdcopy = c3;


    std::cout << "Numero complesso 1: " << c3 << std::endl;
    std::cout << "Numero complesso 2: " << c4 << std::endl;

    
    complex_number<double> somma = c3 + c4;
    std::cout << "Somma: " << somma << std::endl;

    
    c3 += c4;
    std::cout << "Somma tramite +=: stampo il nuovo c1 " << c3 << std::endl;

    old_c3_firstcopy *= c4;
    std::cout << "prodotto tramite *=: stampo il nuovo c1  " << old_c3_firstcopy << std::endl;

    
    complex_number<double> prodotto = old_c3_secondcopy * c4;
    std::cout << "Prodotto: " << prodotto << std::endl;

    
    std::cout << "Coniugato di c2: " << c4.coniugato() << std::endl;

    
    old_c3_secondcopy += 3.0; 
    std::cout << "c1 dopo aver sommato 3.0: " << old_c3_secondcopy << std::endl;

    c4 = c4 * 2.0;  
    std::cout << "c2 dopo aver molt. per  2.0: " << c4 << std::endl;

    
    complex_number<double> somma2 = 3.0 + old_c3_thirdcopy; 
    std::cout << "Somma tra un scalare 3.0 e il numero complesso c1: " << somma2 << std::endl;

    complex_number<double> prodotto2 = 2.0 * old_c3_thirdcopy; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prodotto2 << std::endl;
     


    


    return 0;


};  

 