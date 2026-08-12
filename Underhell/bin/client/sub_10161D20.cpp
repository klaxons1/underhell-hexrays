void __thiscall sub_10161D20(int this, float a2)
{
  int v3; // eax
  double v4; // st7
  int v5; // eax
  float *v6; // edi
  int (__thiscall *v7)(int); // eax
  long double v8; // st7
  long double v9; // st6
  long double v10; // st7
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // rt0
  double v18; // st5
  double v19; // st7
  long double v20; // st7
  long double v21; // st6
  long double v22; // rt2
  long double v23; // st6
  float v24; // [esp+10h] [ebp-6Ch]
  float v25[3]; // [esp+1Ch] [ebp-60h] BYREF
  float v26; // [esp+28h] [ebp-54h]
  float v27; // [esp+2Ch] [ebp-50h]
  float v28; // [esp+30h] [ebp-4Ch]
  float v29; // [esp+34h] [ebp-48h]
  float v30; // [esp+38h] [ebp-44h]
  float v31; // [esp+3Ch] [ebp-40h]
  float v32; // [esp+40h] [ebp-3Ch]
  float v33; // [esp+44h] [ebp-38h]
  float v34; // [esp+48h] [ebp-34h]
  float v35; // [esp+4Ch] [ebp-30h]
  float v36; // [esp+50h] [ebp-2Ch]
  float v37; // [esp+54h] [ebp-28h]
  float v38; // [esp+58h] [ebp-24h] BYREF
  float v39; // [esp+5Ch] [ebp-20h]
  float v40; // [esp+60h] [ebp-1Ch]
  float v41; // [esp+64h] [ebp-18h] BYREF
  float v42; // [esp+68h] [ebp-14h]
  float v43; // [esp+6Ch] [ebp-10h]
  int v44; // [esp+70h] [ebp-Ch]
  float v45; // [esp+74h] [ebp-8h]
  float v46; // [esp+78h] [ebp-4h]

  if ( *(_DWORD *)(this + 464) )
  {
    if ( *(_DWORD *)(this + 340) && (*(_BYTE *)(this + 152) & 0x50) != 0 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 40))(this - 1192);
      sub_101EE040(v3, &v41, &v38, v25);
      while ( 1 )
      {
        v4 = a2;
        if ( a2 < (double)*(float *)(this + 504) )
          break;
        a2 = v4 - *(float *)(this + 504);
        *(float *)(this + 504) = *(float *)(this + 500);
        v5 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 8))(
               dword_10413198,
               0,
               *(_DWORD *)(this + 508));
        v6 = (float *)sub_100F06D0(this + 4, this, 64, *(_DWORD *)(this + 4 * v5 + 468));
        if ( v6 )
        {
          v46 = COERCE_FLOAT(sub_10115FB0());
          v7 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 1192) + 36);
          v8 = (double)SLODWORD(v46) * 0.000030518509 * 6.2831855;
          v9 = sin(v8) * *(float *)(this + 344);
          v32 = v41 * v9;
          v33 = v42 * v9;
          v34 = v9 * v43;
          v10 = cos(v8) * *(float *)(this + 344);
          v35 = v38 * v10;
          v36 = v39 * v10;
          v37 = v10 * v40;
          v11 = (float *)v7(this - 1192);
          v12 = v11[1] + v36 + v33;
          v13 = v11[2] + v37 + v34;
          v6[3] = *v11 + v35 + v32;
          v6[4] = v12;
          v6[5] = v13;
          v14 = *(float *)(this + 320);
          v26 = v25[0] * v14;
          v27 = v25[1] * v14;
          v28 = v14 * v25[2];
          *(float *)&v44 = -*(float *)(this + 316);
          v45 = *(float *)(this + 316);
          v46 = COERCE_FLOAT(sub_10115FB0());
          v15 = *(float *)&v44 + (v45 - *(float *)&v44) * ((double)SLODWORD(v46) * 0.000030518509);
          v29 = v41 * v15;
          v30 = v42 * v15;
          v31 = v15 * v43;
          v46 = -*(float *)(this + 316);
          v45 = *(float *)(this + 316);
          *(float *)&v44 = COERCE_FLOAT(sub_10115FB0());
          v16 = v46 + (v45 - v46) * ((double)v44 * 0.000030518509);
          v17 = v39 * v16 + v30 + v27;
          v18 = v38 * v16 + v29 + v26;
          v19 = v16 * v40 + v31 + v28;
          v6[6] = v18;
          v6[7] = v17;
          v6[8] = v19;
          v6[9] = *(float *)(this + 416);
          v6[10] = *(float *)(this + 420);
          v6[11] = *(float *)(this + 424);
          v6[12] = 0.0;
          v6[13] = 0.0;
          v6[13] = RandomFloat(0.0, 360.0);
          v24 = -*(float *)(this + 516);
          v6[14] = ((double (__cdecl *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     LODWORD(v24),
                     *(float *)(this + 516));
          v6[15] = v6[5];
        }
      }
      *(float *)(this + 504) = *(float *)(this + 504) - v4;
    }
    v20 = sub_100EB350() * (*(float *)(this + 428) * 6.2831855 * 0.0027777778);
    *(_DWORD *)(this + 452) = 0.0 != v20;
    if ( 0.0 != v20 )
    {
      v21 = cos(v20);
      *(float *)(this + 436) = v21;
      v22 = v21;
      v23 = sin(v20);
      *(float *)(this + 440) = v23;
      *(float *)(this + 444) = -v23;
      *(float *)(this + 448) = v22;
    }
    sub_10161670(this - 1192);
  }
}
