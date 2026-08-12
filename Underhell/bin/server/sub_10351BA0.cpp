// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_10351BA0(void *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  float *v7; // esi
  float *v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st5
  double v13; // st7
  int v14; // edi
  int v17; // [esp+50h] [ebp-190h] BYREF
  _BYTE v18[12]; // [esp+5Ch] [ebp-184h] BYREF
  float v19[3]; // [esp+68h] [ebp-178h] BYREF
  _BYTE v20[64]; // [esp+74h] [ebp-16Ch] BYREF
  float v21[22]; // [esp+B4h] [ebp-12Ch] BYREF
  _DWORD v22[4]; // [esp+10Ch] [ebp-D4h] BYREF
  float v23[3]; // [esp+11Ch] [ebp-C4h] BYREF
  float v24[3]; // [esp+128h] [ebp-B8h] BYREF
  _BYTE v25[12]; // [esp+134h] [ebp-ACh] BYREF
  float v26; // [esp+140h] [ebp-A0h] BYREF
  float v27; // [esp+144h] [ebp-9Ch]
  float v28; // [esp+148h] [ebp-98h]
  float v29; // [esp+14Ch] [ebp-94h]
  float v30; // [esp+150h] [ebp-90h]
  float v31; // [esp+154h] [ebp-8Ch]
  float v32; // [esp+160h] [ebp-80h]
  char v33; // [esp+16Bh] [ebp-75h]
  float v34; // [esp+16Ch] [ebp-74h]
  int *v35; // [esp+180h] [ebp-60h]
  float v36[3]; // [esp+190h] [ebp-50h] BYREF
  int v37; // [esp+19Ch] [ebp-44h]
  float v38; // [esp+1A0h] [ebp-40h]
  float v39; // [esp+1A4h] [ebp-3Ch]
  float v40; // [esp+1A8h] [ebp-38h]
  float v41; // [esp+1ACh] [ebp-34h] BYREF
  float v42; // [esp+1B0h] [ebp-30h]
  float v43; // [esp+1B4h] [ebp-2Ch]
  int v44; // [esp+1B8h] [ebp-28h]
  float v45; // [esp+1BCh] [ebp-24h] BYREF
  float v46; // [esp+1C0h] [ebp-20h]
  float v47; // [esp+1C4h] [ebp-1Ch]
  float v48; // [esp+1C8h] [ebp-18h]
  float v49; // [esp+1CCh] [ebp-14h]
  float v50; // [esp+1D0h] [ebp-10h]
  int v51; // [esp+1D4h] [ebp-Ch]
  void *v52; // [esp+1D8h] [ebp-8h]
  void *retaddr; // [esp+1E0h] [ebp+0h]

  v51 = a2;
  v52 = retaddr;
  v4 = (int)a1;
  v37 = (int)a1;
  sub_100BF1B0(a1, "BellyGun", (int)v36, 0, 0, 0);
  v5 = *(_DWORD *)(v4 + 4092);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(v4 + 4092) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(v4 + 4092) & 0xFFF) + 1];
  sub_10265720(v22, v6, v4, 0);
  v7 = (float *)(v4 + 4240);
  sub_1001F180(v21, v36, (float *)(v4 + 4240));
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    33570827,
    v22,
    v25,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v25, (int)&v26, 255, 0, 0, 1, -1.0);
  v44 = 0;
  while ( v26 != *v7 || v27 != v7[1] || v28 != v7[2] )
  {
    if ( ++v44 > 5 )
      break;
    if ( 1.0 != v32 )
    {
      if ( v35 )
      {
        sub_10248110((int)v21, v4, v4, 1.0, 1024, 0);
        v8 = (float *)(*(int (__thiscall **)(int *, int *, float *, _DWORD))(*v35 + 520))(v35, &v17, &v26, 0);
        v38 = *v8 - v26;
        v39 = v8[1] - v27;
        v40 = v8[2] - v28;
        off_10689714();
        v21[4] = v29 * 64.0 + v26;
        v21[5] = v30 * 64.0 + v27;
        v21[6] = 64.0 * v31 + v28;
        v21[1] = v38 * 100.0;
        v21[2] = v39 * 100.0;
        v21[3] = 100.0 * v40;
        if ( *((_BYTE *)v35 + 225) )
          sub_100D9E70(v35, (int)v7, v21);
      }
      v48 = *v7 - v36[0];
      v49 = v7[1] - v36[1];
      v50 = v7[2] - v36[2];
      off_10689714();
      v45 = v26 + v48;
      v46 = v27 + *(float *)&v7;
      v47 = v28 + v50;
      sub_1001F180(v21, &v45, v7);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v21,
        33570827,
        v22,
        v25);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v25, (int)&v26, 255, 0, 0, 1, -1.0);
      if ( v33 )
      {
        v49 = (v47 - v28) * (v47 - v28) + (v46 - v27) * (v46 - v27) + (v45 - v26) * (v45 - v26);
        v9 = off_10689708(v49);
        v10 = v9 * v34;
        v41 = v48 * v10 + v45;
        v42 = *(float *)&v7 * v10 + v46;
        v43 = v10 * v50 + v47;
        sub_1001F180(v21, &v41, v7);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, float))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v21,
          33570827,
          v22,
          v25,
          COERCE_FLOAT(LODWORD(v50)));
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v25, (int)&v26, 255, 0, 0, 1, -1.0);
        v23[0] = v41 - v48 * 2.0;
        v23[1] = v42 - v49 * 2.0;
        v23[2] = v43 - 2.0 * COERCE_FLOAT(v23);
        sub_1001F180(v21, &v41, v23);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v21,
          33570827,
          v22,
          v18);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, -1.0);
        if ( *(float *)(v4 + 4084) - *(float *)(dword_106B31C8 + 12) <= 2.0 )
        {
          v11 = v48;
          LODWORD(v50) = 1;
          v12 = v49;
          v49 = COERCE_FLOAT(v20);
          v48 = COERCE_FLOAT(v24);
          v24[0] = v11 * 8.0 + v19[0];
          v24[1] = v12 * 8.0 + v19[1];
          v24[2] = 8.0 * COERCE_FLOAT(1) + v19[2];
          ((void (__thiscall *)(int (__stdcall ***)(char), float *, _BYTE *, int))(*off_1061B7A0)[7])(
            off_1061B7A0,
            v24,
            v20,
            1);
        }
        v13 = *(float *)(v4 + 4084) - *(float *)(dword_106B31C8 + 12);
        v14 = (int)*off_1061B7A0;
        v50 = COERCE_FLOAT(v20);
        (*(void (__thiscall **)(int (__stdcall ***)(char), float *, int, int))(v14 + 12))(
          off_1061B7A0,
          v19,
          (int)(3.0 - v13),
          (int)(3.5 - v13));
        v4 = v37;
      }
    }
  }
}
