float *__thiscall sub_10158540(float *this)
{
  int v2; // ecx
  float *v3; // eax

  sub_10011C00(this);
  *((_DWORD *)this + 356) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_MovieExplosion::`vftable';
  *((_DWORD *)this + 1) = &C_MovieExplosion::`vftable';
  *((_DWORD *)this + 2) = &C_MovieExplosion::`vftable';
  *((_DWORD *)this + 3) = &C_MovieExplosion::`vftable';
  *((_DWORD *)this + 298) = &C_MovieExplosion::`vftable';
  *((_DWORD *)this + 356) = &C_MovieExplosion::`vftable';
  v2 = 49;
  v3 = this + 364;
  do
  {
    v3 += 9;
    --v2;
    *(v3 - 9) = -1.0;
    *(v3 - 8) = 0.0;
  }
  while ( v2 >= 0 );
  this[808] = 0.0;
  return this;
}
