char __thiscall sub_1025B800(_WORD *this, char a2)
{
  char result; // al
  unsigned __int16 v4; // cx
  int v5; // esi
  const char *v6; // eax

  result = this[146] & 1;
  if ( result != a2 )
  {
    if ( a2 )
      this[146] |= 1u;
    else
      this[146] &= ~1u;
    (*(void (__thiscall **)(_WORD *))(*(_DWORD *)this + 924))(this);
    result = (*(int (__thiscall **)(_WORD *, _DWORD, _DWORD))(*(_DWORD *)this + 244))(this, 0, 0);
    if ( a2 )
    {
      v4 = this[177];
      if ( v4 != 0xFFFF )
      {
        v5 = dword_1047CA6C;
        v6 = sub_10230460(dword_1047F658, v4);
        return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 300))(v5, v6);
      }
    }
  }
  return result;
}
