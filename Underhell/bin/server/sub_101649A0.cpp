char __thiscall sub_101649A0(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[906];
  if ( v2 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 228))(this[906], a2);
  else
    return sub_100305E0(this, a2);
}
