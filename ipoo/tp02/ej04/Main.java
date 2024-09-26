package tp02.ej04;

public class Main {
    public static void main(String[] args) {
        Operacion n1 = new Numero(10);
        Operacion n2 = new Numero(5);
        Operacion n3 = new Numero(2);

        Operacion sumaResta = new Resta(new Suma(n1, n2), n3);
        Operacion multiDiv = new Division(new Multiplicacion(n1, n2), n3);

        System.out.println(sumaResta.calcular());
        System.out.println(multiDiv.calcular());
    }
}
