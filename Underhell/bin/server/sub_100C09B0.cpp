int __thiscall sub_100C09B0(int this, int a2)
{
  int v2; // edi
  int v4; // esi

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD *)(this + 1100);
  if ( !v4 || !*(_DWORD *)v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v4 && a2 >= 0 && a2 < *(_DWORD *)(*(_DWORD *)v4 + 156) )
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 160) + 216 * a2 + *(_DWORD *)v4 + 172);
  else
    return 0;
}
