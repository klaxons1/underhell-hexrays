char *__thiscall sub_10021CB0(_DWORD *this)
{
  char *v2; // eax
  int v3; // edi
  char *v4; // edx
  char v5; // cl
  char *result; // eax
  char *v7; // esi
  _BYTE *v8; // eax
  char *v9; // ecx
  _BYTE *v10; // edx
  char v11; // al
  int v12; // eax
  int i; // esi
  char String[1080]; // [esp+Ch] [ebp-43Ch] BYREF
  char v15[4]; // [esp+444h] [ebp-4h] BYREF

  v2 = (char *)this[725];
  if ( !v2 )
    v2 = (char *)::String;
  v3 = 0;
  v4 = (char *)(String - v2);
  do
  {
    v5 = *v2;
    v2[(_DWORD)v4] = *v2;
    ++v2;
  }
  while ( v5 );
  result = strtok(String, ",");
  v7 = result;
  if ( result )
  {
    do
    {
      v8 = (_BYTE *)sub_10184390(100);
      *(_DWORD *)&String[4 * v3 + 1000] = v8;
      v9 = v7;
      v10 = v8;
      do
      {
        v11 = *v9;
        *v10++ = *v9++;
      }
      while ( v11 );
      ++v3;
      result = strtok(0, ",");
      v7 = result;
    }
    while ( result );
    if ( v3 )
    {
      v12 = sub_10219A30();
      result = *(char **)sub_10162BE0(v15, *(_DWORD *)&String[4 * (v12 % v3) + 1000]);
      this[725] = result;
    }
  }
  for ( i = 0; i < v3; ++i )
    result = (char *)sub_10184660(*(_DWORD *)&String[4 * i + 1000]);
  return result;
}
