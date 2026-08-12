unsigned int __thiscall sub_100E98A0(int this, int a2)
{
  int v2; // ebx
  int v3; // edi
  __int16 v5; // ax
  char v6; // al
  unsigned int result; // eax
  int v8; // esi
  unsigned int v9; // eax
  bool v10; // [esp+17h] [ebp+Bh]

  v2 = a2;
  v3 = 0;
  if ( (a2 & 4) != 0 )
    v3 = 4096;
  if ( (a2 & 1) != 0 )
  {
    v3 |= 0x800u;
    if ( *(_DWORD *)(this + 24) )
      **(_DWORD **)(this + 24) |= 0x80u;
    sub_101123E0(this + 320);
  }
  if ( (a2 & 2) != 0 )
  {
    v5 = *(_WORD *)(this + 356);
    v3 |= 0x800u;
    if ( (v5 & 0x100) != 0 )
    {
LABEL_13:
      sub_101126F0(this + 320);
    }
    else
    {
      switch ( *(_BYTE *)(this + 360) )
      {
        case 0:
        case 1:
        case 6:
          if ( (v5 & 0x40) == 0 )
          {
            v6 = *(_BYTE *)(this + 361);
            if ( v6 != 2 )
            {
              if ( v6 )
                goto LABEL_13;
            }
          }
          break;
        case 3:
        case 5:
          break;
        default:
          goto LABEL_13;
      }
    }
    v2 = a2 | 5;
  }
  *(_DWORD *)(this + 252) |= v3;
  if ( (v3 & 0x20080) != 0 )
    sub_100D8500((_DWORD *)this);
  v10 = 0;
  if ( (v2 & 8) != 0 )
  {
    v10 = (v2 & 7) == 0;
    v2 = 7;
  }
  result = *(_DWORD *)(this + 312);
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(this + 312) & 0xFFF) + 2] != result) )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(this + 312) & 0xFFF) + 1];
  if ( v8 )
  {
    do
    {
      if ( !v10 || *(_BYTE *)(v8 + 305) )
        sub_100E98A0(v2);
      v9 = *(_DWORD *)(v8 + 316);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(v8 + 316) & 0xFFF) + 2] != v9 >> 12 )
        result = 0;
      else
        result = off_1061BE18[4 * (*(_DWORD *)(v8 + 316) & 0xFFF) + 1];
      v8 = result;
    }
    while ( result );
  }
  return result;
}
