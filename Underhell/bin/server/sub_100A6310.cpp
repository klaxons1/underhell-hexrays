void __thiscall sub_100A6310(_DWORD *this, int a2)
{
  if ( a2 )
    this[25] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[25] = -1;
}
