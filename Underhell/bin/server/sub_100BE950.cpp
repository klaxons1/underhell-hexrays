bool __thiscall sub_100BE950(int this, int a2, int a3)
{
  int v3; // edi
  _DWORD *v5; // esi
  int v7; // ebx

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  if ( !v5 || !(unsigned __int8)sub_10245FE0(v5) || a2 < 0 || a2 >= sub_10245270(v5) )
    return 0;
  v7 = sub_10245550(a2);
  return sub_102456F0(a2, *(_DWORD *)(v7 + 76)) == a3 || sub_102456F0(a2, *(_DWORD *)(v7 + 80)) == a3;
}
