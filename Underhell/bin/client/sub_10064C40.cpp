int __cdecl sub_10064C40(int a1, int a2)
{
  int result; // eax
  float *v3; // ecx
  int v4; // edx

  result = a2;
  v3 = (float *)(a1 + 4);
  v4 = 3;
  do
  {
    if ( *(_BYTE *)(a2 + 8) )
      *(v3 - 1) = *(float *)(a2 + 12);
    else
      v3[29] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      *v3 = *(float *)(a2 + 12);
    else
      v3[30] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[1] = *(float *)(a2 + 12);
    else
      v3[31] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[2] = *(float *)(a2 + 12);
    else
      v3[32] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[3] = *(float *)(a2 + 12);
    else
      v3[33] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[4] = *(float *)(a2 + 12);
    else
      v3[34] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[5] = *(float *)(a2 + 12);
    else
      v3[35] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[6] = *(float *)(a2 + 12);
    else
      v3[36] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[7] = *(float *)(a2 + 12);
    else
      v3[37] = *(float *)(a2 + 12);
    if ( *(_BYTE *)(a2 + 8) )
      v3[8] = *(float *)(a2 + 12);
    else
      v3[38] = *(float *)(a2 + 12);
    v3 += 10;
    --v4;
  }
  while ( v4 );
  return result;
}
