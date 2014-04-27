#ifndef POSITION_H
#define POSITION_H
class Position {
protected:
	int x;
	int y;
public:
	Position(int abs, int ord) :x(abs), y(ord){};
	Position() :x(0), y(0){};
	inline void operator+(const Position &Pos){
		x = x + Pos.x;
		y = y + Pos.y;
	}
	inline void operator=(const Position &Pos){
		x = Pos.x;
		y = Pos.y;
	}
	inline bool operator==(const Position &Pos){
		return(x == Pos.x&&y == Pos.y);
	}
	inline Position(const Position &p){
		Position(p.x, p.y);
	}
	inline int getX(){
		return x;
	}
	inline int getY(){
		return y;
	}
};

#endif;