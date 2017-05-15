#ifndef LORENTZ_VECTOR_H_
#define LORENTZ_VECTOR_H_

#include <tuple>

// class to represent an lorentz 4 vector.
// with the metric of (+, -, -, -)
class LorentzVector {
public:
    using VectorComponents = std::tuple<double, double, double, double>;

    LorentzVector (double x0 = 0, double x1 = 0, double x2 = 0, double x3 = 0);

    LorentzVector (const LorentzVector &v);

    ~LorentzVector () = default;

    void SetComponents(double x0, double x1, double x2, double x3);

    void SetComponents(const VectorComponents &comp);

    double GetX0 () const { return x0_; }

    double GetX1 () const { return x1_; }

    double GetX2 () const { return x2_; }

    double GetX3 () const { return x3_; }

    VectorComponents GetComponents () const { return std::make_tuple(x0_, x1_, x2_, x3_); }

    double Mag2 () const;

    double Magnitude () const;

    double Dot(const LorentzVector &lv) const;

    LorentzVector operator*(double lambda) const;
    LorentzVector operator+(const LorentzVector &rhs) const;
    LorentzVector operator-() const;
    LorentzVector operator-(const LorentzVector & rhs) const;
    LorentzVector & operator*= (double lambda);
    LorentzVector & operator+= (const LorentzVector & rhs);
    LorentzVector & operator-= (const LorentzVector & rhs);
    LorentzVector & operator= (const LorentzVector &rhs) = default;
    bool operator!=(const LorentzVector &rhs) const;
    bool operator==(const LorentzVector &rhs) const;

    friend class Particle;
private:
    double x0_;
    double x1_;
    double x2_;
    double x3_;

};

// the functions outside class
LorentzVector operator*(double lambda, const LorentzVector &lv);

// the inline function
inline void LorentzVector::SetComponents(double x0, double x1, double x2, double x3) {
    x0_ = x0;
    x1_ = x1;
    x2_ = x2;
    x3_ = x3;
}

inline void LorentzVector::SetComponents(const LorentzVector::VectorComponents &comp) {
    x0_ = std::get<0>(comp);
    x1_ = std::get<1>(comp);
    x2_ = std::get<2>(comp);
    x3_ = std::get<3>(comp);
}



#endif // LORENTZ_VECTOR_H_
