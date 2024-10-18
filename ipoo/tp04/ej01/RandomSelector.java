import java.util.random.RandomGenerator;
import java.util.random.RandomGeneratorFactory;
import java.util.ArrayList;
import java.util.List;

public class RandomSelector<T> {
    public List<T> lista = new ArrayList<>();
    public RandomGenerator rand = RandomGeneratorFactory.getDefault().create();

    RandomSelector(List<T> lista) {
        this.setLista(lista);
    }

    RandomSelector() {
        this.setLista(new ArrayList<>());
    };

    public List<T> getLista() {
        return lista;
    }

    private void setLista(List<T> lista) {
        this.lista = lista;
    }

    public void addToList(T item) {
        this.getLista().add(item);
    }

    public T selectNext() {
        return this.getLista().get(rand.nextInt(this.getLista().size()));
    }
}
