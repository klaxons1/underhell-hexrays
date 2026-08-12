char __thiscall sub_1005D710(_DWORD **this, float *a2)
{
  float *v3; // edi
  int v4; // eax
  float *v5; // esi
  double v6; // st6
  double v7; // rt0
  char result; // al

  if ( !(*(int (__thiscall **)(_DWORD *))(*this[1] + 368))(this[1]) )
    return 0;
  v3 = (float *)this[1];
  if ( ((_DWORD)v3[63] & 0x800) != 0 )
    sub_100DAE60(this[1]);
  v4 = (*(int (__thiscall **)(_DWORD *))(*this[1] + 368))(this[1]);
  v5 = (float *)v4;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v6 = v5[146] - v3[146];
  v7 = v5[147] - v3[147];
  *a2 = v5[145] - v3[145];
  a2[1] = v6;
  a2[2] = v7;
  off_10689714();
  result = 1;
  a2[2] = 0.0;
  return result;
}
