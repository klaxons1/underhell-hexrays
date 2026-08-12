char __thiscall sub_10028470(_DWORD *this, int a2, float *a3, float *a4)
{
  int v5; // esi
  char result; // al
  float *v7; // eax
  float *v8; // eax
  double v9; // st7

  if ( a2 >= 1 && a2 <= this[479] && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*(this - 1) + 736))(this - 1) )
  {
    v5 = this[476] + 76 * a2 - 76;
    if ( *(int *)(v5 + 72) >= 0 )
    {
      sub_101ED7B0(v5, v5 + 48);
      *(_DWORD *)(v5 + 72) |= 0x80000000;
    }
    *a4 = *(float *)(v5 + 48);
    a4[1] = *(float *)(v5 + 52);
    a4[2] = *(float *)(v5 + 56);
    sub_101EDA00(v5, 3, a3);
    return 1;
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 36))(this - 1);
    *a3 = *v7;
    a3[1] = v7[1];
    a3[2] = v7[2];
    v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*(this - 1) + 40))(this - 1);
    *a4 = *v8;
    a4[1] = v8[1];
    v9 = v8[2];
    result = 0;
    a4[2] = v9;
  }
  return result;
}
