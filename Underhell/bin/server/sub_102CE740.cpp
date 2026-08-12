// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_102CE740(int a1@<ecx>, float a2@<ebp>)
{
  int v3; // edx
  int *v4; // ecx
  int v5; // edi
  float *v6; // eax
  float *v7; // eax
  double v8; // st7
  int v9; // eax
  double v10; // st6
  int v11; // edi
  double v12; // st7
  double (__thiscall *v13)(int, _DWORD, _DWORD); // eax
  double v14; // st7
  void (*v15)(void); // eax
  double v16; // st7
  int v17; // eax
  unsigned int v18; // edi
  int *v19; // ecx
  _BYTE v20[12]; // [esp+54h] [ebp-15Ch] BYREF
  float v21[19]; // [esp+60h] [ebp-150h] BYREF
  _BYTE v22[12]; // [esp+ACh] [ebp-104h] BYREF
  float v23[19]; // [esp+B8h] [ebp-F8h] BYREF
  float v24[22]; // [esp+104h] [ebp-ACh] BYREF
  _DWORD v25[4]; // [esp+15Ch] [ebp-54h] BYREF
  float v26[3]; // [esp+16Ch] [ebp-44h] BYREF
  int v27; // [esp+178h] [ebp-38h]
  float v28; // [esp+17Ch] [ebp-34h]
  float v29; // [esp+180h] [ebp-30h]
  float v30; // [esp+184h] [ebp-2Ch]
  float v31; // [esp+188h] [ebp-28h]
  float v32; // [esp+18Ch] [ebp-24h]
  float v33; // [esp+190h] [ebp-20h]
  float v34; // [esp+194h] [ebp-1Ch] BYREF
  float v35; // [esp+198h] [ebp-18h]
  float v36; // [esp+19Ch] [ebp-14h]
  int v37; // [esp+1A0h] [ebp-10h]
  float v38; // [esp+1A4h] [ebp-Ch]
  float v39; // [esp+1A8h] [ebp-8h]
  float retaddr; // [esp+1B0h] [ebp+0h]

  v38 = a2;
  v39 = retaddr;
  *(float *)(a1 + 804) = 1.5;
  if ( *(_DWORD *)(a1 + 808) != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 2] == *(_DWORD *)(a1 + 808) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 1] )
  {
    v18 = *(_DWORD *)(a1 + 248) & 0xFFFFFF7F;
    if ( *(_DWORD *)(a1 + 248) != v18 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *(_DWORD *)(a1 + 248) = v18;
      }
      else
      {
        v19 = *(int **)(a1 + 24);
        if ( v19 )
          sub_100194B0(v19, 248);
        *(_DWORD *)(a1 + 248) = v18;
      }
    }
  }
  else if ( *(float *)(a1 + 1428) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v3 = *(_DWORD *)(a1 + 248) | 0x80;
    v27 = v3;
    if ( *(_DWORD *)(a1 + 248) != v3 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(a1 + 24);
        if ( v4 )
        {
          sub_100194B0(v4, 248);
          v3 = v27;
        }
      }
      *(_DWORD *)(a1 + 248) = v3;
    }
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v5 = sub_10261B20();
    else
      v5 = 0;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
    v28 = *v6 - *(float *)(a1 + 580);
    v29 = v6[1] - *(float *)(a1 + 584);
    v30 = v6[2] - *(float *)(a1 + 588);
    off_10689714();
    HIBYTE(v37) = 0;
    if ( v28 * *(float *)(a1 + 1436) + *(float *)(a1 + 1440) * v29 + *(float *)(a1 + 1444) * v30 >= 0.89999998
      && *(_BYTE *)(a1 + 1448) )
    {
      v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 504))(v5, v26);
      v31 = *v7;
      HIBYTE(v37) = 1;
      v32 = v7[1];
      v8 = v7[2];
    }
    else
    {
      v9 = *(_DWORD *)(a1 + 252) >> 11;
      v34 = *(float *)(a1 + 1436) * 1900.0;
      v35 = *(float *)(a1 + 1440) * 1900.0;
      v36 = 1900.0 * *(float *)(a1 + 1444);
      if ( (v9 & 1) != 0 )
        sub_100DAE60(a1);
      v10 = *(float *)(a1 + 584) + v35;
      v8 = *(float *)(a1 + 588) + v36;
      v31 = *(float *)(a1 + 580) + v34;
      v32 = v10;
    }
    v33 = v8;
    v11 = 0;
    while ( 1 )
    {
      v12 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -48.0,
              48.0,
              LODWORD(v38),
              LODWORD(v39));
      v13 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
      v34 = v12 + v31;
      v14 = v13(dword_106B31E4, -48.0, 48.0);
      v15 = *(void (**)(void))(*(_DWORD *)dword_106B31E4 + 4);
      v35 = v14 + v32;
      v39 = 48.0;
      if ( HIBYTE(v37) )
        v16 = 16.0;
      else
        v16 = -48.0;
      v38 = v16;
      v15();
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 744))(a1, v26);
      v37 = 0;
      v17 = sub_10019AD0((_DWORD *)a1);
      sub_10265720(v25, a1, v17, v37);
      sub_1001F180(v24, v26, &v34);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v24,
        33570881,
        v25,
        v20);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v20, (int)v21, 255, 0, 0, 1, -1.0);
      sub_1001F180(v24, v26, &v34);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v24,
        1174421507,
        v25,
        v22);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v22, (int)v23, 255, 0, 0, 1, -1.0);
      if ( v23[8] <= (double)v21[8] )
        break;
      if ( ++v11 >= 5 )
        goto LABEL_34;
    }
    *(float *)(a1 + 1080) = v34;
    *(float *)(a1 + 1084) = v35;
    *(float *)(a1 + 1088) = v36;
LABEL_34:
    if ( HIBYTE(v37) )
      *(float *)(a1 + 1428) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.25,
                                0.75)
                            + *(float *)(dword_106B31C8 + 12);
    else
      *(float *)(a1 + 1428) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                1.0,
                                3.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
