void __stdcall sub_102EE5E0(int a1, _DWORD *a2, int a3, int a4)
{
  char *v5; // ecx
  unsigned int v6; // edi
  int v7; // esi
  int *v8; // eax
  int v9; // eax
  int v10; // ebx
  double v11; // st7
  _DWORD *v12; // eax
  double v13; // st6
  double v14; // st5
  float *v15; // esi
  unsigned int i; // edi
  char *v17; // [esp+14h] [ebp-20h]
  float *v18; // [esp+24h] [ebp-10h]
  float v19; // [esp+28h] [ebp-Ch]
  char *v20; // [esp+2Ch] [ebp-8h]
  char *v21; // [esp+3Ch] [ebp+8h]
  float *v22; // [esp+48h] [ebp+14h]

  v22 = (float *)(a1 + 812);
  v5 = (char *)off_10668E48 - a4;
  v6 = 0;
  v7 = a4 + 4;
  v18 = (float *)(a4 + 4);
  v21 = (char *)off_10668E48 - a4;
  v20 = (char *)&off_10668E4C - a4;
  while ( 1 )
  {
    v17 = *(char **)&v5[v7];
    v8 = sub_102D9B20();
    v9 = sub_100B9D10(v8, v17);
    v10 = v9;
    if ( v6 == 6 || sub_100C9700(a2, v9) )
    {
      v12 = sub_102D9B20();
      v19 = (float)sub_100BA1B0(v12, v10);
      *(float *)v7 = ((double)sub_100CF5D0(a2, v10) + (double)(*(_DWORD *)(v7 + 8) * *(_DWORD *)&v20[v7])) / v19;
      v11 = 1.0;
    }
    else
    {
      v11 = 1.0;
      *(float *)v7 = 1.0;
    }
    v13 = *(float *)(dword_106E23E4 + 44) * *v22;
    *(float *)(v7 - 4) = v13;
    v14 = v13 - *(float *)v7;
    *(float *)(v7 + 4) = v14;
    if ( v14 <= v11 )
    {
      v11 = v14;
      if ( v14 < 0.0 )
        v11 = 0.0;
    }
    ++v22;
    *(float *)(v7 + 4) = v11;
    ++v6;
    v7 += 16;
    if ( v6 >= 0xA )
      break;
    v5 = v21;
  }
  if ( a3 )
  {
    Msg("Calculating desired ammo ratios & deltas:\n");
    v15 = v18;
    for ( i = 0; i < 40; i += 4 )
    {
      Msg("   %s Desired Ratio: %.2f, Current Ratio: %.2f = Delta of %.2f\n", off_10668E48[i], *(v15 - 1), *v15, v15[1]);
      v15 += 4;
    }
  }
}
