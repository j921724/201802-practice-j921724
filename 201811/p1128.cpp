class ChangePocketClass
{public:
//rest of member functions as shown before
//Copy constructor–called when a copy of an object is needed
ChangePocketClass(constChangePocketClass&copy)
{
    quarters = copy.quarters;
    dimes = copy.dimes;
}
//Assignment operator–called when one object is assigned to another
void operator=(constChangePocketClassrhs)
{
    quarters = rhs.quarters;
    dimes = rhs.dimes;
}
private:
    int quarters;
    int dimes;
};