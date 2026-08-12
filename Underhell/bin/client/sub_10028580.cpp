char __thiscall sub_10028580(_DWORD *this, int a2, float *a3, float *a4)
{
  int v5; // eax
  double v6; // st7
  int v7; // eax

  if ( a2 < 1 || a2 > this[480] || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 736))(this) )
    return 0;
  v5 = this[477];
  v6 = *(float *)(v5 + 76 * a2 - 16);
  v7 = v5 + 76 * a2 - 16;
  *a3 = v6;
  a3[1] = *(float *)(v7 + 4);
  a3[2] = *(float *)(v7 + 8);
  *a4 = 0.0;
  a4[1] = 0.0;
  a4[2] = 0.0;
  a4[3] = 0.0;
  return 1;
}
