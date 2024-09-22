public class Cliente {
    public static void main(String[] args) {
        PizzaBuilder builder = new PizzaMargaritaBuilder();

        builder.ponerMasa("Masa fina");
        builder.ponerQueso("mozzarella");
        builder.ponerSalsa(true);
        builder.ponerPepperoni(false);
        builder.ponerChampiñones(false);

        Pizza pizza = builder.construirPizza();

        System.out.println(pizza);
    }
}
