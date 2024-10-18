public class Jugador {
    public String nombre;
    public double hp;

    public Jugador(String nombre, double hp) {
        this.setNombre(nombre);
        this.setHp(hp);
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public double getHp() {
        return hp;
    }

    public void setHp(double hp) {
        this.hp = hp;
    }
}
