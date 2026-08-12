float *__thiscall sub_1017A3A0(_BYTE *this, int a2)
{
  int v3; // eax

  v3 = (int)(this + 800);
  if ( this[804] )
  {
    this[804] = 0;
    sub_1012CED0(v3);
  }
  else
  {
    this[804] = 1;
    sub_1012D950(&dword_1069E3E0, v3);
  }
  return sub_1017A2B0((int)this);
}
