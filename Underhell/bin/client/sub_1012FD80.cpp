float *__thiscall sub_1012FD80(float *this, int a2, int a3)
{
  int v4; // eax
  float *result; // eax

  sub_1025E0A0();
  *(_DWORD *)this = &BitmapImage::`vftable';
  this[6] = NAN;
  this[7] = NAN;
  *((_DWORD *)this + 12) = a2;
  this[9] = 0.0;
  this[8] = 0.0;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  *((_DWORD *)this + 6) = v4;
  (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 120))(dword_1047CA6C, v4, a3, 1, 1);
  (*(void (__thiscall **)(float *, _DWORD *, _DWORD *))(*(_DWORD *)this + 12))(
    this,
    (_DWORD *)this + 10,
    (_DWORD *)this + 11);
  this[14] = 0.0;
  this[15] = 0.0;
  *((_BYTE *)this + 52) = 0;
  this[16] = 0.0;
  result = this;
  this[17] = 0.0;
  return result;
}
