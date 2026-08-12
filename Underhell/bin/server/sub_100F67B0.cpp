unsigned int __thiscall sub_100F67B0(int *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  const char *v8; // edi
  int v9; // esi
  int v10; // eax

  result = this[1057];
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (this[1057] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( !sub_100CF460(this)
          || (v4 = sub_100CF460(this), result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 980))(v4), (_BYTE)result) )
        {
          v5 = this[1057];
          if ( v5 == -1 || off_1061BE18[4 * (this[1057] & 0xFFF) + 2] != (unsigned int)this[1057] >> 12 )
            v6 = 0;
          else
            v6 = off_1061BE18[4 * (this[1057] & 0xFFF) + 1];
          if ( v5 == -1 || off_1061BE18[4 * (this[1057] & 0xFFF) + 2] != (unsigned int)this[1057] >> 12 )
            v7 = 0;
          else
            v7 = off_1061BE18[4 * (this[1057] & 0xFFF) + 1];
          v8 = *(const char **)(v7 + 92);
          if ( !v8 )
            v8 = String;
          v9 = *this;
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 856))(v6);
          return (*(int (__thiscall **)(int *, const char *, int))(v9 + 1432))(this, v8, v10);
        }
      }
    }
  }
  return result;
}
