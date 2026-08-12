void __thiscall sub_10124C80(int this)
{
  float *v2; // eax
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st4
  int v10; // ecx
  double v11; // st7
  float *v12; // eax
  double v13; // st6
  double v14; // st5
  double v15; // st4
  double v16; // st3
  double v17; // st2
  double v18; // st1
  double v19; // st6
  double v20; // rtt
  double v21; // st1
  double v22; // st5
  double v23; // rt0
  double v24; // st2
  double v25; // st4
  double v26; // rt1
  double v27; // st5
  double v28; // st6
  float v29; // [esp+4h] [ebp-Ch]
  float v30; // [esp+Ch] [ebp-4h]

  v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 4))(this + 4);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v29 = v3;
  *(float *)(this + 2852) = v3;
  v30 = v5;
  *(float *)(this + 2856) = v4;
  *(float *)(this + 2860) = v5;
  *(float *)(this + 2872) = v5;
  v6 = v5;
  *(float *)(this + 2864) = v3;
  v7 = v4;
  v8 = v3;
  *(float *)(this + 2868) = v4;
  v9 = *(float *)(this + 2880);
  if ( *(float *)(this + 2884) >= 0.0 && *(float *)(this + 2880) < (double)*(float *)(this + 2884) )
    v9 = *(float *)(this + 2884);
  v10 = 0;
  if ( *(int *)(this + 2828) > 0 )
  {
    v11 = v9;
    do
    {
      v12 = (float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1288);
      v13 = (*(float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1308) + v11)
          * 0.5;
      v14 = *v12 - v13;
      v15 = *(float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1292) - v13;
      v16 = *(float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1296) - v13;
      v17 = *v12 + v13;
      v18 = v13;
      v19 = v13 + *(float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1292);
      v20 = v18 + *(float *)(this + 24 * (((_BYTE)v10 + (unsigned __int8)*(_DWORD *)(this + 2824)) & 0x3F) + 1296);
      v21 = v14;
      v22 = v20;
      if ( v21 > *(float *)(this + 2852) )
        v21 = *(float *)(this + 2852);
      *(float *)(this + 2852) = v21;
      v23 = v17;
      v24 = v15;
      v25 = v23;
      if ( v24 > *(float *)(this + 2856) )
        v24 = *(float *)(this + 2856);
      *(float *)(this + 2856) = v24;
      if ( v16 > *(float *)(this + 2860) )
        v16 = *(float *)(this + 2860);
      *(float *)(this + 2860) = v16;
      if ( v25 < *(float *)(this + 2864) )
        v25 = *(float *)(this + 2864);
      *(float *)(this + 2864) = v25;
      v26 = v22;
      v27 = v19;
      v28 = v26;
      if ( v27 < *(float *)(this + 2868) )
        v27 = *(float *)(this + 2868);
      *(float *)(this + 2868) = v27;
      if ( v28 < *(float *)(this + 2872) )
        v28 = *(float *)(this + 2872);
      ++v10;
      *(float *)(this + 2872) = v28;
    }
    while ( v10 < *(_DWORD *)(this + 2828) );
    v6 = v30;
    v7 = v4;
    v8 = v29;
  }
  *(float *)(this + 2852) = *(float *)(this + 2852) - v8;
  *(float *)(this + 2856) = *(float *)(this + 2856) - v7;
  *(float *)(this + 2860) = *(float *)(this + 2860) - v6;
  *(float *)(this + 2864) = *(float *)(this + 2864) - v8;
  *(float *)(this + 2868) = *(float *)(this + 2868) - v7;
  *(float *)(this + 2872) = *(float *)(this + 2872) - v6;
}
