/*11. Distância entre dois pontos na terra. A terra é curva (a não ser para os terraplanistas! � ) e
a distância entre graus de longitude (leste-oeste) varia conforme a latitude (norte-sul). Com
isso, encontrar a distância entre dois pontos na superfície da terra é mais complicado do
simplesmente usar o Teorema de Pitágoras no plano. Seja e as latitudes e
longitudes de dois pontos na superfície da terra. A distância em quilômetros entre estes dois
pontos ao longo da superfície da terra é dada por:
Crie um programa Python que receba a latitude e a longitude de dois pontos na Terra em
graus, calcule e exiba a distância entre eles em quilômetros ao longo da superfície.*/

// Lat São Paulo: -23.5505, Long São Paulo: -46.6333
// Lat Nova York: 40.7128, Long Nova York: -74.0060
// Distância esperada: 7685.63 km

// Lat Tokyo: 35.6895, Long Tokyo: 139.6917
// Lat Sydney: -33.8688, Long Sydney: 151.2093
// Lat Londres: 51.5074, Long Londres: -0.1278
// Lat Moscou: 55.7558, Long Moscou: 37.6176


#include <iostream>
#include <cmath>
#include <limits>

// Constante para a conversão de graus para radianos
const double DEG_TO_RAD = M_PI / 180.0;

// Constante para o raio da Terra em quilômetros
const double EARTH_RADIUS_KM = 6371.0;

// Função para converter graus em radianos
double toRadians(double degree) {
    return degree * DEG_TO_RAD;
}

// Função para calcular a distância entre dois pontos usando a fórmula da Haversine
double haversineDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = toRadians(lat1);
    lon1 = toRadians(lon1);
    lat2 = toRadians(lat2);
    lon2 = toRadians(lon2);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = std::sin(dlat / 2) * std::sin(dlat / 2) +
               std::cos(lat1) * std::cos(lat2) * 
               std::sin(dlon / 2) * std::sin(dlon / 2);
    double c = 2 * std::atan2(std::sqrt(a), std::sqrt(1 - a));

    return EARTH_RADIUS_KM * c;
}

// Função para validar entrada de dados e garantir que sejam números
bool isValidInput(double &input) {
    if (std::cin.fail()) {
        std::cin.clear(); // Limpa o estado de erro da entrada
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora a entrada inválida
        return false;
    }
    return true;
}

// Função para obter a entrada do usuário de forma segura
double getInput(const std::string &prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;
        if (isValidInput(value)) {
            break;
        } else {
            std::cout << "Entrada inválida. Por favor, insira um número válido.\n";
        }
    }
    return value;
}

int main() {
    std::cout << "Calculadora de Distância entre Dois Pontos na Terra usando a Fórmula da Haversine\n\n";

    // Entrada de dados do usuário
    double lat1 = getInput("Insira a latitude do primeiro ponto (em graus): ");
    double lon1 = getInput("Insira a longitude do primeiro ponto (em graus): ");
    double lat2 = getInput("Insira a latitude do segundo ponto (em graus): ");
    double lon2 = getInput("Insira a longitude do segundo ponto (em graus): ");

    // Cálculo da distância usando a fórmula da Haversine
    double distance = haversineDistance(lat1, lon1, lat2, lon2);

    // Saída da distância calculada
    std::cout << "A distância entre os dois pontos é: " << distance << " km\n";

    return 0;
}
