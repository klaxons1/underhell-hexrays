unsigned int __thiscall sub_100E0270(_DWORD *this, float a2)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // esi
  unsigned int v5; // esi

  result = this[78];
  if ( result == -1 || (v3 = &off_1061BE18[4 * (this[78] & 0xFFF) + 1], result >>= 12, v3[1] != result) )
    v4 = 0;
  else
    v4 = *v3;
  while ( v4 )
  {
    if ( *(_BYTE *)(v4 + 361) && (*(_BYTE *)(v4 + 356) & 4) == 0 || (*(_BYTE *)(v4 + 356) & 8) != 0 )
      sub_100DCB50((void *)v4, 0);
    if ( *(_BYTE *)(v4 + 306) != 6 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 620))(v4, LODWORD(a2));
    result = *(_DWORD *)(v4 + 312);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v4 + 312) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v4 + 312) & 0xFFF) + 1] )
          result = sub_100E0270(a2);
      }
    }
    v5 = *(_DWORD *)(v4 + 316);
    if ( v5 == -1
      || (result = (unsigned int)&off_1061BE18[4 * (v5 & 0xFFF) + 1], off_1061BE18[4 * (v5 & 0xFFF) + 2] != v5 >> 12) )
    {
      v4 = 0;
    }
    else
    {
      v4 = *(_DWORD *)result;
    }
  }
  return result;
}
