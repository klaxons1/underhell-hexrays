char __thiscall sub_100BFA80(int this, int a2, float a3, float a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v8; // eax
  int v9; // edi

  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v8 = *(_DWORD **)(this + 1100);
  if ( v8 && *v8 )
    v9 = *(_DWORD *)(this + 1100);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  if ( v9 )
    return sub_10100AE0(v9, a2, a3, a4, this + 912, a5, a6);
  else
    return 0;
}
