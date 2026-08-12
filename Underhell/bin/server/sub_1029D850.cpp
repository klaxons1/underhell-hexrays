void __thiscall sub_1029D850(_DWORD *this, int a2, int a3, int a4)
{
  if ( a2 )
    this[5] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[5] = -1;
  if ( a3 )
    this[6] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    this[6] = -1;
  if ( a4 )
    this[7] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
  else
    this[7] = -1;
}
