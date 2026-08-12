int __thiscall sub_10238F50(_DWORD *this)
{
  _BYTE *v2; // eax
  int v4; // eax

  v2 = (_BYTE *)this[9];
  if ( v2[88] )
    return 0;
  if ( *v2 )
    return (int)this;
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 144))(this) )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 640))(v4);
}
