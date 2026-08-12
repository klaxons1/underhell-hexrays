char __thiscall sub_10302320(_DWORD *this)
{
  int v1; // eax

  v1 = this[906];
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 208))(this[906]);
  else
    return sub_100254F0((int)this);
}
