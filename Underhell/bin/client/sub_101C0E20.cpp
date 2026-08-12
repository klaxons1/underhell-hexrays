int __cdecl sub_101C0E20(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // ecx
  int result; // eax
  unsigned int v5; // esi

  v3 = a1;
  result = a3;
  v5 = (unsigned int)&a1[2 * a3];
  if ( (unsigned int)a1 < v5 )
  {
    result = a2;
    do
    {
      *(_BYTE *)result = *v3;
      *(_WORD *)(result + 1) = (unsigned __int8)v3[1];
      *(_BYTE *)(result + 3) = 0;
      v3 += 2;
      result += 4;
    }
    while ( (unsigned int)v3 < v5 );
  }
  return result;
}
