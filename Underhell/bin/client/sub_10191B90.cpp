void __thiscall sub_10191B90(void *this, float a2)
{
  double v2; // st7
  double v4; // st6
  double (__thiscall *v5)(int, _DWORD, _DWORD); // eax
  double v6; // st7
  float v7; // edx
  float *v8; // eax
  int v9; // esi
  int v10; // eax
  float *v11; // esi
  int v12; // eax
  double v13; // st6
  double v14; // st7
  char v15; // al
  float v16; // [esp+28h] [ebp-3Ch]
  float v17; // [esp+2Ch] [ebp-38h]
  float v18; // [esp+2Ch] [ebp-38h]
  float v19; // [esp+3Ch] [ebp-28h]
  float v20; // [esp+40h] [ebp-24h]
  float v21; // [esp+48h] [ebp-1Ch] BYREF
  float v22; // [esp+4Ch] [ebp-18h]
  float v23; // [esp+50h] [ebp-14h]
  float v24; // [esp+54h] [ebp-10h]
  int v25; // [esp+58h] [ebp-Ch]
  float v26; // [esp+5Ch] [ebp-8h]
  float v27; // [esp+60h] [ebp-4h]

  v2 = a2 * 48.0;
  v26 = v2;
  v4 = *((float *)off_103DC81C + 4);
  while ( v4 >= *((float *)this + 300) )
  {
    v24 = v4 - *((float *)this + 300);
    *((float *)this + 300) = *((float *)this + 299);
    v5 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
    v27 = -v2;
    v17 = v2;
    v21 = v5(dword_10413198, LODWORD(v27), LODWORD(v17));
    v22 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            LODWORD(v27),
            LODWORD(v26));
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -8.0,
           8.0);
    v7 = *(float *)this;
    v23 = v6;
    v8 = (float *)(*(int (__thiscall **)(void *))(LODWORD(v7) + 36))(this);
    v9 = *((_DWORD *)this + 298);
    v21 = *v8 + v21;
    v22 = v8[1] + v22;
    v23 = v8[2] + v23;
    v10 = sub_100F29B0(v9, (int)this, v9, "effects/spark");
    v11 = sub_100F2B60(v9, v9, 60, v10, &v21);
    if ( !v11 )
      return;
    v27 = COERCE_FLOAT(sub_10115FB0());
    v19 = (double)SLODWORD(v27) * 0.000030518509 + (double)SLODWORD(v27) * 0.000030518509 - 1.0;
    v27 = COERCE_FLOAT(sub_10115FB0());
    v20 = (double)SLODWORD(v27) * 0.000030518509 + (double)SLODWORD(v27) * 0.000030518509 - 1.0;
    *(float *)&v12 = COERCE_FLOAT(sub_10115FB0());
    v27 = *(float *)&v12;
    v11[6] = v19;
    v11[7] = v20;
    v11[8] = (double)v12 * 0.000030518509 * 2.0 - 1.0 + 1.0;
    v13 = a2 * 750.0;
    v11[6] = v11[6] * v13;
    v11[7] = v11[7] * v13;
    v11[8] = v13 * v11[8];
    v25 = (int)(((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  2.0,
                  4.0)
              * a2);
    *((_BYTE *)v11 + 53) = v25;
    v11[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.25,
                0.5);
    v11[11] = 0.0;
    v11[9] = (float)sub_100EB330(0, 360);
    *(float *)&v25 = 255.0 * a2;
    v18 = 8.0 * a2;
    v14 = a2 * -8.0;
    v16 = v14;
    sub_100EB300(v16, v18);
    v11[14] = v14;
    v25 = (int)*(float *)&v25;
    v15 = v25;
    *((_BYTE *)v11 + 48) = v25;
    *((_BYTE *)v11 + 49) = v15;
    *((_BYTE *)v11 + 50) = v15;
    *((_BYTE *)v11 + 51) = v15;
    *((_BYTE *)v11 + 52) = 0;
    *((_BYTE *)v11 + 54) = 0;
    v4 = v24;
    v2 = v26;
  }
  *((float *)this + 300) = *((float *)this + 300) - v4;
}
