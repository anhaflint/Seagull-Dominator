#ifndef AFFICHAGE_H
#define AFFICHAGE_H

class Affichage
{
public:
	static Affichage& Instance();
private:
	vector<ofImage> *img;

	Affichage& operator= (const Affichage&){}
	Affichage(const Affichage&){}
	void aff_img(ofVec2f &pos);
	static Affichage m_instance;
	Affichage(string&);
	~Affichage();
};
#endif

/*
class Affichage
{
private:
	ofImage *img;
public:
	Affichage(string file){
		img = new ofImage();
		img->loadImage(file);

	}

	void aff_img(ofVec2f pos){
		img->draw(pos);
	}
	~Affichage();
};






*/