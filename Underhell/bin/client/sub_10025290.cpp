char __thiscall sub_10025290(_DWORD *this, int a2, float *a3)
{
  float *v4; // eax
  double v5; // st7
  char result; // al
  _BYTE v7[48]; // [esp+4h] [ebp-30h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, _BYTE *))(this[1] + 144))(this + 1, a2, v7) )
  {
    sub_101EDA00(v7, 3, a3);
    return 1;
  }
  else
  {
    v4 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
    *a3 = *v4;
    a3[1] = v4[1];
    v5 = v4[2];
    result = 0;
    a3[2] = v5;
  }
  return result;
}
