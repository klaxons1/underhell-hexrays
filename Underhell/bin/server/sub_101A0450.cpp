// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_101A0450(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // eax
  int (__thiscall *v6)(int, int, int); // edx
  double v7; // st7
  double v8; // st6
  double v9; // st6
  int v10; // edi
  int v11; // ecx
  double v12; // st7
  double v13; // st7
  int v14; // eax
  int (__thiscall *v15)(int); // edx
  int v16; // eax
  char v17; // cl
  double v18; // st7
  double v19; // st7
  float v21[20]; // [esp+44h] [ebp-13Ch] BYREF
  _BYTE v22[12]; // [esp+94h] [ebp-ECh] BYREF
  float v23; // [esp+A0h] [ebp-E0h] BYREF
  float v24; // [esp+A4h] [ebp-DCh]
  float v25; // [esp+A8h] [ebp-D8h]
  float v26; // [esp+C0h] [ebp-C0h]
  char v27; // [esp+CAh] [ebp-B6h]
  char v28; // [esp+CBh] [ebp-B5h]
  float v29; // [esp+CCh] [ebp-B4h]
  float v30[3]; // [esp+F0h] [ebp-90h] BYREF
  float v31[3]; // [esp+FCh] [ebp-84h] BYREF
  float v32[3]; // [esp+108h] [ebp-78h] BYREF
  float v33[3]; // [esp+114h] [ebp-6Ch] BYREF
  _DWORD v34[4]; // [esp+120h] [ebp-60h] BYREF
  float v35; // [esp+130h] [ebp-50h] BYREF
  float v36; // [esp+134h] [ebp-4Ch]
  float v37; // [esp+138h] [ebp-48h]
  float v38; // [esp+13Ch] [ebp-44h]
  float v39; // [esp+140h] [ebp-40h] BYREF
  float v40; // [esp+144h] [ebp-3Ch] BYREF
  float v41; // [esp+148h] [ebp-38h]
  float v42; // [esp+14Ch] [ebp-34h]
  float v43; // [esp+150h] [ebp-30h] BYREF
  float v44; // [esp+154h] [ebp-2Ch]
  float v45; // [esp+158h] [ebp-28h]
  float v46; // [esp+15Ch] [ebp-24h] BYREF
  float v47; // [esp+160h] [ebp-20h]
  float v48; // [esp+164h] [ebp-1Ch]
  float v49; // [esp+168h] [ebp-18h]
  float v50; // [esp+16Ch] [ebp-14h]
  float v51; // [esp+170h] [ebp-10h]
  _DWORD v52[3]; // [esp+174h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+180h] [ebp+0h]

  v52[0] = a2;
  v52[1] = retaddr;
  sub_10265570(0, 8);
  v40 = -16.0;
  v41 = -16.0;
  v34[0] = &CTraceFilterWalkableEntities::`vftable';
  v34[3] = 7;
  v5 = *(_DWORD *)dword_106B3CDC;
  v42 = 0.0;
  v6 = *(int (__thiscall **)(int, int, int))(v5 + 120);
  v43 = 16.0;
  v44 = 16.0;
  v45 = 0.0;
  v46 = *(float *)a1;
  v47 = *(float *)(a1 + 4);
  v48 = *(float *)(v6(dword_106B3CDC, a3, a4) + 56) + *(float *)(a1 + 8) - 0.1;
  sub_1001F200(v21, &v46, (float *)LODWORD(v48), &v40, &v43);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    81931,
    v34,
    v22);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v22, (int)&v23, 255, 255, 0, 1, -1.0);
  v49 = v23;
  v50 = v24;
  v51 = v25;
  if ( v28 )
  {
    if ( !v27 )
    {
      v48 = v48 - (v25 - 0.1);
      sub_10023240(COERCE_FLOAT(v52), a1, &v46, (float *)a1, &v40, &v43, SLODWORD(v48), (int)v34, (int)v22);
      v49 = v23;
      v50 = v24;
      v51 = v25;
    }
    if ( v28 )
    {
      v38 = *(float *)(a1 + 8);
      v36 = -16.0;
      do
      {
        v37 = -16.0;
        do
        {
          if ( sub_1019DEA0((int)v52, (float *)a1, &v39, 0) )
          {
            v7 = v39 + 0.1;
            if ( v7 >= v38 )
              v38 = v7;
          }
          v8 = v37 + 16.0;
          v37 = v8;
        }
        while ( v8 <= 16.1 );
        v9 = v36 + 16.0;
        v36 = v9;
      }
      while ( v9 <= 16.1 );
      v49 = *(float *)a1;
      v50 = *(float *)(a1 + 4);
      v51 = v38;
    }
  }
  v10 = 0;
  v32[0] = v49;
  v32[1] = v50;
  v32[2] = v51 + 0.1;
  do
  {
    sub_101A03B0(v10, &v35);
    v40 = 0.0;
    v41 = 0.0;
    v42 = 0.0;
    v48 = v51;
    v46 = v49;
    v47 = v50;
    v11 = 0;
    v43 = v35 * 16.0;
    v44 = 16.0 * v36;
    v45 = 0.0;
    do
    {
      if ( *(float *)((char *)&v43 + v11) < (double)*(float *)((char *)&v40 + v11) )
      {
        v12 = *(float *)((char *)&v40 + v11);
        *(float *)((char *)&v40 + v11) = *(float *)((char *)&v43 + v11);
        *(float *)((char *)&v43 + v11) = v12;
      }
      v11 += 4;
    }
    while ( v11 < 12 );
    v13 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 32) - 0.2;
    v33[0] = v49;
    v33[1] = COERCE_FLOAT(&v43);
    v33[2] = v13 + v51;
    sub_1001F200(v21, v32, v33, &v40, &v43);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v21,
      81931,
      v34,
      v22);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v22, (int)&v23, 255, 255, 0, 1, -1.0);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v15 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
    v48 = *(float *)(v14 + 32) * v29 + v51;
    v16 = v15(dword_106B3CDC);
    v17 = v28;
    v18 = v48;
    v39 = *(float *)(v16 + 56) + v48;
    if ( !v28 )
      goto LABEL_27;
    while ( v18 <= v39 )
    {
      v19 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 32) - 0.2;
      v31[0] = v46;
      v31[1] = v47;
      v31[2] = v19 + v48;
      v30[0] = v46;
      v30[1] = v47;
      v30[2] = v48 + 0.1;
      sub_1001F200(v21, v30, v31, &v40, &v43);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v21,
        81931,
        v34,
        v22);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v22, (int)&v23, 255, 255, 0, 1, -1.0);
      v17 = v28;
      v18 = v48 + 1.0;
      v48 = v18;
      if ( !v28 )
        goto LABEL_27;
    }
    if ( !v17 )
    {
LABEL_27:
      if ( 1.0 == v26 )
        goto LABEL_29;
    }
    *(_BYTE *)(a1 + 44) = 1;
    *(_BYTE *)(v10 + a1 + 68) = 1;
LABEL_29:
    ++v10;
  }
  while ( v10 < 4 );
}
