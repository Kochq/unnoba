import java.util.Vector;

abstract public class Observable {
    private Vector<Observer> observers = new Vector<Observer>();

    public Vector<Observer> getObservers() {
		return observers;
	}
	public void setObservers(Vector<Observer> observers) {
		this.observers = observers;
	}

	public void addObserver(Observer o) {
        this.getObservers().add(o);
    }

    abstract public void deleteObserver(Observer o);
    abstract public void notificar();
}
