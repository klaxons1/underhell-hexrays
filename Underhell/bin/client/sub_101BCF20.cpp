_DWORD *__thiscall sub_101BCF20(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[4];
  *this = &CWorldLights::`vftable';
  this[3] = 0;
  if ( v3 )
  {
    sub_10034930(v3);
    this[4] = 0;
  }
  sub_100D3300(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
