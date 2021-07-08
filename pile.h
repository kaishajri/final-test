struct element
{
    int cle;
    struct element *suivant
};

void cree(struct element**);
unsigned vide(struct element*);
int dernier(struct element*);
void empiler(int,struct element**);
void depiler(struct element**);

