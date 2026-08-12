int __cdecl sub_101BFBF0(unsigned __int16 *a1, int a2, int a3, int a4)
{
  unsigned __int16 *v4; // ecx
  unsigned int v6; // edi
  int result; // eax
  int v8; // [esp+14h] [ebp+Ch]
  int v9; // [esp+14h] [ebp+Ch]

  v4 = a1;
  v6 = (unsigned int)&a1[4 * a4 * a3];
  result = (8 * a4 * a3 + 7) / 8;
  if ( result >= 4 )
  {
    result = v6 - 24;
    do
    {
      v8 = *v4;
      v4 += 16;
      a2 += 48;
      *(float *)(a2 - 48) = (double)v8 * 0.00024414062;
      *(float *)(a2 - 44) = (double)*(v4 - 15) * 0.00024414062;
      *(float *)(a2 - 40) = (double)*(v4 - 14) * 0.00024414062;
      *(float *)(a2 - 36) = (double)*(v4 - 12) * 0.00024414062;
      *(float *)(a2 - 32) = (double)*(v4 - 11) * 0.00024414062;
      *(float *)(a2 - 28) = (double)*(v4 - 10) * 0.00024414062;
      *(float *)(a2 - 24) = (double)*(v4 - 8) * 0.00024414062;
      *(float *)(a2 - 20) = (double)*(v4 - 7) * 0.00024414062;
      *(float *)(a2 - 16) = (double)*(v4 - 6) * 0.00024414062;
      *(float *)(a2 - 12) = (double)*(v4 - 4) * 0.00024414062;
      *(float *)(a2 - 8) = (double)*(v4 - 3) * 0.00024414062;
      *(float *)(a2 - 4) = (double)*(v4 - 2) * 0.00024414062;
    }
    while ( (int)v4 < result );
  }
  for ( ; (unsigned int)v4 < v6; *(float *)(a2 - 4) = (double)result * 0.00024414062 )
  {
    v9 = *v4;
    v4 += 4;
    a2 += 12;
    *(float *)(a2 - 12) = (double)v9 * 0.00024414062;
    *(float *)(a2 - 8) = (double)*(v4 - 3) * 0.00024414062;
    result = *(v4 - 2);
  }
  return result;
}
