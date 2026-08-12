bool __thiscall sub_10334210(void *this, int a2)
{
  float *v3; // esi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  bool result; // al

  result = 0;
  if ( a2 )
  {
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
    v4 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
    v5 = *v4 - *v3;
    v6 = v4[1] - v3[1];
    v7 = v4[2] - v3[2];
    if ( v7 * v7 + v6 * v6 + v5 * v5 > 147456.0 )
      return 1;
  }
  return result;
}
