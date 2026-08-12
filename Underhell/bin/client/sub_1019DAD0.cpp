void __thiscall sub_1019DAD0(float *this, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  float *v9; // eax
  int v10; // esi
  int v11; // edi
  double i; // st7
  _DWORD *v13; // eax
  int v14; // esi
  double v15; // st6
  float *v16; // eax
  double v17; // st6
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st7
  double v22; // st6
  double v23; // st4
  double v24; // st4
  double v25; // st6
  double v26; // st7
  char v27; // al
  double v28; // st7
  const char *v29; // [esp+2Ch] [ebp-40h]
  float v30[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v31; // [esp+48h] [ebp-24h]
  float v32; // [esp+4Ch] [ebp-20h]
  int v33; // [esp+54h] [ebp-18h]
  float v34; // [esp+58h] [ebp-14h]
  float v35; // [esp+5Ch] [ebp-10h]
  float v36; // [esp+60h] [ebp-Ch]
  int v37; // [esp+64h] [ebp-8h]
  float v38; // [esp+68h] [ebp-4h]

  v9 = (float *)sub_100DDA40(268);
  v10 = (int)v9;
  if ( v9 )
  {
    sub_100F2BA0(v9, (int)"splish");
    *(_DWORD *)v10 = &CSplashParticle::`vftable';
    *(_BYTE *)(v10 + 264) = 0;
  }
  else
  {
    v10 = 0;
  }
  v11 = 0;
  v37 = 0;
  if ( v10 )
  {
    sub_100F2950((_DWORD *)v10);
    v37 = v10;
    v11 = v10;
  }
  sub_100F3060(v11, &a2);
  v35 = (a8 - 64.0) * 0.25 * 0.0052083335 + 0.75;
  for ( i = *((float *)off_103DC81C + 4); i >= this[675]; i = v34 )
  {
    v34 = i - this[675];
    this[675] = this[674];
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1) )
      v29 = "effects/splash1";
    else
      v29 = "effects/splash2";
    v13 = sub_100F0920();
    v14 = sub_100F0950((int)v13, v11, v10, v29);
    v15 = -8.0 * v35;
    v36 = v15;
    v38 = v35 * 8.0 - v15;
    v33 = sub_10115FB0();
    v31 = (double)v33 * 0.000030518509 * v38 + v36;
    v33 = sub_10115FB0();
    v32 = (double)v33 * 0.000030518509 * v38 + v36;
    sub_10115FB0();
    v30[0] = v31 + a2;
    v30[1] = a3 + v32;
    v30[2] = a4;
    v16 = sub_100F2B60(v11, v14, 60, v14, v30);
    v10 = (int)v16;
    if ( v16 )
    {
      v16[11] = 0.0;
      v16[10] = 0.25;
      v33 = sub_10115FB0();
      *(float *)(v10 + 24) = (double)v33 * 0.000030518509 * 0.80000001 - 0.40000001;
      v33 = sub_10115FB0();
      *(float *)(v10 + 28) = (double)v33 * 0.000030518509 * 0.80000001 - 0.40000001;
      v33 = sub_10115FB0();
      *(float *)(v10 + 32) = (double)v33 * 0.000030518509 * 0.80000001 - 0.40000001;
      v17 = a6 * 5.0;
      v18 = 5.0 * a7 + 1.0;
      *(float *)(v10 + 24) = a5 * 5.0 + *(float *)(v10 + 24);
      *(float *)(v10 + 28) = v17 + *(float *)(v10 + 28);
      *(float *)(v10 + 32) = v18 + *(float *)(v10 + 32);
      off_103EDFEC();
      v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -128.0,
              128.0);
      v20 = v19 + a8;
      *(float *)(v10 + 24) = *(float *)(v10 + 24) * v20;
      *(float *)(v10 + 28) = v20 * *(float *)(v10 + 28);
      *(float *)(v10 + 32) = v20 * *(float *)(v10 + 32);
      v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.75,
              1.25);
      v22 = 0.80000001 * v21;
      if ( 0.80000001 * v21 <= 1.0 )
        v23 = v22;
      else
        v23 = 1.0;
      v33 = (int)(v23 * 255.0);
      *(_BYTE *)(v10 + 48) = v33;
      v24 = 1.0;
      if ( v22 <= 1.0 )
        v24 = v22;
      v25 = 1.0;
      v33 = (int)(v24 * 255.0);
      *(_BYTE *)(v10 + 49) = v33;
      if ( v21 * 0.75 <= 1.0 )
        v25 = v21 * 0.75;
      v33 = (int)(255.0 * v25);
      *(_BYTE *)(v10 + 50) = v33;
      v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              8.0,
              16.0);
      v33 = (int)(v26 * v35);
      v27 = v33;
      *(_BYTE *)(v10 + 53) = v33;
      *(_BYTE *)(v10 + 54) = 2 * v27;
      *(_WORD *)(v10 + 51) = 255;
      v33 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      *(float *)(v10 + 36) = (float)v33;
      v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              -4.0,
              4.0);
      v11 = v37;
      *(float *)(v10 + 56) = v28;
    }
  }
  this[675] = this[675] - i;
  if ( v11 )
    sub_100F2FF0(v11);
}
