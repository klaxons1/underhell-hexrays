char __thiscall sub_10396DF0(_DWORD *this, int a2)
{
  int v4; // ecx

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this) )
    return 0;
  v4 = this[906];
  if ( v4 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 228))(v4, a2);
  else
    return sub_100305E0(this, a2);
}
