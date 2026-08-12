int __thiscall sub_10302380(_DWORD *this, int a2, int a3)
{
  int v3; // eax

  v3 = this[906];
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v3 + 232))(this[906], a2, a3);
  else
    return sub_1001F610(this, a2, a3);
}
