int __thiscall sub_100BF130(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // esi

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v4 && a2 >= 1 && a2 <= sub_102452B0(v4) )
    return sub_10245840(a2 - 1);
  else
    return 0;
}
