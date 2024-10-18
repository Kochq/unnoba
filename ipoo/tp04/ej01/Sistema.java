public class Sistema {

    public static void main(String[] args) {
        RandomSelector<Jugador> jugadores = new RandomSelector<Jugador>();
        jugadores.addToList(new Jugador("j1", 10));
        jugadores.addToList(new Jugador("j2", 10));
        jugadores.addToList(new Jugador("j3", 10));
        jugadores.addToList(new Jugador("j4", 10));
        jugadores.addToList(new Jugador("j5", 10));

        System.out.println(jugadores.selectNext().getNombre());
    }
}
