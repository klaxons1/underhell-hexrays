bool (__cdecl **__thiscall sub_10067D10(bool (__cdecl **this)(int a1, int a2), _DWORD *a2))(int a1, int a2)
{
  __int16 i; // di

  *this = sub_10065450;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_WORD *)this + 8) = -1;
  *((_WORD *)this + 9) = 0;
  *((_WORD *)this + 10) = -1;
  *((_WORD *)this + 11) = -1;
  this[6] = this[1];
  sub_10066940((int)this);
  *((_WORD *)this + 10) = -1;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, bool (__cdecl *)(int, int)))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  *((_WORD *)this + 11) = -1;
  for ( i = sub_10066670((int)a2); i != -1; i = sub_10066740(a2, i) )
    sub_10067C30((int)this, a2[1] + 80 * i + 8);
  return this;
}
