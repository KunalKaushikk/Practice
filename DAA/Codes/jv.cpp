#include <bits/stdc++.h>
using namespace std;

class point
{
public:
    int x, y;
    point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    bool equal(point a)
    {
        return (this->x == a.x && this->y == a.y);
    }
};
int cross_product(point p, point q, point r)
{
    return (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
}
int distance(point p, point q)
{
    return sqrt(pow(q.y - p.y, 2) + pow(q.x - p.x, 2));
}
void convex_hull(vector<point> points)
{
    int start = 0, current;
    vector<point> result;
    vector<point> collinear;
    for (int i = 0; i < points.size(); i++)
    {
        if (points[i].x < points[start].x)
        {
            start = i;
        }
    }
    start = current;
    result.push_back(points[start]);
    while (true)
    {
        int next = 0;
        for (int i = 1; i < points.size(); i++)
        {
            if (i == current || i == next)
            {
                continue;
            }
            int cross = cross_product(points[current], points[next], points[i]);
            if (cross > 0)
            {
                next = i;
                collinear.clear();
            }
            else if (cross == 0)
            {
                if (distance(points[current], points[next]) < distance(points[current], points[i]))
                    ;
                next = i;
            }
            else
            {
                collinear.push_back(points[i]);
            }
        }
    }
}