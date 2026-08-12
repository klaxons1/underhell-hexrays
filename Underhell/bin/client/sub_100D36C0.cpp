_DWORD *__thiscall sub_100D36C0(_DWORD *this, int a2)
{
  bool v2; // zf

  v2 = byte_10431130 == 0;
  *this = &CAutoGameSystemPerFrame::`vftable';
  this[2] = a2;
  if ( v2 )
  {
    this[1] = dword_10431144;
    dword_10431144 = (int)this;
  }
  else
  {
    sub_100D33F0((int)this);
  }
  return this;
}
