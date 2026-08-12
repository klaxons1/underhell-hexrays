void __usercall sub_10157D50(int a1@<esi>, float *a2, float *a3)
{
  _DWORD *v4; // eax
  int v5; // edi
  int v6; // eax
  float *v7; // esi
  float *v8; // eax
  float *v9; // esi
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float v14; // [esp+68h] [ebp-18h] BYREF
  float v15; // [esp+6Ch] [ebp-14h]
  float v16; // [esp+70h] [ebp-10h]
  int v17; // [esp+74h] [ebp-Ch]
  int v18; // [esp+78h] [ebp-8h]
  int v19; // [esp+7Ch] [ebp-4h]
  float v20; // [esp+8Ch] [ebp+Ch]
  float v21; // [esp+8Ch] [ebp+Ch]
  float v22; // [esp+8Ch] [ebp+Ch]
  int v23; // [esp+8Ch] [ebp+Ch]

  v20 = *a3;
  v14 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(-1.0, 1.0) + v20;
  v21 = a3[1];
  v15 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(-1.0, 1.0) + v21;
  v22 = a3[2];
  v16 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(-1.0, 1.0) + v22;
  off_103EDFEC();
  if ( sub_100DDA40(384) )
  {
    v4 = (_DWORD *)sub_1017A770("FX_ElectricSpark");
    v5 = (int)v4;
    if ( v4 )
    {
      sub_100F2950(v4);
      v6 = sub_100F29B0(v5, v5, a1, "effects/spark");
      v7 = a2;
      v19 = v6;
      sub_100F3060(v5, a2);
      *(float *)(v5 + 364) = 800.0;
      *(_DWORD *)(v5 + 376) |= 3u;
      (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v5 + 260) + 16))(
        v5 + 260,
        a2,
        &v14,
        0.80000001,
        128.0,
        512.0,
        800.0,
        0.30000001);
      v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 16, 32);
      v23 = 0;
      if ( v17 <= 0 )
      {
LABEL_6:
        sub_1017ADB0(v7, 1, 1, &v14);
      }
      else
      {
        while ( 1 )
        {
          v8 = sub_100F2B60(v5, (int)v7, 56, v19, v7);
          v9 = v8;
          if ( !v8 )
            break;
          v8[11] = 0.0;
          v18 = sub_10115FB0();
          v14 = (double)v18 * 0.000030518509 * 1.2 - 0.60000002;
          v18 = sub_10115FB0();
          v15 = (double)v18 * 0.000030518509 * 1.2 - 0.60000002;
          v18 = sub_10115FB0();
          v14 = *a3 + v14;
          v15 = v15 + a3[1];
          v16 = (double)v18 * 0.000030518509 * 1.2 - 0.60000002 + a3[2];
          off_103EDFEC();
          v9[13] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     1.0,
                     4.0);
          v9[12] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     0.0099999998,
                     0.1);
          v9[10] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                     dword_10413198,
                     0.25,
                     1.0);
          v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  128.0,
                  512.0);
          v11 = v14 * v10;
          v12 = v15 * v10;
          v13 = v10 * v16;
          v9[6] = v11;
          v9[7] = v12;
          v9[8] = v13;
          v9[9] = NAN;
          v7 = a2;
          if ( ++v23 >= v17 )
            goto LABEL_6;
        }
      }
      sub_100F2FF0(v5);
    }
  }
}
