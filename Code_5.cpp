#include &lt;iostream&gt;
using namespace std;
class Plan
{
protected:
double rate;
public:
virtual void getRate()
{
rate = 5.0;
}
void calculateBills(int units) {
int bill = units * this-&gt;rate;
cout &lt;&lt; &quot;Bill= &quot; &lt;&lt; bill &lt;&lt; endl;
}
};
class DomesticPlan : public Plan
{
public:
void getRate() {
this-&gt;rate = 10.0;
cout &lt;&lt; &quot;Domestic Rate= &quot; &lt;&lt; rate &lt;&lt; endl;
}
};
class CommercialPlan : public Plan
{
public:
void getRate() {
this-&gt;rate = 30.0;
cout &lt;&lt; &quot;Commercial Rate= &quot; &lt;&lt; rate &lt;&lt; endl;
}
};
class InstitutionalPlan : public Plan
{
public:
void getRate() {
this-&gt;rate = 40.0;
cout &lt;&lt; &quot;Institutional Rate= &quot; &lt;&lt; rate &lt;&lt; endl;
}
};
class getPlanFactory
{
public:
InstitutionalPlan obj1;
CommercialPlan obj2;
DomesticPlan obj3;
void getplan() {
obj1.getRate();
obj1.calculateBills(14);
obj2.getRate();

obj2.calculateBills(14);
obj3.getRate();
obj3.calculateBills(14);
}
};
int main()
{
getPlanFactory gt;
gt.getplan();
}