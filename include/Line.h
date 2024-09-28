class Line : public Point {
public:
    Line::Line(Point p1, Point p2);
    Point FindLineIntersection(Line const& other_line);
};
