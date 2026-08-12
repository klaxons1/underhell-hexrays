int __cdecl sub_10429210(int a1, char *a2, int a3)
{
  char *v3; // esi
  int v4; // edx
  int v5; // eax
  int v6; // ecx

  AssertValidStringPtr(a1, 0xFFFFFF);
  v3 = a2;
  AssertValidStringPtr(a2, 0xFFFFFF);
  v4 = a3;
  if ( a3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = v3[a1 - (_DWORD)a2];
    v6 = *v3;
    --v4;
    ++v3;
    if ( v5 != v6 )
    {
      if ( (unsigned int)(v5 - 97) <= 0x19 )
        v5 -= 32;
      if ( (unsigned int)(v6 - 97) <= 0x19 )
        v6 -= 32;
      if ( v5 != v6 )
        break;
    }
    if ( !v5 || v4 <= 0 )
      return 0;
  }
  return 2 * (v5 >= v6) - 1;
}
