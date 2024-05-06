class ClaseB extends ClaseA {
    public int m1() {
        return this.m2();
    }

    public int m4() {
        return this.m2() + super.m1();
    }

    public int m3() {
        return 30;
    }

    public int m6() {
        return this.m4();
    }
}
