bool __thiscall sub_10272330(_DWORD *this, _DWORD *a2, int a3)
{
  int v3; // eax
  unsigned int v4; // eax
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // esi

  v3 = a3;
  if ( a3 == -1 )
  {
    v3 = 17;
    goto LABEL_4;
  }
  if ( a3 <= 17 )
  {
LABEL_4:
    *this &= 0x1FFFFu;
    *a2 &= 0x1FFFFu;
    v4 = (8 * ((v3 + 7) / 8)) >> 3;
    v5 = (unsigned __int8 *)a2;
    v6 = (unsigned __int8 *)this;
    if ( v4 < 4 )
    {
LABEL_7:
      if ( !v4 )
        return 1;
    }
    else
    {
      while ( *(_DWORD *)v6 == *(_DWORD *)v5 )
      {
        v4 -= 4;
        v5 += 4;
        v6 += 4;
        if ( v4 < 4 )
          goto LABEL_7;
      }
    }
    return *v6 == *v5 && (v4 <= 1 || v6[1] == v5[1] && (v4 <= 2 || v6[2] == v5[2] && v4 <= 3));
  }
  return 0;
}
