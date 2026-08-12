void __cdecl sub_102338B0(_WORD *a1, int a2, __int16 a3)
{
  int v3; // edx
  _WORD *i; // ecx

  if ( a1 )
  {
    *a1 = a2 / 2 + a3 - 1;
    a1[1] = a3;
    v3 = 1;
    for ( i = a1 + 2; v3 < a2 / 2; i += 2 )
    {
      *i = v3 + a3 - 1;
      i[1] = v3++ + a3;
    }
  }
}
