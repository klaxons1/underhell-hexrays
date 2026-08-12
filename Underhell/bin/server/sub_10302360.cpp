char __thiscall sub_10302360(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[906];
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 220))(this[906], a2);
  else
    return sub_10041A70(this, a2);
}
