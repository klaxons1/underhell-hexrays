unsigned int __thiscall sub_102F7DA0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // edi
  unsigned int result; // eax
  int *v9; // ecx
  int v10; // ecx

  if ( a2
    && *(_DWORD *)a2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 1],
        v4 = *(_DWORD *)a2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 2] == v4)
    && *v3
    && (off_1061BE18[4 * (*(_DWORD *)a2 & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v3),
        (v6 = __RTDynamicCast(
                v5,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CAI_Hint `RTTI Type Descriptor',
                0),
         (v7 = v6) != 0)
     && *(_WORD *)(v6 + 816) == 16) )
  {
    sub_10395870(-1, 1, 1);
    *(float *)(a2 + 16) = 9999999.0;
    return (unsigned int)sub_10019680(this + 1424, v7);
  }
  else
  {
    result = sub_103942C0(this);
    if ( result == -1 )
    {
      sub_10395870(1, 1, 1);
      result = this[1424];
      if ( result != -1 )
      {
        v9 = &off_1061BE18[4 * (this[1424] & 0xFFF) + 1];
        result >>= 12;
        if ( off_1061BE18[4 * (this[1424] & 0xFFF) + 2] == result )
        {
          if ( *v9 )
          {
            if ( off_1061BE18[4 * (this[1424] & 0xFFF) + 2] == result )
              v10 = *v9;
            else
              v10 = 0;
            result = (*(int (__thiscall **)(_DWORD *, int))(*this + 2284))(this, v10);
            this[1424] = -1;
          }
        }
      }
    }
  }
  return result;
}
