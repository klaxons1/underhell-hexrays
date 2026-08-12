float *__usercall sub_1015D140@<eax>(float *a1@<ecx>, int a2@<esi>)
{
  int v3; // eax
  int v4; // ebx
  double v5; // st7
  int v6; // eax
  float v7; // edx
  double v8; // st7
  int (__thiscall *v9)(float *); // eax
  float *v10; // eax
  int v11; // edx
  int v12; // ecx
  float *result; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  int (__thiscall *v17)(float *); // edx
  float *v18; // eax
  int v19; // ecx
  float *v20; // esi
  double v21; // st5
  double v22; // st7
  float v23; // [esp+14h] [ebp-30h] BYREF
  float v24; // [esp+18h] [ebp-2Ch]
  float v25; // [esp+1Ch] [ebp-28h]
  float v26; // [esp+20h] [ebp-24h] BYREF
  float v27; // [esp+24h] [ebp-20h]
  float v28; // [esp+28h] [ebp-1Ch]
  float v29; // [esp+2Ch] [ebp-18h]
  float v30; // [esp+30h] [ebp-14h]
  float v31; // [esp+34h] [ebp-10h]
  int v32; // [esp+38h] [ebp-Ch]
  float v33; // [esp+3Ch] [ebp-8h]
  float v34; // [esp+40h] [ebp-4h]

  v3 = (*(int (__thiscall **)(float *, float *))(*(_DWORD *)a1 + 40))(a1, &v26);
  sub_101EDFB0(v3);
  v4 = 0;
  while ( 1 )
  {
    v5 = -a1[361];
    v33 = v5;
    v34 = a1[361] - v5;
    v32 = sub_10115FB0();
    v29 = (double)v32 * 0.000030518509 * v34 + v33;
    v32 = sub_10115FB0();
    v30 = (double)v32 * 0.000030518509 * v34 + v33;
    v6 = sub_10115FB0();
    v7 = *a1;
    v32 = v6;
    v8 = (double)v6;
    v9 = *(int (__thiscall **)(float *))(LODWORD(v7) + 36);
    v31 = v8 * 0.000030518509 * v34 + v33;
    v10 = (float *)v9(a1);
    v11 = *((_DWORD *)a1 + 364);
    v12 = *((_DWORD *)a1 + 367);
    v23 = *v10 + v29;
    v24 = v10[1] + v30;
    v25 = v10[2] + v31;
    result = sub_100F2B60(v12, a2, 60, v11, &v23);
    a2 = (int)result;
    if ( !result )
      break;
    result[11] = 0.0;
    *((_WORD *)result + 24) = -29471;
    result[10] = 2.0;
    *((_BYTE *)result + 50) = 64;
    result[9] = 0.0;
    result[14] = 0.0;
    *((_BYTE *)result + 51) = sub_100EB330(128, 255);
    *(_BYTE *)(a2 + 52) = 0;
    *(_BYTE *)(a2 + 53) = sub_100EB330(1, 2);
    *(_BYTE *)(a2 + 54) = 1;
    sub_100EB300(128.0, 256.0);
    ++v4;
    v14 = 128.0 * v28;
    v15 = v27 * 128.0;
    *(float *)(a2 + 24) = v26 * 128.0;
    *(float *)(a2 + 28) = v15;
    *(float *)(a2 + 32) = v14;
    if ( v4 >= 4 )
    {
      v16 = a1[361] * 0.5;
      v34 = -v16;
      v33 = v16 - -v16;
      v32 = sub_10115FB0();
      v29 = (double)v32 * 0.000030518509 * v33 + v34;
      v32 = sub_10115FB0();
      v30 = (double)v32 * 0.000030518509 * v33 + v34;
      v32 = sub_10115FB0();
      v17 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 36);
      v31 = (double)v32 * 0.000030518509 * v33 + v34;
      v18 = (float *)v17(a1);
      v23 = *v18 + v29;
      v24 = v18[1] + v30;
      v19 = *((_DWORD *)a1 + 367);
      v25 = v18[2] + v31;
      result = sub_100F2B60(v19, a2, 60, dword_1043DF24, &v23);
      v20 = result;
      if ( result )
      {
        result[11] = 0.0;
        result[10] = 1.0;
        sub_100EB300(0.0, 360.0);
        v20[9] = 0.0;
        sub_100EB300(-2.0, 2.0);
        v20[14] = -2.0;
        *((_WORD *)v20 + 24) = -29471;
        *((_BYTE *)v20 + 50) = 64;
        *((_BYTE *)v20 + 51) = sub_100EB330(32, 64);
        v32 = HIWORD(v34) | 0xC00;
        *((_BYTE *)v20 + 52) = 0;
        v32 = (int)a1[359];
        *((_BYTE *)v20 + 53) = v32;
        v32 = (int)a1[360];
        *((_BYTE *)v20 + 54) = v32;
        result = (float *)sub_100EB300(64.0, 128.0);
        v21 = v27 * 64.0;
        v22 = 64.0 * v28;
        v20[6] = v26 * 64.0;
        v20[7] = v21;
        v20[8] = v22;
      }
      return result;
    }
  }
  return result;
}
