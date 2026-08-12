void __thiscall sub_10023300(_DWORD *this, int a2)
{
  if ( a2 )
    this[10] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[10] = -1;
}
