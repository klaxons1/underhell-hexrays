int __cdecl sub_102337B0(_WORD *a1, int a2, int a3)
{
  _WORD *v3; // ecx
  int result; // eax
  int v6; // edi

  v3 = a1;
  if ( a1 )
  {
    result = a2 / 6;
    if ( a2 / 6 > 0 )
    {
      v6 = a2 / 6;
      do
      {
        v3[1] = a3 + 1;
        *v3 = a3;
        v3[3] = a3;
        result = (unsigned __int16)a3 + 3;
        v3[2] = a3 + 2;
        v3[4] = a3 + 2;
        v3[5] = result;
        a3 += 4;
        v3 += 6;
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
