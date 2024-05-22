/*11. Distância entre dois pontos na terra. A terra é curva (a não ser para os terraplanistas! � ) e
a distância entre graus de longitude (leste-oeste) varia conforme a latitude (norte-sul). Com
isso, encontrar a distância entre dois pontos na superfície da terra é mais complicado do
simplesmente usar o Teorema de Pitágoras no plano. Seja e as latitudes e
longitudes de dois pontos na superfície da terra. A distância em quilômetros entre estes dois
pontos ao longo da superfície da terra é dada por:
Crie um programa Python que receba a latitude e a longitude de dois pontos na Terra em
graus, calcule e exiba a distância entre eles em quilômetros ao longo da superfície.*/

// Marco zero São Paulo 23° 33' 01" S 46° 38' 02"
// Marco zero Nova York 40° 42′ 47″ N, 74° 00′ 49″


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float lat1, lat2, long1, long2;
    cout << "Greetings! Please enter the latitude and longitude of two points on Earth in degrees: ";
    cin >> lat1 >> long1 >> lat2 >> long2;
    float d = 6371.01 * acos(sin(lat1) * sin(lat2) + cos(lat1) * cos(lat2) * cos(long1 - long2));
    cout << "The distance between the two points on Earth is " << d << " km." << endl;
    return 0;
    main();
}