class Vector : public Point {
public:
    Vector::Vector(Point p1, Point p2);
    double const ReturnLength();
private:
    double len;
};
