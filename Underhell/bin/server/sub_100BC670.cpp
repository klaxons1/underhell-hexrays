int __thiscall sub_100BC670(_DWORD *this, int a2)
{
  int result; // eax
  const char *v4; // ecx

  result = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  if ( (_BYTE)result )
  {
    v4 = (const char *)this[15];
    if ( !v4 || (result = strcmp((const char *)(this[26] + 196), v4)) == 0 )
    {
      if ( strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2), "teamplay_round_win") )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, a2);
      if ( (this[5] & 0x400) == 0 )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, a2);
      result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 20))(a2, "full_round", 0);
      if ( (_BYTE)result )
        return (*(int (__thiscall **)(_DWORD *, int))(*this + 56))(this, a2);
    }
  }
  return result;
}
