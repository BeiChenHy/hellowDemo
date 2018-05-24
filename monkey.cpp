const string operator+(const string& a,const string& b)
{
  len = a.len+b.len;
  char*temp = new char[len+1];
  strcpy(temp,a.rep);
  strcat(temp,b.rep);
  string str1(temp);
  delete temp;
  return str1;
}
const string& operator+(const string& a)
{
  this.len+=a.len;
  char * temp = this.rep;
  this.rep= new char[len+1];
  strcpy(rep,temp);
  strcat(rep,a,rep);
  delete []temp;
  return *this;
}
