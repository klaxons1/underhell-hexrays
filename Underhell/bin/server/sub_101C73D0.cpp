unsigned int __thiscall sub_101C73D0(unsigned int *this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // edi

  result = this[113];
  if ( result == -1 || (v4 = &off_1061BE18[4 * (this[113] & 0xFFF) + 1], result >>= 12, v4[1] != result) )
    v5 = 0;
  else
    v5 = *v4;
  if ( v5 != a2 )
  {
    if ( a2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*this + 320))(this) )
      {
        if ( *(_BYTE *)(a2 + 306) == 6 )
        {
          v6 = sub_1001F4B0((int)this);
          v7 = *(_DWORD *)(a2 + 424);
          v8 = v6;
          if ( v7 )
          {
            if ( v6 && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 4) != 0 )
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 1476))(v8, a2);
          }
        }
      }
    }
    v9 = this[113];
    if ( v9 == -1 || off_1061BE18[4 * (this[113] & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (this[113] & 0xFFF) + 1];
    sub_101C5310(this + 113, a2);
    if ( v10 )
    {
      if ( !a2 )
      {
        sub_101C5DE0((int)this, v10);
        return sub_100EA9A0((int *)this, 1);
      }
    }
    else if ( a2 )
    {
      goto LABEL_20;
    }
    sub_101C5DE0((int)this, v10);
LABEL_20:
    sub_101C4DF0((int *)a2, (int *)this);
    if ( a2 )
      return sub_100EA940((int *)this, 1);
    return sub_100EA9A0((int *)this, 1);
  }
  return result;
}
