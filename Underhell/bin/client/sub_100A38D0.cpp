void __usercall sub_100A38D0(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  int v3; // ebx
  bool v4; // zf
  double v5; // st7
  _DWORD *v6; // edi
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edi
  double v12; // st6
  float *v13; // ebx
  long double v14; // st7
  long double v15; // st7
  char v16; // al
  int v17; // eax
  unsigned __int8 v18; // al
  double v19; // st7
  float v22; // [esp+3Ch] [ebp-28h] BYREF
  float v23; // [esp+40h] [ebp-24h]
  float v24; // [esp+44h] [ebp-20h]
  float v25; // [esp+48h] [ebp-1Ch]
  int v26; // [esp+4Ch] [ebp-18h]
  int v27; // [esp+50h] [ebp-14h]
  float v28; // [esp+54h] [ebp-10h]
  _DWORD *v29; // [esp+58h] [ebp-Ch]
  float v30; // [esp+5Ch] [ebp-8h]
  float v31; // [esp+60h] [ebp-4h]

  v3 = a1;
  v4 = (*(_BYTE *)(a1 + 32) & 0x40) == 0;
  v27 = a1;
  if ( v4 )
  {
    v5 = *(float *)(a1 + 28);
    if ( v5 >= 2.0 )
    {
      if ( v5 > 2.0 )
        v5 = 2.0;
    }
    else
    {
      v5 = 2.0;
    }
    v28 = 1.0 - v5 * 0.15000001;
    v6 = (_DWORD *)sub_100DDA40(260);
    if ( v6 )
    {
      sub_100F2BA0("exp_smoke");
      *v6 = &CExplosionParticle::`vftable';
    }
    else
    {
      v6 = 0;
    }
    v7 = 0;
    v29 = 0;
    if ( v6 )
    {
      sub_100F2950(v6);
      v29 = v6;
      v7 = v6;
    }
    sub_100F3060(v3 + 4);
    sub_100F29C0(32.0, 64.0);
    if ( !*(_DWORD *)(v3 + 48) )
      *(_DWORD *)(v3 + 48) = sub_100F29B0("effects/fire_cloud2");
    v26 = 32;
    do
    {
      v30 = COERCE_FLOAT(sub_10115FB0());
      v22 = (double)SLODWORD(v30) * 0.000030518509 * 96.0 - 48.0;
      v30 = COERCE_FLOAT(sub_10115FB0());
      v23 = (double)SLODWORD(v30) * 0.000030518509 * 96.0 - 48.0;
      v8 = sub_10115FB0();
      v9 = *(_DWORD *)(v3 + 48);
      v30 = *(float *)&v8;
      v22 = *(float *)(v3 + 4) + v22;
      v23 = *(float *)(v3 + 8) + v23;
      v24 = (double)v8 * 0.000030518509 * 96.0 - 48.0 + *(float *)(v3 + 12);
      v10 = sub_100F2B60(60, v9, &v22);
      v11 = v10;
      if ( v10 )
      {
        *(float *)(v10 + 44) = 0.0;
        *(float *)(v10 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198
                                                                                                + 4))(
                                 dword_10413198,
                                 0.2,
                                 0.40000001,
                                 a2,
                                 a3);
        v12 = -0.75 * v28;
        v30 = v12;
        v31 = v28 * 0.75 - v12;
        v25 = COERCE_FLOAT(sub_10115FB0());
        *(float *)(v11 + 24) = (double)SLODWORD(v25) * 0.000030518509 * v31 + v30;
        v25 = COERCE_FLOAT(sub_10115FB0());
        *(float *)(v11 + 28) = (double)SLODWORD(v25) * 0.000030518509 * v31 + v30;
        v25 = COERCE_FLOAT(sub_10115FB0());
        v13 = (float *)(v3 + 16);
        *(float *)(v11 + 32) = (double)SLODWORD(v25) * 0.000030518509 * v31 + v30;
        *(float *)(v11 + 24) = *v13 + *(float *)(v11 + 24);
        *(float *)(v11 + 28) = v13[1] + *(float *)(v11 + 28);
        *(float *)(v11 + 32) = v13[2] + *(float *)(v11 + 32);
        off_103EDFEC();
        v25 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                400.0,
                800.0);
        v14 = sub_100A0B60((float *)(v11 + 24), v13, v28, 0);
        v30 = v14;
        v15 = v14 * v14 * 0.5 * 16.0 * v25;
        *(float *)(v11 + 24) = v15 * *(float *)(v11 + 24);
        *(float *)(v11 + 28) = *(float *)(v11 + 28) * v15;
        *(float *)(v11 + 32) = v15 * *(float *)(v11 + 32);
        v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 128, 255);
        *(_BYTE *)(v11 + 50) = v16;
        *(_BYTE *)(v11 + 49) = v16;
        *(_BYTE *)(v11 + 48) = v16;
        v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 85);
        LODWORD(v25) = (int)((double)v17 * v30);
        v18 = LOBYTE(v25);
        *(_BYTE *)(v11 + 53) = LOBYTE(v25);
        if ( v18 <= 0x55u )
        {
          if ( v18 < 0x20u )
            v18 = 32;
        }
        else
        {
          v18 = 85;
        }
        *(_BYTE *)(v11 + 53) = v18;
        LODWORD(v25) = v18;
        *(_WORD *)(v11 + 51) = 255;
        a3 = 360;
        a2 = 0;
        LODWORD(v25) = (int)((double)SLODWORD(v25) * 1.5);
        *(_BYTE *)(v11 + 54) = LOBYTE(v25);
        v25 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198));
        *(float *)(v11 + 36) = (float)SLODWORD(v25);
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -16.0,
                16.0);
        v3 = v27;
        *(float *)(v11 + 56) = v19;
        v7 = v29;
      }
      --v26;
    }
    while ( v26 );
    if ( v7 )
      sub_100F2FF0(v7);
  }
}
