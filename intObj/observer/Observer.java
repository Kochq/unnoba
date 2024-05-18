abstract public class Observer {
    private Observable observable;

    public Observer(Observable o) {
        this.setObservable(o);
    }

    public Observable getObservable() {
		return observable;
	}
	public void setObservable(Observable observable) {
		this.observable = observable;
	}

	abstract public void update();
}
