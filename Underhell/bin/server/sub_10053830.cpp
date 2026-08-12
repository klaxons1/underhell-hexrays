int __thiscall sub_10053830(int *this, int a2, const char *a3)
{
  int result; // eax
  const char *v4; // edx
  _DWORD *v5; // esi
  int i; // edi
  int *v7; // eax
  int v8; // ecx
  int v9; // eax
  char v10; // al

  result = sub_10053310(this, a2);
  if ( result )
  {
    v4 = a3;
    if ( a3 )
    {
      v5 = *(_DWORD **)(result + 20);
      for ( i = 0; v5; v5 = (_DWORD *)v5[18] )
      {
        if ( *v5 != -1 )
        {
          v7 = &off_1061BE18[4 * (*v5 & 0xFFF) + 1];
          v8 = *v5 >> 12;
          if ( off_1061BE18[4 * (*v5 & 0xFFF) + 2] == v8 )
          {
            if ( *v7 )
            {
              v9 = off_1061BE18[4 * (*v5 & 0xFFF) + 2] == v8 ? *v7 : 0;
              if ( *(const char **)(v9 + 92) == v4 )
                goto LABEL_15;
              if ( !v4 )
                v4 = String;
              v10 = sub_100D6240(v4);
              v4 = a3;
              if ( v10 )
LABEL_15:
                ++i;
            }
          }
        }
      }
      return i;
    }
    else
    {
      return *(_DWORD *)(result + 32);
    }
  }
  return result;
}
