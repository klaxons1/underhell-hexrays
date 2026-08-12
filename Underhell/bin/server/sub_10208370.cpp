char __thiscall sub_10208370(int this, int a2, int a3, int a4)
{
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // [esp+10h] [ebp+Ch]

  if ( !*(_DWORD *)(this + 424) )
    return 0;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v7 = *(_DWORD **)(this + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(this + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  if ( !v8 || (a3 & *(_DWORD *)(*(_DWORD *)v8 + 332)) == 0 )
    return 0;
  v9 = *(_DWORD *)(this + 424);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v11 = *(_DWORD *)dword_106BAFF0;
  v10 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)v9 + 292))(v9, this + 580, this + 704, a4);
  (*(void (__thiscall **)(int, int, int))(v11 + 128))(dword_106BAFF0, a2, v10);
  if ( *(float *)(a4 + 44) >= 1.0 && !*(_BYTE *)(a4 + 54) && !*(_BYTE *)(a4 + 55) )
    return 0;
  *(_WORD *)(a4 + 64) = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 152))(*(_DWORD *)(this + 424));
  return 1;
}
