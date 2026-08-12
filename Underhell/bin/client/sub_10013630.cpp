int __thiscall sub_10013630(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // eax
  int *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax

  v7 = this[1032];
  if ( v7 != -1 )
  {
    v8 = (int *)((char *)off_103DCD74 + 16 * (this[1032] & 0xFFF) + 4);
    if ( v8[1] == v7 >> 12 )
    {
      v9 = *v8;
      if ( v9 )
      {
        v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 332))(v9);
        if ( v10 )
          return (*(int (__thiscall **)(_DWORD *, int, int, int, int, int, int))(*this + 1032))(
                   this,
                   v10,
                   a2,
                   a3,
                   a4,
                   a5,
                   a6);
      }
    }
  }
  v11 = (*(int (__thiscall **)(_DWORD *))(*this + 844))(this);
  v12 = v11 == 0;
  v13 = *this;
  if ( v12 )
    return (*(int (__thiscall **)(_DWORD *, int))(v13 + 1028))(this, a2);
  else
    return (*(int (__thiscall **)(_DWORD *, int))(v13 + 1036))(this, a2);
}
