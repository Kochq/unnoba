class ClaseB extends ClaseA {
    public int m1() {
        return 6;
    }

    public int m4() {
        return this.m2() + super.m3();
    }

    public int m3() {
        return 4;
    }

    public int m6() {
        return this.m2();
    }
}
