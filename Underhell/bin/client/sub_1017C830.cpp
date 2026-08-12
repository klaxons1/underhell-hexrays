void __cdecl sub_1017C830(float *a1, float *a2)
{
  double v3; // st6
  double v4; // st7
  float *v5; // eax
  int v6; // esi
  int v7; // ebx
  float *v8; // eax
  float *v9; // esi
  double v10; // st7
  double v11; // st7
  double (__thiscall *v12)(int, _DWORD, _DWORD); // eax
  double v13; // st7
  double v14; // st7
  float v15; // [esp+5Ch] [ebp-34h]
  float v16; // [esp+60h] [ebp-30h]
  float v17; // [esp+60h] [ebp-30h]
  float v18; // [esp+70h] [ebp-20h]
  float v19; // [esp+74h] [ebp-1Ch]
  float v20; // [esp+78h] [ebp-18h]
  float v21[3]; // [esp+7Ch] [ebp-14h] BYREF
  float v22; // [esp+88h] [ebp-8h]
  float v23; // [esp+8Ch] [ebp-4h]
  float v24; // [esp+98h] [ebp+8h]
  int v25; // [esp+9Ch] [ebp+Ch]

  v3 = a2[1];
  v4 = a2[2];
  v21[0] = *a2 + *a1;
  v21[1] = v3 + a1[1];
  v21[2] = v4 + a1[2];
  v5 = (float *)sub_100DDA40(384);
  v6 = (int)v5;
  v7 = 0;
  v25 = (int)v5;
  if ( v5 )
  {
    sub_100F2BA0(v5, (int)"FX_MetalScrape 1");
    *(_DWORD *)v6 = &CTrailParticles::`vftable';
    sub_100E8AB0((void *)(v6 + 260));
    *(float *)(v6 + 380) = 0.0;
    *(_DWORD *)(v6 + 376) = 0;
    sub_100F2950((_DWORD *)v6);
    sub_100F3060(v6, v21);
    (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 72))(
      v6,
      v21,
      a2,
      0.30000001,
      128.0,
      512.0,
      800.0,
      0.40000001,
      1,
      0);
    if ( !dword_10445298 )
      dword_10445298 = sub_100F29B0(v6, (int)a2, v6, "effects/spark");
    while ( 1 )
    {
      v8 = sub_100F2B60(v6, v6, 56, dword_10445298, v21);
      v9 = v8;
      if ( !v8 )
        break;
      v8[11] = 0.0;
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              0.0,
              2.0);
      v22 = v10;
      v11 = v10 * 0.30000001;
      v12 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
      v24 = v11;
      v23 = -v11;
      v16 = v11;
      v18 = v12(dword_10413198, LODWORD(v23), LODWORD(v16)) + *a2;
      v19 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              LODWORD(v23),
              LODWORD(v24))
          + a2[1];
      v20 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              LODWORD(v23),
              LODWORD(v24))
          + a2[2];
      v9[13] = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(2.0, 5.0);
      v9[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 0.015,
                 0.059999999);
      v9[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 2.0,
                 2.0);
      v13 = 2.0 - v22;
      v17 = 512.0 * v13;
      v15 = v13 * 128.0;
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              LODWORD(v15),
              LODWORD(v17));
      ++v7;
      v9[6] = v18 * v14;
      v9[7] = v19 * v14;
      v9[8] = v14 * v20;
      v9[9] = NAN;
      if ( v7 >= 35 )
        break;
      v6 = v25;
    }
    sub_100F2FF0(v25);
  }
}
