double __thiscall sub_1013FDA0(int this, float a2)
{
  int v3; // esi
  double v4; // st7
  double v5; // st7
  double v6; // st7
  int v7; // eax
  int v8; // esi
  double v9; // st7
  double v11; // st7
  int v12; // eax
  int v13; // esi
  double v14; // st6
  double v15; // st5
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  double v28; // st6
  double v29; // st7
  float v30; // [esp+4h] [ebp-1Ch]
  _BYTE v31[12]; // [esp+10h] [ebp-10h] BYREF
  float v32; // [esp+1Ch] [ebp-4h]
  float v33; // [esp+28h] [ebp+8h]
  float v34; // [esp+28h] [ebp+8h]
  float v35; // [esp+28h] [ebp+8h]
  float v36; // [esp+28h] [ebp+8h]

  if ( *(_DWORD *)(dword_1043B094 + 48) == 1 )
  {
    v3 = dword_1043B0DC;
    if ( LOBYTE(a2) == 1 )
      v30 = -1.0;
    else
      v30 = *(float *)(dword_1043B0DC + 44);
    v4 = sub_1013E5D0((char *)this, *(float *)(dword_1043B124 + 44), v30);
    if ( v4 < 0.0 )
      v4 = *(float *)(v3 + 44) * 0.0099999998;
    if ( v4 < 0.000099999997 )
      v4 = 0.000099999997;
    v33 = 0.0099999998 * *(float *)(v3 + 44) / v4;
    v5 = sub_1013E5D0((char *)this, 50.0, -1.0);
    if ( v5 > 0.0 )
    {
      v6 = *(float *)(dword_1043B16C + 44) * 0.0099999998 / v5;
      if ( v33 < v6 )
        v33 = v6;
    }
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v8 = v7;
    if ( v7 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    v9 = *(float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 612))(v8, v31) * v33;
    v34 = v9;
    if ( v9 < 0.001 )
      v34 = 0.001;
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
    return v34;
  }
  else
  {
    v11 = 0.0;
    v12 = *(_DWORD *)(this + 1320);
    v32 = 0.0;
    v13 = 0;
    v14 = 1.0;
    v15 = 1.0;
    if ( v12 == 3 || v12 == 2 )
    {
      v15 = 1.0 / (double)*(int *)(this + 1336) * (double)*(int *)(this + 1332);
      if ( *(_DWORD *)(dword_1043AB84 + 48) )
      {
        (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
          dword_1041315C,
          20,
          "Scale value = %f",
          v15);
        v11 = v32;
        v14 = 1.0;
        v35 = v15;
        v15 = v35;
      }
    }
    v36 = v15;
    if ( (LODWORD(v36) & 0x7F800000) != 0x7F800000 )
      v14 = v15;
    v16 = this + 20;
    v17 = 3;
    do
    {
      v18 = *(_DWORD *)(v16 - 20);
      if ( v18 == 3 || v18 == 2 )
      {
        v13 += *(_DWORD *)(v16 - 8);
        v11 = v11 + (*(float *)(v16 + 4) + *(float *)v16) * 0.5 * ((double)*(int *)(v16 - 4) * v14);
      }
      v19 = *(_DWORD *)(v16 + 24);
      if ( v19 == 3 || v19 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 36);
        v11 = v11 + (*(float *)(v16 + 48) + *(float *)(v16 + 44)) * 0.5 * ((double)*(int *)(v16 + 40) * v14);
      }
      v20 = *(_DWORD *)(v16 + 68);
      if ( v20 == 3 || v20 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 80);
        v11 = v11 + (*(float *)(v16 + 92) + *(float *)(v16 + 88)) * 0.5 * ((double)*(int *)(v16 + 84) * v14);
      }
      v21 = *(_DWORD *)(v16 + 112);
      if ( v21 == 3 || v21 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 124);
        v11 = v11 + (*(float *)(v16 + 136) + *(float *)(v16 + 132)) * 0.5 * ((double)*(int *)(v16 + 128) * v14);
      }
      v22 = *(_DWORD *)(v16 + 156);
      if ( v22 == 3 || v22 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 168);
        v11 = v11 + (*(float *)(v16 + 180) + *(float *)(v16 + 176)) * 0.5 * ((double)*(int *)(v16 + 172) * v14);
      }
      v23 = *(_DWORD *)(v16 + 200);
      if ( v23 == 3 || v23 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 212);
        v11 = v11 + (*(float *)(v16 + 224) + *(float *)(v16 + 220)) * 0.5 * ((double)*(int *)(v16 + 216) * v14);
      }
      v24 = *(_DWORD *)(v16 + 244);
      if ( v24 == 3 || v24 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 256);
        v11 = v11 + (*(float *)(v16 + 268) + *(float *)(v16 + 264)) * 0.5 * ((double)*(int *)(v16 + 260) * v14);
      }
      v25 = *(_DWORD *)(v16 + 288);
      if ( v25 == 3 || v25 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 300);
        v11 = v11 + (*(float *)(v16 + 312) + *(float *)(v16 + 308)) * 0.5 * ((double)*(int *)(v16 + 304) * v14);
      }
      v26 = *(_DWORD *)(v16 + 332);
      if ( v26 == 3 || v26 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 344);
        v11 = v11 + (*(float *)(v16 + 356) + *(float *)(v16 + 352)) * 0.5 * ((double)*(int *)(v16 + 348) * v14);
      }
      v27 = *(_DWORD *)(v16 + 376);
      if ( v27 == 3 || v27 == 2 )
      {
        v13 += *(_DWORD *)(v16 + 388);
        v11 = v11 + (*(float *)(v16 + 400) + *(float *)(v16 + 396)) * 0.5 * ((double)*(int *)(v16 + 392) * v14);
      }
      v16 += 440;
      --v17;
    }
    while ( v17 );
    v28 = 0.5;
    if ( v13 <= 0 )
      return 0.005 / v28;
    v29 = v11 * (1.0 / (double)v13);
    v28 = 0.000099999997;
    if ( v29 < 0.000099999997 )
      return 0.005 / v28;
    else
      return 0.005 / v29;
  }
}
