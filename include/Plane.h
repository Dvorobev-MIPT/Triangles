class Plane : public Point {
friend class Line
public:
    Plane::Plane(Point p1, Point p2, Point p3);
    Line FindPlaneIntersect(Plane const& other_plane);
};
