unsigned int __thiscall sub_103E6570(unsigned int this)
{
  unsigned int result; // eax
  int v3; // ecx
  int v4; // ecx
  int *v5; // ecx

  result = *(_DWORD *)(this + 1716);
  if ( result == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 2] != *(_DWORD *)(this + 1716) >> 12 )
    v3 = 0;
  else
    v3 = off_1061BE18[4 * (*(_DWORD *)(this + 1716) & 0xFFF) + 1];
  if ( !*(_BYTE *)(v3 + 1212) )
  {
    if ( result == -1 || off_1061BE18[4 * (result & 0xFFF) + 2] != result >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (result & 0xFFF) + 1];
    (*(void (__thiscall **)(int, const char *, unsigned int, unsigned int, _DWORD))(*(_DWORD *)v4 + 148))(
      v4,
      "Toggle",
      this,
      this,
      0);
    result = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)(this + 1124) + 272))(this + 1124, 7);
    if ( *(_BYTE *)(this + 1568) != 1 )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 1568) = 1;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          result = sub_100194B0(v5, 1568);
        *(_BYTE *)(this + 1568) = 1;
      }
    }
  }
  return result;
}
