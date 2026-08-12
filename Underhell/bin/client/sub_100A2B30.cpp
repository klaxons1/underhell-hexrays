void __thiscall sub_100A2B30(int this)
{
  double v2; // st7
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  double v5; // st6
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // edi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st7
  int v15; // eax
  double v16; // st6
  char v17; // dl
  char v18; // al
  double v19; // st7
  double v20; // st7
  float v21; // [esp+28h] [ebp-4Ch]
  _BYTE v22[12]; // [esp+3Ch] [ebp-38h] BYREF
  float v23; // [esp+48h] [ebp-2Ch] BYREF
  float v24; // [esp+4Ch] [ebp-28h]
  float v25; // [esp+50h] [ebp-24h]
  _DWORD v26[2]; // [esp+54h] [ebp-20h]
  int v27; // [esp+5Ch] [ebp-18h]
  int v28; // [esp+60h] [ebp-14h]
  float v29; // [esp+64h] [ebp-10h]
  _DWORD *v30; // [esp+68h] [ebp-Ch]
  float v31; // [esp+6Ch] [ebp-8h]
  int v32; // [esp+70h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 32) & 8) == 0 && *(float *)(this + 64) > 128.0 )
  {
    v2 = *(float *)(this + 28);
    v31 = *(float *)(this + 28);
    if ( v2 >= 2.0 )
    {
      if ( v2 > 2.0 )
      {
        v2 = 2.0;
        v31 = 2.0;
      }
    }
    else
    {
      v2 = 2.0;
      v31 = 2.0;
    }
    v29 = 1.0 - v2 * 0.15000001;
    v3 = (_DWORD *)sub_100DDA40(260);
    if ( v3 )
    {
      sub_100F2BA0("waterexp_bubbles");
      *v3 = &CWaterExplosionParticle::`vftable';
    }
    else
    {
      v3 = 0;
    }
    v4 = 0;
    v30 = 0;
    if ( v3 )
    {
      sub_100F2950(v3);
      v30 = v3;
      v4 = v3;
    }
    sub_100F3060(this + 4);
    sub_100F29C0(64.0, 128.0);
    v5 = 64.0 * *(float *)(this + 24) + *(float *)(this + 12);
    v6 = *(float *)(this + 20) * 64.0 + *(float *)(this + 8);
    v23 = *(float *)(this + 16) * 64.0 + *(float *)(this + 4);
    v24 = v6;
    v25 = v5;
    sub_100A65B0(SLOBYTE(v23), LODWORD(v24), LODWORD(v25), v22, 0);
    v26[0] = sub_100F29B0("effects/splash1");
    v26[1] = sub_100F29B0("effects/splash2");
    v28 = 16;
    do
    {
      *(float *)&v32 = COERCE_FLOAT(sub_10115FB0());
      v23 = (double)v32 * 0.000030518509 * 64.0 - 32.0;
      *(float *)&v32 = COERCE_FLOAT(sub_10115FB0());
      v24 = (double)v32 * 0.000030518509 * 64.0 - 32.0;
      *(float *)&v32 = COERCE_FLOAT(sub_10115FB0());
      v23 = *(float *)(this + 4) + v23;
      v24 = *(float *)(this + 8) + v24;
      v25 = (double)v32 * 0.000030518509 * 64.0 - 32.0 + *(float *)(this + 12);
      v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1);
      v8 = sub_100F2B60(60, v26[v7], &v23);
      v9 = v8;
      if ( v8 )
      {
        *(float *)(v8 + 44) = 0.0;
        *(float *)(v8 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                dword_10413198,
                                2.0,
                                3.0);
        v21 = -v29;
        sub_10041FA0((float *)(v9 + 24), v21, v29);
        v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                1.0,
                6.0);
        v11 = *(float *)(this + 16) * v10;
        v12 = *(float *)(this + 20) * v10;
        v13 = v10 * *(float *)(this + 24);
        *(float *)(v9 + 24) = v11 + *(float *)(v9 + 24);
        *(float *)(v9 + 28) = v12 + *(float *)(v9 + 28);
        *(float *)(v9 + 32) = v13 + *(float *)(v9 + 32);
        off_103EDFEC();
        *(float *)&v32 = v31 * 1500.0;
        sub_100A0B60((float *)(v9 + 24), (float *)(this + 16), v29, (float *)&v32);
        v14 = *(float *)&v32;
        v15 = HIWORD(v32);
        *(float *)(v9 + 24) = *(float *)(v9 + 24) * *(float *)&v32;
        v16 = *(float *)(v9 + 28);
        v27 = v15 | 0xC00;
        *(float *)(v9 + 28) = v16 * v14;
        *(float *)(v9 + 32) = v14 * *(float *)(v9 + 32);
        v27 = (int)(*(float *)(this + 68) * 255.0);
        v17 = v27;
        v27 = HIWORD(v32) | 0xC00;
        *(_BYTE *)(v9 + 48) = v17;
        v27 = (int)(*(float *)(this + 72) * 255.0);
        *(_BYTE *)(v9 + 49) = v27;
        v27 = (int)(255.0 * *(float *)(this + 76));
        *(_BYTE *)(v9 + 50) = v27;
        v18 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 32, 64);
        *(_BYTE *)(v9 + 53) = v18;
        *(_BYTE *)(v9 + 54) = 2 * v18;
        v19 = *(float *)(this + 80);
        *(_BYTE *)(v9 + 52) = 0;
        v27 = (int)v19;
        *(_BYTE *)(v9 + 51) = (int)v19;
        v27 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
        *(float *)(v9 + 36) = (float)v27;
        v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                -8.0,
                8.0);
        v4 = v30;
        *(float *)(v9 + 56) = v20;
      }
      --v28;
    }
    while ( v28 );
    if ( v4 )
      sub_100F2FF0(v4);
  }
}
