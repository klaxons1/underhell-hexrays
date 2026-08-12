int __thiscall sub_10238EF0(_DWORD *this, int a2)
{
  int v4; // eax

  if ( *(_BYTE *)(this[9] + 64) && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 612))(this, a2) )
    return (int)this;
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 144))(this) )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 636))(v4, a2);
}
