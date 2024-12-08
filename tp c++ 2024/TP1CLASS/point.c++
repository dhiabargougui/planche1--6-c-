point::point():ab(0),or(0){}
point ::point (double x , double y ) : ab(x),or(y){}
void point :: afficher () const
{
    std:: cout << " ( " << ab << "," << or << ")" << std::endl;}
void point :: deplacer (double dx , double dy )
{
    ab+=dx;
    or+=dy;
}