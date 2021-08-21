class Box {
    private:
       int length;
       int width;
       int height;
    public:
       void setLength(int l);
       void setWidth(int w);
       void setHeight(int h);
       int getHeight();
       int getWidth();
       int getLength();
 
       int calcVolume();
};
