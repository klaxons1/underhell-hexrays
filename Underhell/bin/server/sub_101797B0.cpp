unsigned int __thiscall sub_101797B0(_DWORD *this, char *String2)
{
  _DWORD *v3; // eax
  unsigned int v4; // eax
  unsigned int result; // eax
  const char *v6; // esi

  v3 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( v3 )
    this[203] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    this[203] = -1;
  v4 = this[203];
  if ( v4 == -1
    || (result = v4 >> 12, off_1061BE18[4 * (this[203] & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (this[203] & 0xFFF) + 1] )
  {
    v6 = (const char *)this[200];
    if ( !v6 )
      v6 = String;
    result = sub_104292D0(v6, "!player", 8);
    if ( result )
      return Warning("logic_measure_movement: Unable to find measure target entity %s\n", String2);
  }
  return result;
}
