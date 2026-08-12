void __thiscall sub_1016E6A0(void *this, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  float *v6; // eax
  float *v7; // edi
  double v8; // st7
  _DWORD *v9; // edi
  int v10; // esi
  int v11; // ebx
  float *v12; // eax
  float *v13; // edi
  double (__stdcall *v14)(_DWORD, _DWORD); // edx
  double v15; // st7
  double v16; // st7
  double v17; // st7
  _BYTE v18[12]; // [esp+58h] [ebp-2Ch] BYREF
  float v19[3]; // [esp+64h] [ebp-20h] BYREF
  float v20; // [esp+70h] [ebp-14h]
  float v21; // [esp+74h] [ebp-10h]
  float v22; // [esp+78h] [ebp-Ch]
  float v23; // [esp+7Ch] [ebp-8h]
  int v24; // [esp+80h] [ebp-4h]

  v3 = (int)a3;
  sub_10176CB0(0.75, a2, (int)a3, 0, 0);
  v4 = sub_1007A730(off_103DCD78, a2);
  if ( !v4 )
    return;
  (*(void (__thiscall **)(int, int, float *, _BYTE *))(*(_DWORD *)v4 + 148))(v4, v3, v19, v18);
  sub_101EDFB0(v18);
  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 2) )
    goto LABEL_8;
  sub_100F3330((float **)&a3, (int)"muzzle_embers");
  sub_100F3060((int)a3, v19);
  v5 = 0;
  v23 = COERCE_FLOAT((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 4));
  if ( SLODWORD(v23) <= 0 )
  {
LABEL_6:
    if ( a3 )
      sub_100F2FF0((int)a3);
LABEL_8:
    if ( sub_100DDA40(384) )
      v9 = (_DWORD *)sub_1017A770("MuzzleFlash_Shotgun_NPC");
    else
      v9 = 0;
    v10 = 0;
    a3 = 0;
    if ( v9 )
    {
      sub_100F2950(v9);
      a3 = v9;
      v10 = (int)v9;
    }
    sub_100F3060(v10, v19);
    *(_DWORD *)(v10 + 376) |= 4u;
    *(float *)(v10 + 364) = 0.0;
    v11 = 0;
    v24 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 4, 8);
    if ( v24 > 0 )
    {
      do
      {
        v12 = sub_100F2B60(v10, v10, 56, dword_1043DF30, v19);
        v13 = v12;
        if ( !v12 )
          break;
        v12[11] = 0.0;
        v12[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                    dword_10413198,
                    0.1,
                    0.2);
        v23 = COERCE_FLOAT(sub_10115FB0());
        v13[6] = (double)SLODWORD(v23) * 0.000030518509 * 0.1 - 0.050000001;
        v23 = COERCE_FLOAT(sub_10115FB0());
        v13[7] = (double)SLODWORD(v23) * 0.000030518509 * 0.1 - 0.050000001;
        v23 = COERCE_FLOAT(sub_10115FB0());
        v13[8] = (double)SLODWORD(v23) * 0.000030518509 * 0.1 - 0.050000001;
        v13[6] = v20 + v13[6];
        v13[7] = v13[7] + v21;
        v13[8] = v13[8] + v22;
        off_103EDFEC();
        off_103EDFEC();
        v14 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        v23 = (1.0 - fabs(v13[7] * v21 + v20 * v13[6] + v13[8] * v22)) * 20.0;
        v15 = v14(256.0, 1024.0);
        v16 = v15 * (1.0 - v23);
        v13[6] = v16 * v13[6];
        v13[7] = v13[7] * v16;
        v13[8] = v16 * v13[8];
        v13[9] = NAN;
        v13[12] = 0.050000001;
        v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.25,
                0.5);
        v10 = (int)a3;
        v13[13] = v17;
        ++v11;
      }
      while ( v11 < v24 );
    }
    sub_100F2FF0(v10);
    return;
  }
  while ( 1 )
  {
    v6 = sub_100F2B60((int)a3, v3, 60, dword_1043DF30, v19);
    v7 = v6;
    if ( !v6 )
      break;
    v6[11] = 0.0;
    v6[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
               dword_10413198,
               0.2,
               0.40000001);
    v24 = sub_10115FB0();
    v7[6] = (double)v24 * 0.000030518509 * 0.1 - 0.050000001;
    v24 = sub_10115FB0();
    v7[7] = (double)v24 * 0.000030518509 * 0.1 - 0.050000001;
    v24 = sub_10115FB0();
    v7[8] = (double)v24 * 0.000030518509 * 0.1 - 0.050000001;
    v7[6] = v20 + v7[6];
    v7[7] = v7[7] + v21;
    v7[8] = v7[8] + v22;
    off_103EDFEC();
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           64.0,
           256.0);
    ++v5;
    v7[6] = v8 * v7[6];
    v7[7] = v7[7] * v8;
    v7[8] = v8 * v7[8];
    v7[12] = -2.5588156e38;
    *((_WORD *)v7 + 26) = 256;
    v7[9] = 0.0;
    *((_BYTE *)v7 + 54) = 0;
    v7[14] = 0.0;
    if ( v5 >= SLODWORD(v23) )
      goto LABEL_6;
  }
  if ( a3 )
    sub_100F2FF0((int)a3);
}
