char *__thiscall sub_10028A10(_DWORD *this, int a2)
{
  char *result; // eax
  int v4; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  const char *v8; // eax
  const char *v9; // esi

  (*(void (__thiscall **)(_DWORD *, int))(*this + 1412))(this, 1);
  result = (char *)this[53];
  if ( result )
  {
    v4 = sub_1012BF20(0, result, 0, 0, 0, 0);
    if ( v4 )
      this[652] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    else
      this[652] = -1;
    v5 = this[652];
    if ( v5 != -1
      && (v6 = &off_1061BE18[4 * (this[652] & 0xFFF) + 1], v7 = v5 >> 12,
                                                           off_1061BE18[4 * (this[652] & 0xFFF) + 2] == v7)
      && *v6 )
    {
      if ( off_1061BE18[4 * (this[652] & 0xFFF) + 2] == v7 )
        return (char *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1504))(this, *v6);
      else
        return (char *)(*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1504))(this, 0);
    }
    else
    {
      v8 = (const char *)this[53];
      if ( !v8 )
        v8 = String;
      v9 = (const char *)this[23];
      if ( !v9 )
        v9 = String;
      return (char *)Warning("ReadyNPC()--%s couldn't find target %s\n", v9, v8);
    }
  }
  return result;
}
