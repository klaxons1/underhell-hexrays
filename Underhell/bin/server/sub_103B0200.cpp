char __thiscall sub_103B0200(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  this[974] = a3[65];
  if ( !sub_100697A0(this, 89, 0) )
    return sub_10042930(this, a2, a3, a4);
  this[652] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  return 1;
}
