#include <bits/stdc++.h>

using namespace std;

const double inf = numeric_limits<int>::max();
double dist_estimada[15][15];
double dist_real[15][15];

void init_dist(){
    dist_estimada[1][1] = 0, dist_estimada[1][2] = 10, dist_estimada[1][3] = 18.5, dist_estimada[1][4] = 24.8, dist_estimada[1][5] = 36.4, dist_estimada[1][6] = 38.8, dist_estimada[1][7] = 35.8,
    dist_estimada[1][8] = 25.4, dist_estimada[1][9] = 17.6, dist_estimada[1][10] = 9.1, dist_estimada[1][11] = 16.7, dist_estimada[1][12] = 27.3, dist_estimada[1][13] = 27.6, dist_estimada[1][14] = 29.8;

    dist_estimada[2][1] = 10, dist_estimada[2][2] = 0, dist_estimada[2][3] = 8.5, dist_estimada[2][4] = 14.8, dist_estimada[2][5] = 26.6, dist_estimada[2][6] = 29.1, dist_estimada[2][7] = 26.1,
    dist_estimada[2][8] = 17.3, dist_estimada[2][9] = 10, dist_estimada[2][10] = 3.5, dist_estimada[2][11] = 15.5, dist_estimada[2][12] = 20.9, dist_estimada[2][13] = 19.1, dist_estimada[2][14] = 21.8;

    dist_estimada[3][1] = 18.5, dist_estimada[3][2] = 8.5, dist_estimada[3][3] = 0, dist_estimada[3][4] = 6.3, dist_estimada[3][5] = 18.2, dist_estimada[3][6] = 20.6, dist_estimada[3][7] = 17.6,
    dist_estimada[3][8] = 13.6, dist_estimada[3][9] = 9.4, dist_estimada[3][10] = 10.3, dist_estimada[3][11] = 19.5, dist_estimada[3][12] = 19.1, dist_estimada[3][13] = 12.1, dist_estimada[3][14] = 16.6;

    dist_estimada[4][1] = 24.8, dist_estimada[4][2] = 14.8, dist_estimada[4][3] = 6.3, dist_estimada[4][4] = 0, dist_estimada[4][5] = 12, dist_estimada[4][6] = 14.4, dist_estimada[4][7] = 11.5,
    dist_estimada[4][8] = 12.4, dist_estimada[4][9] = 12.6, dist_estimada[4][10] = 16.7, dist_estimada[4][11] = 23.6, dist_estimada[4][12] = 18.6, dist_estimada[4][13] = 10.6, dist_estimada[4][14] = 15.4;

    dist_estimada[5][1] = 36.4, dist_estimada[5][2] = 26.6, dist_estimada[5][3] = 18.2, dist_estimada[5][4] = 12, dist_estimada[5][5] = 0, dist_estimada[5][6] = 3, dist_estimada[5][7] = 2.4,
    dist_estimada[5][8] = 19.4, dist_estimada[5][9] = 23.3, dist_estimada[5][10] = 28.2, dist_estimada[5][11] = 34.2, dist_estimada[5][12] = 24.8, dist_estimada[5][13] = 14.5, dist_estimada[5][14] = 17.9;

    dist_estimada[6][1] = 38.8, dist_estimada[6][2] = 29.1, dist_estimada[6][3] = 20.6, dist_estimada[6][4] = 14.4, dist_estimada[6][5] = 3, dist_estimada[6][6] = 0, dist_estimada[6][7] = 3.3,
    dist_estimada[6][8] = 22.3, dist_estimada[6][9] = 25.7, dist_estimada[6][10] = 30.3, dist_estimada[6][11] = 36.7, dist_estimada[6][12] = 27.6, dist_estimada[6][13] = 15.2, dist_estimada[6][14] = 18.2;

    dist_estimada[7][1] = 35.8, dist_estimada[7][2] = 26.1, dist_estimada[7][3] = 17.6, dist_estimada[7][4] = 11.5, dist_estimada[7][5] = 2.4, dist_estimada[7][6] = 3.3, dist_estimada[7][7] = 0,
    dist_estimada[7][8] = 20, dist_estimada[7][9] = 23, dist_estimada[7][10] = 27.3, dist_estimada[7][11] = 34.2, dist_estimada[7][12] = 25.7, dist_estimada[7][13] = 12.4, dist_estimada[7][14] = 15.6;

    dist_estimada[8][1] = 25.4, dist_estimada[8][2] = 17.3, dist_estimada[8][3] = 13.6, dist_estimada[8][4] = 12.4, dist_estimada[8][5] = 19.4, dist_estimada[8][6] = 22.3, dist_estimada[8][7] = 20,
    dist_estimada[8][8] = 0, dist_estimada[8][9] = 8.2, dist_estimada[8][10] = 20.3, dist_estimada[8][11] = 16.1, dist_estimada[8][12] = 6.4, dist_estimada[8][13] = 22.7, dist_estimada[8][14] = 27.6;

    dist_estimada[9][1] = 17.6, dist_estimada[9][2] = 10, dist_estimada[9][3] = 9.4, dist_estimada[9][4] = 12.6, dist_estimada[9][5] = 23.3, dist_estimada[9][6] = 25.7, dist_estimada[9][7] = 23,
    dist_estimada[9][8] = 8.2, dist_estimada[9][9] = 0, dist_estimada[9][10] = 13.5, dist_estimada[9][11] = 11.2, dist_estimada[9][12] = 10.9, dist_estimada[9][13] = 21.2, dist_estimada[9][14] = 26.6;

    dist_estimada[10][1] = 9.1, dist_estimada[10][2] = 3.5, dist_estimada[10][3] = 10.3, dist_estimada[10][4] = 16.7, dist_estimada[10][5] = 28.2, dist_estimada[10][6] = 30.3, dist_estimada[10][7] = 27.3,
    dist_estimada[10][8] = 20.3, dist_estimada[10][9] = 13.5, dist_estimada[10][10] = 0, dist_estimada[10][11] = 17.6, dist_estimada[10][12] = 24.2, dist_estimada[10][13] = 18.7, dist_estimada[10][14] = 21.2;

    dist_estimada[11][1] = 16.7, dist_estimada[11][2] = 15.5, dist_estimada[11][3] = 19.5, dist_estimada[11][4] = 23.6, dist_estimada[11][5] = 34.2, dist_estimada[11][6] = 36.7, dist_estimada[11][7] = 34.2,
    dist_estimada[11][8] = 16.1, dist_estimada[11][9] = 11.2, dist_estimada[11][10] = 17.6, dist_estimada[11][11] = 0, dist_estimada[11][12] = 14.2, dist_estimada[11][13] = 31.5, dist_estimada[11][14] = 35.5;

    dist_estimada[12][1] = 27.3, dist_estimada[12][2] = 20.9, dist_estimada[12][3] = 19.1, dist_estimada[12][4] = 18.6, dist_estimada[12][5] = 24.8, dist_estimada[12][6] = 27.6, dist_estimada[12][7] = 25.7,
    dist_estimada[12][8] = 6.4, dist_estimada[12][9] = 10.9, dist_estimada[12][10] = 24.2, dist_estimada[12][11] = 14.2, dist_estimada[12][12] = 0, dist_estimada[12][13] = 28.8, dist_estimada[12][14] = 33.6;

    dist_estimada[13][1] = 27.6, dist_estimada[13][2] = 19.1, dist_estimada[13][3] = 12.1, dist_estimada[13][4] = 10.6, dist_estimada[13][5] = 14.5, dist_estimada[13][6] = 15.2, dist_estimada[13][7] = 12.4,
    dist_estimada[13][8] = 22.7, dist_estimada[13][9] = 21.2, dist_estimada[13][10] = 18.7, dist_estimada[13][11] = 31.5, dist_estimada[13][12] = 28.8, dist_estimada[13][13] = 0, dist_estimada[13][14] = 5.1;

    dist_estimada[14][1] = 29.8, dist_estimada[14][2] = 21.8, dist_estimada[14][3] = 16.6, dist_estimada[14][4] = 15.4, dist_estimada[14][5] = 17.9, dist_estimada[14][6] = 18.2, dist_estimada[14][7] = 15.6,
    dist_estimada[14][8] = 27.6, dist_estimada[14][9] = 26.6, dist_estimada[14][10] = 21.2, dist_estimada[14][11] = 35.5, dist_estimada[14][12] = 33.6, dist_estimada[14][13] = 5.1, dist_estimada[14][14] = 0;

    /*########################################################################################################################################################################################################*/

    dist_real[1][1] = inf, dist_real[1][2] = 10, dist_real[1][3] = inf, dist_real[1][4] = inf, dist_real[1][5] = inf, dist_real[1][6] = inf, dist_real[1][7] = inf,
    dist_real[1][8] = inf, dist_real[1][9] = inf, dist_real[1][10] = inf, dist_real[1][11] = inf, dist_real[1][12] = inf, dist_real[1][13] = inf, dist_real[1][14] = inf;

    dist_real[2][1] = 10, dist_real[2][2] = inf, dist_real[2][3] = 8.5, dist_real[2][4] = inf, dist_real[2][5] = inf, dist_real[2][6] = inf, dist_real[2][7] = inf,
    dist_real[2][8] = inf, dist_real[2][9] = 10, dist_real[2][10] = 3.5, dist_real[2][11] = inf, dist_real[2][12] = inf, dist_real[2][13] = inf, dist_real[2][14] = inf;

    dist_real[3][1] = inf, dist_real[3][2] = 8.5, dist_real[3][3] = inf, dist_real[3][4] = 6.3, dist_real[3][5] = inf, dist_real[3][6] = inf, dist_real[3][7] = inf,
    dist_real[3][8] = inf, dist_real[3][9] = 9.4, dist_real[3][10] = inf, dist_real[3][11] = inf, dist_real[3][12] = inf, dist_real[3][13] = 18.7, dist_real[3][14] = inf;

    dist_real[4][1] = inf, dist_real[4][2] = inf, dist_real[4][3] = 6.3, dist_real[4][4] = inf, dist_real[4][5] = 13, dist_real[4][6] = inf, dist_real[4][7] = inf,
    dist_real[4][8] = 15.3, dist_real[4][9] = inf, dist_real[4][10] = inf, dist_real[4][11] = inf, dist_real[4][12] = inf, dist_real[4][13] = 12.8, dist_real[4][14] = inf;

    dist_real[5][1] = inf, dist_real[5][2] = inf, dist_real[5][3] = inf, dist_real[5][4] = 13, dist_real[5][5] = inf, dist_real[5][6] = 3, dist_real[5][7] = 2.4,
    dist_real[5][8] = 30, dist_real[5][9] = inf, dist_real[5][10] = inf, dist_real[5][11] = inf, dist_real[5][12] = inf, dist_real[5][13] = inf, dist_real[5][14] = inf;

    dist_real[6][1] = inf, dist_real[6][2] = inf, dist_real[6][3] = inf, dist_real[6][4] = inf, dist_real[6][5] = 3, dist_real[6][6] = inf, dist_real[6][7] = inf,
    dist_real[6][8] = inf, dist_real[6][9] = inf, dist_real[6][10] = inf, dist_real[6][11] = inf, dist_real[6][12] = inf, dist_real[6][13] = inf, dist_real[6][14] = inf;

    dist_real[7][1] = inf, dist_real[7][2] = inf, dist_real[7][3] = inf, dist_real[7][4] = inf, dist_real[7][5] = 2.4, dist_real[7][6] = inf, dist_real[7][7] = inf,
    dist_real[7][8] = inf, dist_real[7][9] = inf, dist_real[7][10] = inf, dist_real[7][11] = inf, dist_real[7][12] = inf, dist_real[7][13] = inf, dist_real[7][14] = inf;

    dist_real[8][1] = inf, dist_real[8][2] = inf, dist_real[8][3] = inf, dist_real[8][4] = 15.3, dist_real[8][5] = 30, dist_real[8][6] = inf, dist_real[8][7] = inf,
    dist_real[8][8] = inf, dist_real[8][9] = 9.6, dist_real[8][10] = inf, dist_real[8][11] = inf, dist_real[8][12] = 6.4, dist_real[8][13] = inf, dist_real[8][14] = inf;

    dist_real[9][1] = inf, dist_real[9][2] = 10, dist_real[9][3] = 9.4, dist_real[9][4] = inf, dist_real[9][5] = inf, dist_real[9][6] = inf, dist_real[9][7] = inf,
    dist_real[9][8] = 9.6, dist_real[9][9] = inf, dist_real[9][10] = inf, dist_real[9][11] = 11.2, dist_real[9][12] = inf, dist_real[9][13] = inf, dist_real[9][14] = inf;

    dist_real[10][1] = inf, dist_real[10][2] = 3.5, dist_real[10][3] = inf, dist_real[10][4] = inf, dist_real[10][5] = inf, dist_real[10][6] = inf, dist_real[10][7] = inf,
    dist_real[10][8] = inf, dist_real[10][9] = inf, dist_real[10][10] = inf, dist_real[10][11] = inf, dist_real[10][12] = inf, dist_real[10][13] = inf, dist_real[10][14] = inf;

    dist_real[11][1] = inf, dist_real[11][2] = inf, dist_real[11][3] = inf, dist_real[11][4] = inf, dist_real[11][5] = inf, dist_real[11][6] = inf, dist_real[11][7] = inf,
    dist_real[11][8] = inf, dist_real[11][9] = 11.2, dist_real[11][10] = inf, dist_real[11][11] = inf, dist_real[11][12] = inf, dist_real[11][13] = inf, dist_real[11][14] = inf;

    dist_real[12][1] = inf, dist_real[12][2] = inf, dist_real[12][3] = inf, dist_real[12][4] = inf, dist_real[12][5] = inf, dist_real[12][6] = inf, dist_real[12][7] = inf,
    dist_real[12][8] = 6.4, dist_real[12][9] = inf, dist_real[12][10] = inf, dist_real[12][11] = inf, dist_real[12][12] = inf, dist_real[12][13] = inf, dist_real[12][14] = inf;

    dist_real[13][1] = inf, dist_real[13][2] = inf, dist_real[13][3] = 18.7, dist_real[13][4] = 12.8, dist_real[13][5] = inf, dist_real[13][6] = inf, dist_real[13][7] = inf,
    dist_real[13][8] = inf, dist_real[13][9] = inf, dist_real[13][10] = inf, dist_real[13][11] = inf, dist_real[13][12] = inf, dist_real[13][13] = inf, dist_real[13][14] = 5.1;

    dist_real[14][1] = inf, dist_real[14][2] = inf, dist_real[14][3] = inf, dist_real[14][4] = inf, dist_real[14][5] = inf, dist_real[14][6] = inf, dist_real[14][7] = inf,
    dist_real[14][8] = inf, dist_real[14][9] = inf, dist_real[14][10] = inf, dist_real[14][11] = inf, dist_real[14][12] = inf, dist_real[14][13] = 5.1, dist_real[14][14] = inf;

}

