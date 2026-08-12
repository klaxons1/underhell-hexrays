char __cdecl sub_101C0480(unsigned __int8 *a1, int a2, int a3)
{
  unsigned __int8 *v3; // ecx
  char result; // al
  unsigned int v5; // esi
  double v7; // st4
  double v8; // st3
  int v9; // [esp+8h] [ebp+4h]

  v3 = a1;
  result = a3;
  v5 = (unsigned int)&a1[4 * a3];
  if ( (unsigned int)a1 < v5 )
  {
    do
    {
      v7 = (double)v3[2];
      v8 = (double)v3[1];
      v9 = *v3;
      v3 += 4;
      ++a2;
      result = (int)(v7 * 0.114 + v8 * 0.58700001 + (double)v9 * 0.29899999);
      *(_BYTE *)(a2 - 1) = result;
    }
    while ( (unsigned int)v3 < v5 );
  }
  return result;
}
