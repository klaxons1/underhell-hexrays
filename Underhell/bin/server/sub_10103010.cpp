int __cdecl sub_10103010(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // ecx
  int result; // eax
  int i; // edi
  int v14; // esi
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // ecx
  _BYTE v18[516]; // [esp+4h] [ebp-264h] BYREF
  _BYTE v19[48]; // [esp+208h] [ebp-60h] BYREF
  _BYTE v20[48]; // [esp+238h] [ebp-30h] BYREF

  v8 = a6;
  v9 = 0;
  if ( a6 < -1 || (v10 = *(_DWORD *)(*a1 + 156), a6 >= v10) )
  {
    v8 = 0;
    goto LABEL_4;
  }
  if ( a6 != -1 )
  {
LABEL_4:
    v11 = a1[16];
    do
    {
      *(_DWORD *)&v18[4 * v9 + 4] = v8;
      v8 = *(_DWORD *)(v11 + 4 * v8);
      ++v9;
    }
    while ( v8 != -1 );
    goto LABEL_6;
  }
  v16 = 0;
  v9 = *(_DWORD *)(*a1 + 156);
  if ( v10 > 0 )
  {
    v17 = &v18[4 * v10];
    do
      *v17-- = v16++;
    while ( v16 < v10 );
  }
LABEL_6:
  result = sub_10425040(a2, a3, v19);
  for ( i = v9 - 1; i >= 0; --i )
  {
    v14 = *(_DWORD *)&v18[4 * i + 4];
    result = a1[11];
    if ( (a8 & *(_DWORD *)(result + 4 * v14)) != 0 )
    {
      sub_10425290(a5 + 16 * v14, a4 + 12 * v14, v20);
      v15 = *(_DWORD *)(a1[16] + 4 * v14);
      if ( v15 == -1 )
        result = sub_10421E30(v19, v20, a7 + 48 * v14);
      else
        result = sub_10421E30(a7 + 48 * v15, v20, a7 + 48 * v14);
    }
  }
  return result;
}