double calc_time(double distancia){
    if(distancia < inf) return distancia*2;
    else return inf;
}

double heuristica(double dist_estimada, double dist_real){
    return dist_estimada + dist_real /* + baldeaçao*/ ;
    //tratar baldeaçao
}

void convertToTime(){
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            dist_estimada[i][j] = calc_time(dist_estimada[i][j]);
            dist_real[i][j] = calc_time(dist_real[i][j]);
        }
    }
}



int main(){


    vector <bool> visit; visit.resize(15);
    vector <pair<double, int>> fronteira;

    int estacao_inicial, estacao_final;
    cin >> estacao_inicial >> estacao_final;

    //Inicializando o grafo com as distancias
    init_dist();

    //Transformando tudo que está em unidade de distancia (KM) para unidade de tempo (Min)
    convertToTime();


    fronteira.emplace_back(0.0, estacao_inicial);

    while( (!fronteira.empty()) && (fronteira[0].second != estacao_final) ){
        int estacao_atual = fronteira[0].second;
        visit[estacao_atual] = true;
        //capturando os vizinhos da estacao atual
        for(int i=1; i<15; i++){
            if(i == estacao_atual) continue;
            double dreal = dist_real[estacao_inicial][estacao_atual];
            double dreto = dist_estimada[i][estacao_final];
            if (dreal < inf && !(visit[i])){
                dist_real[estacao_inicial][i] = min(dist_real[estacao_inicial][i], dist_real[estacao_inicial][estacao_atual] + dreal);
                dist_real[i][estacao_inicial] = min( dist_real[i][estacao_inicial], dist_real[estacao_inicial][estacao_atual] + dreal);
                fronteira.emplace_back(heuristica(dreal, dreto), i);
            }


        }

        cout << "Tempo em min:" << dist_real[estacao_inicial][estacao_atual] << " - Estação:" << estacao_atual << endl;

        fronteira.erase(fronteira.begin());
        sort(fronteira.begin(), fronteira.end());

    }


    return 0;
}
