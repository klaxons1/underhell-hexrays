int __cdecl sub_10224000(float *a1)
{
  int v1; // ebx
  int result; // eax
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx

  *a1 = 0.0;
  v1 = dword_106C4144;
  a1[161] = 0.0;
  a1[322] = 0.0;
  a1[483] = 0.0;
  a1[644] = 0.0;
  result = 0;
  *((_BYTE *)a1 + 4) = 0;
  *((_BYTE *)a1 + 516) = 0;
  *((_BYTE *)a1 + 648) = 0;
  *((_BYTE *)a1 + 1160) = 0;
  *((_BYTE *)a1 + 1292) = 0;
  *((_BYTE *)a1 + 1804) = 0;
  *((_BYTE *)a1 + 1936) = 0;
  *((_BYTE *)a1 + 2448) = 0;
  *((_BYTE *)a1 + 2580) = 0;
  *((_BYTE *)a1 + 3092) = 0;
  if ( byte_106C34B4[644 * v1] )
  {
    qmemcpy(a1, &flt_106C34B0[161 * v1], 0x284u);
    result = 1;
  }
  v3 = v1 + 1;
  if ( v3 >= 5 )
    v3 = 0;
  if ( byte_106C34B4[644 * v3] )
    qmemcpy(&a1[161 * result++], &flt_106C34B0[161 * v3], 0x284u);
  v4 = v3 + 1;
  if ( v4 >= 5 )
    v4 = 0;
  if ( byte_106C34B4[644 * v4] )
    qmemcpy(&a1[161 * result++], &flt_106C34B0[161 * v4], 0x284u);
  v5 = v4 + 1;
  if ( v5 >= 5 )
    v5 = 0;
  if ( byte_106C34B4[644 * v5] )
    qmemcpy(&a1[161 * result++], &flt_106C34B0[161 * v5], 0x284u);
  v6 = v5 + 1;
  if ( v6 >= 5 )
    v6 = 0;
  v7 = 161 * v6;
  if ( byte_106C34B4[v7 * 4] )
    qmemcpy(&a1[161 * result++], &flt_106C34B0[v7], 0x284u);
  return result;
}
