void __thiscall sub_1015B040(float *this, float a2, float a3, float a4)
{
  if ( a2 != *this )
  {
    (**((void (__thiscall ***)(int, float *))this - 28))((int)(this - 28), this);
    *this = a2;
  }
  if ( a3 != this[1] )
  {
    (**((void (__thiscall ***)(int, float *))this - 28))((int)(this - 28), this);
    this[1] = a3;
  }
  if ( a4 != this[2] )
  {
    (**((void (__thiscall ***)(int, float *))this - 28))((int)(this - 28), this);
    this[2] = a4;
  }
}
