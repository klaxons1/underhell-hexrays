char *__thiscall sub_1007E490(char *this, int a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax

  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = &CAI_DefMovementSink::`vftable';
  *(_DWORD *)this = &CAI_Navigator::`vftable';
  *((_DWORD *)this + 2) = &CAI_Navigator::`vftable';
  *((_DWORD *)this + 24) = -1;
  *((float *)this + 26) = 0.0;
  *((float *)this + 25) = -1.0;
  *((float *)this + 27) = -1.0;
  *((float *)this + 28) = 0.0;
  *((float *)this + 30) = 0.0;
  *((float *)this + 29) = -1.0;
  *((_DWORD *)this + 31) = -1;
  *((_DWORD *)this + 32) = -1;
  v3 = sub_10184390(108);
  if ( v3 )
    v4 = sub_100A6450(v3);
  else
    v4 = 0;
  *((float *)this + 15) = 0.0;
  *((_DWORD *)this + 9) = v4;
  *((_DWORD *)this + 8) = 0;
  *((float *)this + 17) = -1.0;
  this[58] = 0;
  v5 = (_DWORD *)sub_10184390(4);
  if ( v5 )
    *v5 = 0;
  else
    v5 = 0;
  *((_DWORD *)this + 10) = v5;
  *((float *)this + 11) = -1.0;
  *((_DWORD *)this + 3) = 0;
  *((_WORD *)this + 8) = 0;
  *((_WORD *)this + 28) = 1;
  *((float *)this + 26) = 0.25;
  *((float *)this + 25) = -1.0;
  *((float *)this + 28) = 3.0;
  *((float *)this + 27) = -1.0;
  *((float *)this + 30) = 5.0;
  *((float *)this + 29) = -1.0;
  *((float *)this + 33) = flt_10689730;
  *((float *)this + 34) = flt_10689734;
  *((float *)this + 35) = flt_10689738;
  this[92] = 1;
  *(_WORD *)(this + 93) = 0;
  *((float *)this + 36) = 3.4028235e38;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((float *)this + 18) = -1.0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 37) = 0;
  *((float *)this + 38) = -1.0;
  return this;
}
