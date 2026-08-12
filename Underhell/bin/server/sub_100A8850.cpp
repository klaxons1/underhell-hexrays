bool __thiscall sub_100A8850(_DWORD *this, int a2)
{
  if ( this[248] == 2 )
    return 1;
  if ( *(_DWORD *)(a2 + 4) )
    return ((*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4) + 1088))(*(_DWORD *)(a2 + 4)) != 0) == this[248];
  return 0;
}
