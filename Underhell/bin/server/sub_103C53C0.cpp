float *__thiscall sub_103C53C0(_DWORD *this, float *a2)
{
  int v2; // eax
  int v4; // ecx
  void (__thiscall *v5)(_DWORD *, int, _DWORD *); // edx
  float *result; // eax
  double v7; // st6
  double v8; // st7
  float v9[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(dword_106B31C8 + 24);
  if ( v2 != this[931] )
  {
    v4 = this[950];
    v5 = *(void (__thiscall **)(_DWORD *, int, _DWORD *))(*this + 796);
    this[931] = v2;
    v5(this, v4, this + 919);
  }
  sub_10421CE0(this + 919, 3, a2);
  sub_10421CE0(this + 919, 0, v9);
  result = a2;
  v7 = 8.0 * v9[2];
  v8 = v9[1] * 8.0;
  *a2 = *a2 - v9[0] * 8.0;
  a2[1] = a2[1] - v8;
  a2[2] = a2[2] - v7;
  return result;
}
