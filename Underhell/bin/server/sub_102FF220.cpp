char __thiscall sub_102FF220(_DWORD *this, int a2)
{
  int v3; // eax

  if ( (this[62] & 0x40000) != 0 )
    return 0;
  v3 = this[906];
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 228))(this[906], a2);
  else
    return sub_100305E0(this, a2);
}
