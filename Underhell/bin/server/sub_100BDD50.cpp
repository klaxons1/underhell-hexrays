int __thiscall sub_100BDD50(int this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // esi

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  return sub_100BB0D0((int)v5, a2, a3);
}
