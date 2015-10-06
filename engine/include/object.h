class Engine;
class Object {
    private:
        double x,y,angle;
    public:
        double getX();
        void setX(double x);
        double getY();
        void setY(double y);
        double getAngle();
        void setAngle(double angle);
        virtual void think(Engine *e);
};
