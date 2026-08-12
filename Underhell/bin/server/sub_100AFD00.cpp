void __thiscall sub_100AFD00(_DWORD *this, int a2)
{
  if ( a2 )
    this[16] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[16] = -1;
}
