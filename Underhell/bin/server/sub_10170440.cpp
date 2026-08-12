_DWORD *__thiscall sub_10170440(_DWORD *this, int a2)
{
  bool v2; // zf

  v2 = byte_106B597C == 0;
  *this = &CAutoGameSystem::`vftable';
  this[2] = a2;
  if ( v2 )
  {
    this[1] = dword_106B598C;
    dword_106B598C = (int)this;
  }
  else
  {
    sub_10170230((int)this);
  }
  return this;
}
