double __thiscall sub_100BEA10(int this, int a2, float a3, float a4)
{
  int v4; // edi
  _DWORD *v6; // esi
  float *v7; // ecx
  double result; // st7

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( !v6 || !*v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( !v6 )
    return a3;
  if ( a2 < 0 )
    return a3;
  if ( a2 >= sub_10245290(v6) )
    return a3;
  v7 = (float *)sub_10245670(a2);
  if ( 0.0 != v7[4] || v7[3] == v7[2] )
    return a3;
  result = a3;
  sub_104242D0(a3, v7[2], v7[3], a4);
  return result;
}
