void __thiscall sub_10225630(_DWORD *this, int a2)
{
  if ( a2 )
    this[1] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    this[1] = -1;
}
