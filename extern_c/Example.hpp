class Example {
public:
    Example(): _i(0) {}
    // inline
    void SetValue(int i) { _i = i; }
    int GetValue() const { return _i; }

    // not inline
    int Add(int x) const;
private:
    int _i;
};
