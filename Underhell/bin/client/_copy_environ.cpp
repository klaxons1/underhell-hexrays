char *__usercall copy_environ@<eax>(_DWORD *a1@<eax>)
{
  char *result; // eax
  _DWORD *v3; // ecx
  char *v4; // esi
  const char *v5; // eax
  int v6; // edi
  char *v7; // [esp+4h] [ebp-4h]

  result = 0;
  v3 = a1;
  if ( a1 )
  {
    if ( *a1 )
    {
      do
      {
        ++v3;
        ++result;
      }
      while ( *v3 );
    }
    v4 = (char *)sub_100DD9C0((int)(result + 1), 4);
    v7 = v4;
    if ( !v4 )
      _amsg_exit(9);
    v5 = (const char *)*a1;
    if ( *a1 )
    {
      v6 = (char *)a1 - v4;
      do
      {
        *(_DWORD *)v4 = sub_100DDAA0(v5);
        v4 += 4;
        v5 = *(const char **)&v4[v6];
      }
      while ( v5 );
    }
    *(_DWORD *)v4 = 0;
    return v7;
  }
  return result;
}
