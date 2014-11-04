Seagull-Dominator
=================

Seagull-Dominator is an awesome one player game where you pilot an angry seagull who tries to destroy every sand castle on the beach.


**Claire REMY**
**Quentin GROS**

Compte-Rendu TP1
Preuve de programmes impératifs
================================

*Swap.java de base :* 

	public class swap {
		int x;
		int y;
		/*@ ensures x == \old(y) && y == \old(x);
		*/
		void swap() {
		int aux = x;
		x = y;
		y = aux; 
		}
	}

**I.5 Description des obligations de preuve générées**

pour x == \old(y) : 

	this_0: Object pointer
	Object_alloc_table: Object alloc_table
	swap_x: (Object, int32) memory
	swap_y: (Object, int32) memory
	H1: valid_struct_swap(this_0, 0, 0, Object_alloc_table)
	result: int32
	H2: result = select(swap_x, this_0)
	result0: int32
	H3: result0 = select(swap_y, this_0)
	swap_x0: (Object, int32) memory
	H4: swap_x0 = store(swap_x, this_0, result0)
	swap_y0: (Object, int32) memory
	H5: swap_y0 = store(swap_y, this_0, result)
              
	integer_of_int32(select(swap_y0, this_0)) = integer_of_int32(select(swap_x, this_0))

On voit ici que des emplacements mémoire sont réservés pour stocker le contenu des variables x et y avant l’éxécution de swap() (swap_x et swap_y). 
Ensuite, on voit qu’on a 5 hypothèses pour valider la conclusion à démontrer : 
	integer_of_int32(select(swap_y0, this_0)) = integer_of_int32(select(swap_x, this_0))

qui signifie que swap_y0 (la nouvelle valeur de y après l’éxécution de swap()) doit être égale à la valeur swap_x (la valeur de x avant éxécution de swap()).

pour y == \old(x), on a **les mêmes hypothèses, seule la conclusion change** : 
	integer_of_int32(select(swap_x0, this_0)) = integer_of_int32(select(swap_y, this_0))
Il faut montrer que swap_x0 (nouvelle valeur de x apres swap()) est égale à l’ancienne valeur de y (swap_y). 
