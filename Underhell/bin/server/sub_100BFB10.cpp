double __thiscall sub_100BFB10(int this, float a2)
{
  int v2; // ebx
  _DWORD *v4; // edi
  double result; // st7

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( !v4 )
    return 0.0;
  result = a2;
  sub_10100CE0((int)v4, *(_DWORD *)(this + 908), this + 912, a2);
  return result;
}
