void __thiscall sub_102BE7C0(float *this, float a2, float a3, float a4)
{
  if ( a2 != *this )
  {
    (**((void (__thiscall ***)(int, float *))this - 20))((int)(this - 20), this);
    *this = a2;
  }
  if ( a3 != this[1] )
  {
    (**((void (__thiscall ***)(int, float *))this - 20))((int)(this - 20), this);
    this[1] = a3;
  }
  if ( a4 != this[2] )
  {
    (**((void (__thiscall ***)(int, float *))this - 20))((int)(this - 20), this);
    this[2] = a4;
  }
}
