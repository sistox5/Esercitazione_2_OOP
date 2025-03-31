#pragma once
#include <iostream>
#include <type_traits>
#include <concepts>


template<typename T>
concept fd = std::is_floating_point_v<T>;



template<typename T> requires fd<T>
class complex_number {
    

private:
    T parte_reale;
    T parte_immaginaria;


public:
    complex_number() : parte_reale(T(0)), parte_immaginaria(T(0)) {}
    complex_number(T r, T i) : parte_reale(r), parte_immaginaria(i) {}
    





    T real() const {
        return parte_reale;
    }
    T imag() const {
        return parte_immaginaria;
    }


    complex_number<T> coniugato() {
        return complex_number<T>(parte_reale, -parte_immaginaria);
    }



    complex_number<T> operator+=(const complex_number& other) {
        
            
        parte_reale += other.parte_reale;
        parte_immaginaria += other.parte_immaginaria;
        return *this;  
    } 
    
    complex_number<T> operator+(const complex_number& other) {
        complex_number<T> out;
        out.parte_reale = parte_reale + other.parte_reale;
        out.parte_immaginaria = parte_immaginaria + other.parte_immaginaria;
        return out;   
    }

    complex_number& operator*=(const complex_number& other) {
        

        T temp = parte_reale;
        parte_reale = (parte_reale * other.parte_reale) - (parte_immaginaria * other.parte_immaginaria);
        parte_immaginaria = (temp * other.parte_immaginaria) +  (parte_immaginaria * other.parte_reale);
        return *this;  
         
    }

    complex_number<T> operator*(const complex_number& other) const {
        return complex_number<T>(parte_reale * other.parte_reale - parte_immaginaria * other.parte_immaginaria, parte_reale * other.parte_immaginaria + parte_immaginaria * other.parte_reale);
        
    }

    
    complex_number<T> operator+=(T value) {
        parte_reale += value;
        return *this;
    }

    
    complex_number<T> operator+(T value) {
        return complex_number<T>(parte_reale + value, parte_immaginaria);
    }

    
    complex_number<T>& operator*=(T value) {
        parte_reale *= value;
        parte_immaginaria *= value;
        return *this;
    }

    
    complex_number<T> operator*(T value) const {
        return complex_number<T>(parte_reale * value, parte_immaginaria * value);
    }

    
    
};


template<typename T>
std::ostream&
operator<<(std::ostream& os, const complex_number<T>& numero) {
    if (numero.imag() >= 0) {
        os << numero.real() << "+" << numero.imag() << "i";
    } else {
        os << numero.real() << numero.imag() << "i";  
    }  // blocco else serve se ho parte immaginaria negativa (include già segno meno)
    return os;
}
template<typename T>
complex_number<T> operator+(T value, const complex_number<T>& numero) {
    return complex_number<T>(value + numero.real(), numero.imag());

}
template<typename T>
complex_number<T> operator*(T value, const complex_number<T>& numero) {
    return complex_number<T>(value * numero.real(), value * numero.imag());
}
