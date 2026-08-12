_DWORD *__thiscall sub_10250BA0(_DWORD *this, char *String1, int a3)
{
  if ( sub_10250B20(String1) )
    Error("CBuildFactoryHelper:  Factory for '%s' already exists!!!!\n", String1);
  *this = dword_1047EDB0;
  dword_1047EDB0 = (int)this;
  this[3] = String1;
  this[2] = a3;
  return this;
}
