import java.util.ArrayList;

public class MapaMetro {
    private Estacao estacao;
    private double distReta;
    private double distReal;
    private final double inf = Double.POSITIVE_INFINITY;
    private final MapaMetro [][] mapa = new MapaMetro[15][15];

    public MapaMetro(Estacao estacao, double distReta, double distReal){
        this.estacao = estacao;
        this.distReta = distReta;
        this.distReal = distReal;
    }
    public MapaMetro(){
        Estacao estacao = new Estacao();
        mapa[0] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 0, 0), new MapaMetro(estacao.getEstacoes(1), 10, 10), new MapaMetro(estacao.getEstacoes(2), 18.5, inf), new MapaMetro(estacao.getEstacoes(3), 24.8, inf), new MapaMetro(estacao.getEstacoes(4), 36.4, inf),new MapaMetro(estacao.getEstacoes(5), 25.4, inf), new MapaMetro(estacao.getEstacoes(6), 38.8, inf),new MapaMetro(estacao.getEstacoes(7), 35.8, inf),new MapaMetro(estacao.getEstacoes(8), 17.6, inf),new MapaMetro(estacao.getEstacoes(9), 9.1, inf),new MapaMetro(estacao.getEstacoes(10), 16.7, inf),new MapaMetro(estacao.getEstacoes(11), 27.3, inf),new MapaMetro(estacao.getEstacoes(12), 27.6, inf),new MapaMetro(estacao.getEstacoes(13), 29.8, inf)};
        mapa[1] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 10, 10), new MapaMetro(estacao.getEstacoes(1), 0, 0), new MapaMetro(estacao.getEstacoes(2),  8.5,  8.5), new MapaMetro(estacao.getEstacoes(3), 14.8, inf), new MapaMetro(estacao.getEstacoes(4), 26.6, inf),new MapaMetro(estacao.getEstacoes(5), 29.1, inf), new MapaMetro(estacao.getEstacoes(6), 26.1, inf),new MapaMetro(estacao.getEstacoes(7), 17.3, inf),new MapaMetro(estacao.getEstacoes(8), 10, 10),new MapaMetro(estacao.getEstacoes(9), 3.5, 3.5),new MapaMetro(estacao.getEstacoes(10), 15.5, inf),new MapaMetro(estacao.getEstacoes(11), 20.9, inf),new MapaMetro(estacao.getEstacoes(12), 19.1, inf), new MapaMetro(estacao.getEstacoes(13), 21.8, inf)};
        mapa[2] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 18.5, inf), new MapaMetro(estacao.getEstacoes(1), 8.5, inf), new MapaMetro(estacao.getEstacoes(2),  0,  inf), new MapaMetro(estacao.getEstacoes(3), 6.3, 6.3), new MapaMetro(estacao.getEstacoes(4), 18.2, inf),new MapaMetro(estacao.getEstacoes(5), 20.6, inf), new MapaMetro(estacao.getEstacoes(6), 17.6, inf),new MapaMetro(estacao.getEstacoes(7), 13.6, inf),new MapaMetro(estacao.getEstacoes(8), 9.4, 9.4),new MapaMetro(estacao.getEstacoes(9), 10.3, inf),new MapaMetro(estacao.getEstacoes(10), 19.5, inf),new MapaMetro(estacao.getEstacoes(11), 19.1, inf),new MapaMetro(estacao.getEstacoes(12), 12.1, 18.7), new MapaMetro(estacao.getEstacoes(13), 16.6, inf)};
        mapa[3] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 24.8, inf), new MapaMetro(estacao.getEstacoes(1), 14.8, inf), new MapaMetro(estacao.getEstacoes(2),  6.3,  inf), new MapaMetro(estacao.getEstacoes(3), 0, 0), new MapaMetro(estacao.getEstacoes(4), 12, 13),new MapaMetro(estacao.getEstacoes(5), 14.4, inf), new MapaMetro(estacao.getEstacoes(6), 11.5, inf),new MapaMetro(estacao.getEstacoes(7), 12.4, 15.3),new MapaMetro(estacao.getEstacoes(8), 12.6, inf),new MapaMetro(estacao.getEstacoes(9), 16.7, inf),new MapaMetro(estacao.getEstacoes(10), 23.6, inf),new MapaMetro(estacao.getEstacoes(11), 18.6, inf),new MapaMetro(estacao.getEstacoes(12), 10.6, 12.8), new MapaMetro(estacao.getEstacoes(13), 15.4, inf)};
        mapa[4] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 36.4, inf), new MapaMetro(estacao.getEstacoes(1), 26.6, inf), new MapaMetro(estacao.getEstacoes(2),  18.2,  inf), new MapaMetro(estacao.getEstacoes(3), 12, inf), new MapaMetro(estacao.getEstacoes(4), 0, 0),new MapaMetro(estacao.getEstacoes(5), 3, 3), new MapaMetro(estacao.getEstacoes(6), 2.4, 2.4),new MapaMetro(estacao.getEstacoes(7), 19.4, 30),new MapaMetro(estacao.getEstacoes(8), 23.3, inf),new MapaMetro(estacao.getEstacoes(9), 28.2, inf),new MapaMetro(estacao.getEstacoes(10), 34.2, inf),new MapaMetro(estacao.getEstacoes(11), 24.8, inf),new MapaMetro(estacao.getEstacoes(12), 14.5, inf), new MapaMetro(estacao.getEstacoes(13), 17.9, inf)};
        mapa[5] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 38.8, inf), new MapaMetro(estacao.getEstacoes(1), 29.1, inf), new MapaMetro(estacao.getEstacoes(2),  20.6,  inf), new MapaMetro(estacao.getEstacoes(3), 14.4, inf), new MapaMetro(estacao.getEstacoes(4), 3.0, 3.0),new MapaMetro(estacao.getEstacoes(5), 0, 0), new MapaMetro(estacao.getEstacoes(6), 3.3, inf),new MapaMetro(estacao.getEstacoes(7), 22.3, inf),new MapaMetro(estacao.getEstacoes(8), 25.7, inf),new MapaMetro(estacao.getEstacoes(9), 30.3, inf),new MapaMetro(estacao.getEstacoes(10), 36.7, inf),new MapaMetro(estacao.getEstacoes(11), 27.6, inf),new MapaMetro(estacao.getEstacoes(12), 15.2, inf), new MapaMetro(estacao.getEstacoes(13), 18.2, inf)};
        mapa[6] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 35.8, inf), new MapaMetro(estacao.getEstacoes(1), 26.1, inf), new MapaMetro(estacao.getEstacoes(2),  17.6,  inf), new MapaMetro(estacao.getEstacoes(3), 11.5, inf), new MapaMetro(estacao.getEstacoes(4), 2.4, 2.4),new MapaMetro(estacao.getEstacoes(5), 3.3, inf), new MapaMetro(estacao.getEstacoes(6), 0, 0),new MapaMetro(estacao.getEstacoes(7), 20, inf),new MapaMetro(estacao.getEstacoes(8), 23, inf),new MapaMetro(estacao.getEstacoes(9), 27.3, inf),new MapaMetro(estacao.getEstacoes(10), 34.2, inf),new MapaMetro(estacao.getEstacoes(11), 25.7, inf),new MapaMetro(estacao.getEstacoes(12), 12.4, inf), new MapaMetro(estacao.getEstacoes(13), 15.6, inf)};
        mapa[7] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 25.4, inf), new MapaMetro(estacao.getEstacoes(1), 17.3, inf), new MapaMetro(estacao.getEstacoes(2),  13.6,  inf), new MapaMetro(estacao.getEstacoes(3), 12.4, 15.3), new MapaMetro(estacao.getEstacoes(4), 19.4, 30),new MapaMetro(estacao.getEstacoes(5), 22.3, inf), new MapaMetro(estacao.getEstacoes(6), 20, inf),new MapaMetro(estacao.getEstacoes(7), 0, 0),new MapaMetro(estacao.getEstacoes(8), 8.2, 9.6),new MapaMetro(estacao.getEstacoes(9), 20.3, inf),new MapaMetro(estacao.getEstacoes(10), 16.1, inf),new MapaMetro(estacao.getEstacoes(11), 6.4, 6.4),new MapaMetro(estacao.getEstacoes(12), 22.7, 18.7), new MapaMetro(estacao.getEstacoes(13), 27.6, inf)};
        mapa[8] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 17.6, inf), new MapaMetro(estacao.getEstacoes(1), 10, 10), new MapaMetro(estacao.getEstacoes(2),  9.4,  9.4), new MapaMetro(estacao.getEstacoes(3), 12.6, 6.3), new MapaMetro(estacao.getEstacoes(4), 23.3, inf),new MapaMetro(estacao.getEstacoes(5), 25.7, inf), new MapaMetro(estacao.getEstacoes(6), 23, inf),new MapaMetro(estacao.getEstacoes(7), 8.2, 9.6),new MapaMetro(estacao.getEstacoes(8), 0, 9.4),new MapaMetro(estacao.getEstacoes(9), 13.5, inf),new MapaMetro(estacao.getEstacoes(10), 11.2, inf),new MapaMetro(estacao.getEstacoes(11), 10.9, inf),new MapaMetro(estacao.getEstacoes(12), 21.2, 18.7), new MapaMetro(estacao.getEstacoes(13), 26.6, inf)};
        mapa[9] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 9.1, inf), new MapaMetro(estacao.getEstacoes(1), 3.5, 3.5), new MapaMetro(estacao.getEstacoes(2),  10.3,  9.4), new MapaMetro(estacao.getEstacoes(3), 16.7, 6.3), new MapaMetro(estacao.getEstacoes(4), 28.2, inf),new MapaMetro(estacao.getEstacoes(5), 30.3, inf), new MapaMetro(estacao.getEstacoes(6), 27.3, inf),new MapaMetro(estacao.getEstacoes(7), 20.3, inf),new MapaMetro(estacao.getEstacoes(8), 13.5, 9.4),new MapaMetro(estacao.getEstacoes(9), 0, inf),new MapaMetro(estacao.getEstacoes(10), 17.6, inf),new MapaMetro(estacao.getEstacoes(11), 24.2, inf),new MapaMetro(estacao.getEstacoes(12), 18.7, 18.7), new MapaMetro(estacao.getEstacoes(13), 21.2, inf)};
        mapa[10] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 16.7, inf), new MapaMetro(estacao.getEstacoes(1), 15.5, inf), new MapaMetro(estacao.getEstacoes(2),  19.5,  inf), new MapaMetro(estacao.getEstacoes(3), 23.6, 6.3), new MapaMetro(estacao.getEstacoes(4), 34.2, inf),new MapaMetro(estacao.getEstacoes(5), 36.7, inf), new MapaMetro(estacao.getEstacoes(6), 34.2, inf),new MapaMetro(estacao.getEstacoes(7), 16.1, inf),new MapaMetro(estacao.getEstacoes(8), 11.2, 12.2),new MapaMetro(estacao.getEstacoes(9), 17.6, inf),new MapaMetro(estacao.getEstacoes(10), 0, 0),new MapaMetro(estacao.getEstacoes(11), 14.2, inf),new MapaMetro(estacao.getEstacoes(12), 31.5, 18.7), new MapaMetro(estacao.getEstacoes(13), 35.5, inf)};
        mapa[11] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 27.3, inf), new MapaMetro(estacao.getEstacoes(1), 20.9, inf), new MapaMetro(estacao.getEstacoes(2),  19.1,  inf), new MapaMetro(estacao.getEstacoes(3), 18.6, 6.3), new MapaMetro(estacao.getEstacoes(4), 24.8, inf),new MapaMetro(estacao.getEstacoes(5), 27.6, inf), new MapaMetro(estacao.getEstacoes(6), 25.7, inf),new MapaMetro(estacao.getEstacoes(7), 6.4, inf),new MapaMetro(estacao.getEstacoes(8), 10.9, 9.4),new MapaMetro(estacao.getEstacoes(9), 24.2, inf),new MapaMetro(estacao.getEstacoes(10), 14.2, inf),new MapaMetro(estacao.getEstacoes(11), 0, 0),new MapaMetro(estacao.getEstacoes(12), 28.8, 18.7), new MapaMetro(estacao.getEstacoes(13), 33.6, inf)};
        mapa[12] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 27.6, inf), new MapaMetro(estacao.getEstacoes(1), 19.1, inf), new MapaMetro(estacao.getEstacoes(2),  12.1,  inf), new MapaMetro(estacao.getEstacoes(3), 10.6, 6.3), new MapaMetro(estacao.getEstacoes(4), 14.5, inf),new MapaMetro(estacao.getEstacoes(5), 15.2, inf), new MapaMetro(estacao.getEstacoes(6), 12.4, inf),new MapaMetro(estacao.getEstacoes(7), 22.7, 6.4),new MapaMetro(estacao.getEstacoes(8), 21.2, 9.4),new MapaMetro(estacao.getEstacoes(9), 18.7, inf),new MapaMetro(estacao.getEstacoes(10), 31.5, inf),new MapaMetro(estacao.getEstacoes(11), 19.1, inf),new MapaMetro(estacao.getEstacoes(12), 0, 0), new MapaMetro(estacao.getEstacoes(13), 5.1, 5.1)};
        mapa[13] = new MapaMetro[]{new MapaMetro(estacao.getEstacoes(0), 29.8, inf), new MapaMetro(estacao.getEstacoes(1), 21.8, inf), new MapaMetro(estacao.getEstacoes(2),  16.6,  18.7), new MapaMetro(estacao.getEstacoes(3), 16.4, 12.8), new MapaMetro(estacao.getEstacoes(4), 17.9, inf),new MapaMetro(estacao.getEstacoes(5), 18.2, inf), new MapaMetro(estacao.getEstacoes(6), 15.6, inf),new MapaMetro(estacao.getEstacoes(7), 27.6, inf),new MapaMetro(estacao.getEstacoes(8), 26.6, 9.4),new MapaMetro(estacao.getEstacoes(9), 21.2, inf),new MapaMetro(estacao.getEstacoes(10), 35.5, inf),new MapaMetro(estacao.getEstacoes(11), 33.6, inf),new MapaMetro(estacao.getEstacoes(12), 12.1, 5.1), new MapaMetro(estacao.getEstacoes(13), 0, 0)};

    }
    public double calctemp (double distancia){
        return distancia * 2;
    }
    public ArrayList<MapaMetro> adjacentes (int index){
        ArrayList<MapaMetro> adj = new ArrayList<>();
        for (int i = 0; i < 14; i++) {
            if (mapa[index][i].getDistReal() != inf) {
                adj.add(mapa[index][i]);
            }
        }
        return adj;
    }

    public double heuristica ( int estacao_atual, int objetivo, int trocaLinha, int estacao_inicial){
        // distancia do no atual até o inicial + distancia estimada do nó atual até o objetivo
        double f;
        f = calctemp(mapa[estacao_atual][objetivo].getDistReta()) + calctemp(mapa[estacao_atual][estacao_inicial].getDistReal()) + trocaLinha;
        return f;
    }

    public MapaMetro[][] getMapa() {
        return mapa;
    }

    public Estacao getEstacao() {
        return estacao;
    }

    public double getDistReta() {
        return distReta;
    }

    public double getDistReal() {
        return distReal;
    }
}

