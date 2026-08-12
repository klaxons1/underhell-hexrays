int __thiscall sub_100BDCE0(int this, int a2)
{
  int v2; // edi
  int v4; // ebx
  _DWORD *v5; // esi

  v2 = dword_10700AC8;
  v4 = *(_DWORD *)(this + 908);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( !v5 || !*v5 )
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return sub_100BB0D0((int)v5, a2, v4);
}
