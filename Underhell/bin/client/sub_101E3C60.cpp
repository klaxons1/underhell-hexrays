char *__thiscall sub_101E3C60(char *this, int a2)
{
  char *result; // eax
  _DWORD *v3; // edx
  int i; // esi

  result = this;
  *(_DWORD *)this = &CFlexAnimationTrack::`vftable';
  v3 = this + 16;
  for ( i = 1; i >= 0; --i )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3 += 5;
  }
  *(float *)(this + 75) = 0.0;
  this[72] = 0;
  *(_WORD *)(this + 73) = 0;
  *(float *)(this + 82) = 0.0;
  this[79] = 0;
  *((_WORD *)this + 40) = 0;
  *((float *)this + 2) = 0.0;
  this[92] &= 0xF8u;
  *((float *)this + 3) = 0.0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 22) = a2;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 14) = -1;
  *((_DWORD *)this + 17) = -1;
  *((_DWORD *)this + 16) = -1;
  return result;
}
