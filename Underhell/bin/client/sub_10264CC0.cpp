char __thiscall sub_10264CC0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // edi
  char result; // al
  char v10; // al

  v6 = a5;
  if ( a5 < 0 || a5 >= this[84] )
    return (*(int (__thiscall **)(_DWORD *))(*this + 948))(this);
  v8 = *(_DWORD *)(this[81] + 4 * a5);
  a5 = v8;
  if ( a2 != 108 || (result = sub_10263910(this + 97, &a5)) == 0 )
  {
    v10 = *((_BYTE *)this + 376);
    if ( (v10 & 8) == 0 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
          || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80) )
        {
          return sub_10264B50(this, v8, v6, a6);
        }
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
          || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84) )
        {
          return sub_10264C30(this, v8, v6, a6);
        }
      }
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 960))(this, v8);
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84) )
    {
      if ( this[102] == v8 && this[93] == a6 && this[100] == 1 )
        return (*(int (__thiscall **)(_DWORD *))(*this + 948))(this);
      else
        return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 972))(this, v8, a6);
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 972))(this, v8, a6);
    }
  }
  return result;
}
