char __thiscall sub_10164900(_DWORD *this)
{
  int v1; // eax

  v1 = this[906];
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 192))(this[906]);
  else
    return sub_10044E60(this);
}
