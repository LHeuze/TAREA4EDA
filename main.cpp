#include <iostream>
#include "avl.hpp"
#include "abb.hpp"
#include "2-3Tree.hpp"
#include <vector>
#include <random>
#include <algorithm>
#include <ctime>
#include <chrono>

using namespace std;

long getElapsedTime(chrono::time_point<chrono::high_resolution_clock> t1,
		chrono::time_point<chrono::high_resolution_clock> t2){
	auto int_ms = chrono::duration_cast<chrono::milliseconds>(t2 - t1);
	return static_cast<long>(int_ms.count());
}

std::vector<int> generarDatos(int N) {
    std::vector<int> datos;
    for (int i = 1; i <= N; ++i) {
        datos.push_back(i);
    }
    
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(datos.begin(), datos.end(), g);

    return datos;
}
void insertarYBuscarDatosAVL(std::vector<int> v,int k){
    trees::AVL AVLtree;
    for(int i :v){
        AVLtree.insert(v[i]);
    }
    AVLtree.find(k);
}

int main(){
    int N;
    int k;
    std::cout << "Ingrese el valor de N: " << std::endl;
    std::cin >> N;

    std::cout << "Ingrese el valor a buscar (0 =< k =< N): " << std::endl;
    std::cin >> k;

    std::vector<int> datos = generarDatos(N);
    auto start = chrono::high_resolution_clock::now();
    insertarYBuscarDatosAVL(datos,k);

    auto end = chrono::high_resolution_clock::now();
    long elapsedTime = getElapsedTime(start, end);
    cout << "Tiempo transcurrido: " << elapsedTime << " milisegundos" << endl;
    
    return 0;
}