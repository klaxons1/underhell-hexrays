void __cdecl sub_1019C720(int a1)
{
  float *v1; // eax
  int v2; // esi
  float *v3; // ebx
  int v5; // eax
  double v6; // st7
  double v7; // st7
  long double v8; // st7
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  int v12; // eax
  float *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st7
  double v21; // st7
  float v22; // [esp+30h] [ebp-70h]
  float v23; // [esp+40h] [ebp-60h]
  float v24; // [esp+44h] [ebp-5Ch]
  float v25; // [esp+4Ch] [ebp-54h] BYREF
  float v26; // [esp+50h] [ebp-50h]
  float v27; // [esp+54h] [ebp-4Ch]
  float v28; // [esp+58h] [ebp-48h] BYREF
  float v29; // [esp+5Ch] [ebp-44h]
  float v30; // [esp+60h] [ebp-40h]
  float v31; // [esp+64h] [ebp-3Ch] BYREF
  float v32[2]; // [esp+68h] [ebp-38h] BYREF
  float v33; // [esp+70h] [ebp-30h] BYREF
  float v34; // [esp+74h] [ebp-2Ch]
  float v35; // [esp+78h] [ebp-28h]
  float v36; // [esp+7Ch] [ebp-24h] BYREF
  float v37; // [esp+80h] [ebp-20h]
  float v38; // [esp+84h] [ebp-1Ch]
  int v39; // [esp+88h] [ebp-18h]
  float *v40; // [esp+8Ch] [ebp-14h]
  float *v41; // [esp+90h] [ebp-10h]
  int v42; // [esp+94h] [ebp-Ch]
  float v43; // [esp+98h] [ebp-8h]
  float v44; // [esp+9Ch] [ebp-4h]
  float v45; // [esp+A8h] [ebp+8h]

  v1 = (float *)sub_100DDA40(260);
  v2 = (int)v1;
  if ( v1 )
  {
    sub_100F2BA0(v1, (int)"thumperdust");
    *(_DWORD *)v2 = &ThumperDustEmitter::`vftable';
  }
  else
  {
    v2 = 0;
  }
  v3 = 0;
  if ( v2 )
  {
    sub_100F2950((_DWORD *)v2);
    v3 = (float *)v2;
  }
  v5 = sub_10036460(*(_DWORD *)(a1 + 52));
  if ( v5 )
  {
    v6 = *(float *)(v5 + 384);
    v25 = *(float *)a1 - v6;
    v26 = *(float *)(a1 + 4) - v6;
    v27 = *(float *)(a1 + 8) - v6;
    v28 = *(float *)a1 + v6;
    v29 = *(float *)(a1 + 4) + v6;
    v30 = v6 + *(float *)(a1 + 8);
    sub_100EC3F0((int)(v3 + 2), &v25, &v28, 1);
  }
  sub_100F3060((int)v3, (float *)a1);
  sub_100F29C0(v3, 32.0, 64.0);
  v44 = 0.0;
  v7 = 255.0;
  if ( *(float *)(a1 + 56) < 255.0 )
    v7 = *(float *)(a1 + 56);
  v43 = v7;
  (*(void (__thiscall **)(int, int, _DWORD, int, float *, _DWORD))(*(_DWORD *)dword_1041315C + 264))(
    dword_1041315C,
    a1,
    0,
    1,
    &v36,
    0);
  v40 = &v31;
  v41 = v32;
  v42 = 24;
  v36 = (v36 + (0.85000002 - v36) * 0.5) * 255.0;
  v37 = (v37 + (0.75 - v37) * 0.5) * 255.0;
  v38 = (0.5 * (0.51999998 - v38) + v38) * 255.0;
  do
  {
    v44 = v44 + 0.2617994;
    v8 = sin(v44);
    v9 = v41;
    *v40 = cos(v44);
    *v9 = v8;
    v32[1] = 0.0;
    v23 = v31 * 128.0;
    v24 = 128.0 * v32[0];
    v25 = (double)sub_10115FB0() * 0.000030518509 * 8.0 - 4.0;
    v26 = (double)sub_10115FB0() * 0.000030518509 * 8.0 - 4.0;
    v10 = (double)sub_10115FB0() * 0.000030518509 * 8.0 - 4.0 + *(float *)(a1 + 8);
    v11 = *(float *)(a1 + 4) + v26 + v24;
    v33 = v25 + *(float *)a1 + v23;
    v34 = v11;
    v35 = v10;
    v12 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
    v13 = sub_100F2B60((int)v3, v2, 60, dword_1043DF20[v12], &v33);
    v2 = (int)v13;
    if ( v13 )
    {
      v13[11] = 0.0;
      v13[10] = 1.5;
      v14 = v33 - *(float *)a1;
      v28 = v14;
      v15 = v34 - *(float *)(a1 + 4);
      v29 = v15;
      v16 = v35 - *(float *)(a1 + 8);
      v30 = v16;
      v22 = v14 * v14 + v15 * v15 + v16 * v16;
      v45 = off_103EDFE0(v22);
      off_103EDFEC();
      v17 = v45 + v45;
      v18 = v28 * v17;
      v19 = v29 * v17;
      v39 = HIWORD(v45) | 0xC00;
      v20 = v17 * v30;
      *(float *)(v2 + 24) = v18;
      *(float *)(v2 + 28) = v19;
      *(float *)(v2 + 32) = v20;
      *(float *)(v2 + 32) = *(float *)(a1 + 56) * 0.33333334;
      *(_BYTE *)(v2 + 48) = (int)v36;
      *(_BYTE *)(v2 + 49) = (int)v37;
      v39 = (int)v38;
      *(_BYTE *)(v2 + 50) = v39;
      *(_BYTE *)(v2 + 51) = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(
                              dword_10413198,
                              64,
                              96);
      v21 = v43;
      *(_BYTE *)(v2 + 52) = 0;
      *(_BYTE *)(v2 + 53) = (int)(0.25 * v21);
      v39 = (int)(v21 * 0.5);
      *(_BYTE *)(v2 + 54) = v39;
      *(float *)(v2 + 36) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                     dword_10413198,
                                     0,
                                     360);
      *(float *)(v2 + 56) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                              dword_10413198,
                              -6.0,
                              6.0);
    }
    --v42;
  }
  while ( v42 );
  if ( v3 )
    sub_100F2FF0((int)v3);
}
