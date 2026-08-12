_DWORD *__thiscall sub_10170500(_DWORD *this, int a2)
{
  bool v2; // zf

  v2 = byte_106B597C == 0;
  *this = &CAutoGameSystemPerFrame::`vftable';
  this[2] = a2;
  if ( v2 )
  {
    this[1] = dword_106B5990;
    dword_106B5990 = (int)this;
  }
  else
  {
    sub_10170230((int)this);
  }
  return this;
}
