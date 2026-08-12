int __thiscall sub_10164770(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[906];
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 136))(this[906], a2);
  else
    return sub_1002CC40(this, a2);
}
