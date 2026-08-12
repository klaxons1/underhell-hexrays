int *__thiscall sub_1021AD10(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // edi
  int *v4; // ecx
  int v5; // edx
  unsigned int v6; // eax
  int *result; // eax
  int *v8; // ecx
  int v9; // edx

  v2 = this[216];
  v3 = off_1061BE18;
  if ( v2 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[216] & 0xFFF) + 1];
    if ( v4[1] == v2 >> 12 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        if ( (_DWORD *)v5 != this
          || (v6 = this[77], v6 != -1)
          && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == v6 >> 12
          && off_1061BE18[4 * (this[77] & 0xFFF) + 1] )
        {
          sub_101C8460((int)this, v5);
          v3 = off_1061BE18;
        }
      }
    }
  }
  result = (int *)this[217];
  if ( result != (int *)-1 )
  {
    v8 = &v3[4 * (this[217] & 0xFFF) + 1];
    result = (int *)((unsigned int)result >> 12);
    if ( (int *)v3[4 * (this[217] & 0xFFF) + 2] == result )
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( (_DWORD *)v9 != this )
          return sub_101C8460((int)this, v9);
        result = (int *)this[77];
        if ( result != (int *)-1 )
        {
          result = (int *)((unsigned int)result >> 12);
          if ( (int *)v3[4 * (this[77] & 0xFFF) + 2] == result )
          {
            if ( v3[4 * (this[77] & 0xFFF) + 1] )
              return sub_101C8460((int)this, v9);
          }
        }
      }
    }
  }
  return result;
}
