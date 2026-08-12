int __thiscall sub_10302490(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = this[906];
  if ( v4 )
    return (*(int (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v4 + 244))(this[906], a2, a3, a4);
  else
    return sub_1002FEB0(this, a2, a3, a4);
}
