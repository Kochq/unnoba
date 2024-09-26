package tp03.ej07;

public interface PizzaBuilder {
    void ponerMasa(String tipoMasa);
    void ponerSalsa(Boolean tieneSalsa);
    void ponerQueso(String tipoQueso);
    void ponerPepperoni(Boolean tienePepperoni);
    void ponerChampiñones(Boolean tieneChampiñones);

    Pizza construirPizza();
}
