double __thiscall sub_100BE820(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // esi
  double result; // st7

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( !v4 || !(unsigned __int8)sub_10245FE0(v4) || a2 < 0 )
    return 0.0;
  result = *(float *)(this + 4 * a2 + 912);
  sub_10100330((int)v4, a2, *(float *)(this + 4 * a2 + 912));
  return result;
}
