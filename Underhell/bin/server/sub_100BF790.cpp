int __thiscall sub_100BF790(int this)
{
  int v1; // edi
  int v3; // esi

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD *)(this + 1100);
  if ( !v3 || !*(_DWORD *)v3 )
    v3 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  if ( v3 )
    return *(_DWORD *)(*(_DWORD *)v3 + 268);
  else
    return 0;
}
