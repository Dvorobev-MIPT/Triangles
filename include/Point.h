class Point {
public:
    Point::Point(int x, int y, int z);
    const int GetX();
    const int GetY();
    const int GetZ();
private:
    int  x, y, z;
};