char __thiscall sub_103772D0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  if ( !sub_100697A0(this, 88, 0) )
    return sub_10164B30(this, a2, a3, a4);
  if ( a3 )
    this[652] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  else
    this[652] = -1;
  return 1;
}
