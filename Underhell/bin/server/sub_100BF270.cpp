int __thiscall sub_100BF270(int this, int a2, int a3, int a4)
{
  int *v4; // ebx
  int v5; // edi
  _DWORD *v7; // esi
  int result; // eax
  _DWORD *v9; // esi

  v4 = (int *)a4;
  v5 = dword_10700AC8;
  if ( a4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v9 = *(_DWORD **)(this + 1100);
    if ( !v9 || !*v9 )
      v9 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
    return sub_100BA2B0((int)v9, a2, a3, v4);
  }
  else
  {
    a4 = 1;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v7 = *(_DWORD **)(this + 1100);
    if ( !v7 || !*v7 )
      v7 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
    result = sub_100BA2B0((int)v7, a2, a3, &a4);
    if ( a4 != 1 )
      return -1;
  }
  return result;
}
