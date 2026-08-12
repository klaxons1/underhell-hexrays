int __thiscall sub_1004D130(_DWORD *this, int a2)
{
  int i; // edi
  int v4; // eax
  int result; // eax
  int v6; // eax
  unsigned int v7; // eax
  void *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+8h] [ebp-4h] BYREF

  for ( i = 0; ; ++i )
  {
    v4 = this[212];
    if ( (v4 & 1) != 0 && (v4 & 2) != 0 )
    {
      result = sub_1006DCB0(this);
    }
    else
    {
      result = sub_1006F910(this);
      this[212] |= 2u;
    }
    if ( i >= this[209] )
      break;
    v6 = this[212];
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
    {
      sub_1006DCB0(this);
    }
    else
    {
      sub_1006F910(this);
      this[212] |= 2u;
    }
    if ( this[209] > i )
    {
      v7 = *(_DWORD *)(this[206] + 4 * i);
      if ( v7 != -1 && off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 2] == v7 >> 12 )
      {
        v8 = (void *)off_1061BE18[4 * (*(_DWORD *)(this[206] + 4 * i) & 0xFFF) + 1];
        if ( v8 )
        {
          if ( sub_1004BEB0(v8, &v11) )
          {
            v9 = v11;
            v10 = *(_DWORD *)(v11 + 4);
            if ( v10 )
            {
              *(_DWORD *)(v10 + 2340) = 0;
              *(float *)(v10 + 2348) = 0.0;
            }
            *(_DWORD *)(v9 + 32) = 1;
            sub_10023CB0(*(char **)(v9 + 4), 25);
          }
        }
      }
    }
  }
  return result;
}
