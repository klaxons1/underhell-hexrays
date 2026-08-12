_DWORD *__thiscall sub_101FAE00(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int i; // edx
  char *v5; // esi
  int j; // ebx
  char *v7; // esi
  int k; // ebx

  sub_10170500(this, a2);
  this[3] = &ILagCompensationManager::`vftable';
  *this = &CLagCompensationManager::`vftable';
  this[3] = &CLagCompensationManager::`vftable';
  v3 = this + 4;
  for ( i = 16; i >= 0; --i )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 1;
    v3[7] = 0;
    v3[8] = -1;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[9] = 0;
    v3 += 10;
  }
  if ( this != (_DWORD *)-696 )
    this[174] = 0;
  v5 = (char *)(this + 176);
  for ( j = 16; j >= 0; --j )
  {
    sub_101F95B0(v5);
    v5 += 304;
  }
  v7 = (char *)(this + 1468);
  for ( k = 16; k >= 0; --k )
  {
    sub_101F95B0(v7);
    v7 += 304;
  }
  return this;
}
