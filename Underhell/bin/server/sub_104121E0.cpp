void __usercall sub_104121E0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>)
{
  int v5; // eax
  int v6; // edi
  float *v7; // eax
  float *v8; // eax
  float v9; // edx
  double v10; // st7
  int (__thiscall *v11)(int); // eax
  int v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  float *v19; // eax
  double v20; // st7
  double v21; // st6
  bool v22; // c0
  double v23; // st7
  _DWORD *v24; // eax
  int *v25; // eax
  int v26; // eax
  int *v27; // eax
  float v28; // [esp+44h] [ebp-138h]
  float v29; // [esp+44h] [ebp-138h]
  float v30; // [esp+48h] [ebp-134h]
  float v31; // [esp+48h] [ebp-134h]
  float v32; // [esp+48h] [ebp-134h]
  float *v33; // [esp+4Ch] [ebp-130h]
  int v34; // [esp+50h] [ebp-12Ch]
  float *v35; // [esp+5Ch] [ebp-120h]
  float v36; // [esp+88h] [ebp-F4h]
  int v37[20]; // [esp+B0h] [ebp-CCh] BYREF
  _BYTE v38[12]; // [esp+100h] [ebp-7Ch] BYREF
  _BYTE v39[12]; // [esp+10Ch] [ebp-70h] BYREF
  float v40; // [esp+118h] [ebp-64h]
  int v41; // [esp+11Ch] [ebp-60h]
  float v42; // [esp+120h] [ebp-5Ch]
  float v43; // [esp+124h] [ebp-58h]
  float v44; // [esp+128h] [ebp-54h]
  float v45; // [esp+12Ch] [ebp-50h]
  int v46; // [esp+130h] [ebp-4Ch] BYREF
  float v47; // [esp+134h] [ebp-48h]
  float v48; // [esp+138h] [ebp-44h]
  int v49; // [esp+13Ch] [ebp-40h] BYREF
  float v50; // [esp+140h] [ebp-3Ch]
  float v51; // [esp+144h] [ebp-38h]
  int v52; // [esp+148h] [ebp-34h]
  float v53; // [esp+14Ch] [ebp-30h] BYREF
  float v54; // [esp+150h] [ebp-2Ch]
  float v55; // [esp+154h] [ebp-28h]
  float v56; // [esp+158h] [ebp-24h] BYREF
  float v57; // [esp+15Ch] [ebp-20h]
  float v58; // [esp+160h] [ebp-1Ch]
  float v59; // [esp+164h] [ebp-18h] BYREF
  float v60; // [esp+168h] [ebp-14h]
  float v61; // [esp+16Ch] [ebp-10h]
  int v62; // [esp+170h] [ebp-Ch] BYREF
  float v63; // [esp+174h] [ebp-8h]
  float v64; // [esp+178h] [ebp-4h]
  int savedregs; // [esp+17Ch] [ebp+0h] BYREF

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) && *(int *)(a1 + 3632) >= 1 )
  {
    sub_10411EC0((float *)a1, a4, &v59);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    sub_10411D20(a1, v5, &v53);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v43 = v53 - *(float *)(a1 + 580);
    v44 = v54 - *(float *)(a1 + 584);
    v45 = v55 - *(float *)(a1 + 588);
    off_10689714();
    if ( v60 * v44 + v43 * v59 + v61 * v45 >= 0.95 )
    {
      v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, a3);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6);
      sub_1002A5F0((int)&savedregs, a1, v7, &v59, a1 + 580, 16395, a1, 0);
      if ( v36 >= 1.0 )
      {
        sub_104222B0(a1 + 728, 0, v38, 0);
        v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1);
        v9 = *(float *)a1;
        v53 = *v8;
        v54 = v8[1];
        v10 = v8[2];
        v11 = *(int (__thiscall **)(int))(LODWORD(v9) + 368);
        v55 = v10;
        if ( v11(a1) )
        {
          LOBYTE(v52) = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                          dword_106B31E4,
                          0,
                          3,
                          a2) == 0;
          sub_1023C380((_DWORD *)a1, (int)"NPC_MissileDefense.Attack", 0.0, 0);
          sub_100BCCA0((void *)a1, 2, (int)&v56, (int)v39);
          v12 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 368))(a1, &v59);
          sub_10411D20(a1, v12, v35);
          *(float *)&v41 = v59 - v53;
          v42 = v60 - v54;
          v40 = v61 - v55;
          v62 = v41;
          v63 = v42;
          v64 = v40;
          off_10689714();
          v13 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, -0.035);
          *(float *)&v62 = v13 + *(float *)&v62;
          v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -0.035,
                  0.035);
          v15 = v14 + v63;
          v63 = v15;
          *(float *)&v49 = *(float *)&v62 * 110.0 + v56;
          v50 = v15 * 110.0 + v57;
          v34 = v52;
          v51 = 110.0 * v64 + v58;
          *(float *)&v46 = v56 + *(float *)&v62 * 4096.0;
          v47 = v57 + v15 * 4096.0;
          v48 = v58 + v64 * 4096.0;
          v30 = 0.0;
          v28 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4) + 3000.0;
          sub_102651C0((float *)&v49, (float *)&v46, 0, -1, v28, SLOBYTE(v30), COERCE_INT(2000.0), v34);
          v62 = v41;
          v63 = v42;
          v64 = v40;
          off_10689714();
          v16 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -0.035,
                  0.035,
                  0,
                  0);
          *(float *)&v62 = v16 + *(float *)&v62;
          v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -0.035,
                  0.035);
          v63 = v17 + v63;
          v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -0.035,
                  0.035);
          v64 = v18 + v64;
          sub_100BCCA0((void *)a1, 1, (int)&v56, (int)v39);
          v60 = v63 * 110.0 + v57;
          *(float *)&v49 = *(float *)&v62 * 110.0 + v56;
          v50 = v60;
          v51 = 110.0 * v64 + v58;
          *(float *)&v46 = v56 + *(float *)&v62 * 4096.0;
          v47 = v63 * 4096.0 + v57;
          v48 = v58 + v64 * 4096.0;
          v31 = 0.0;
          v29 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4) + 3000.0;
          sub_102651C0((float *)&v49, (float *)&v46, 0, -1, v29, SLOBYTE(v31), COERCE_INT(2000.0), 0);
          *(_DWORD *)(a1 + 3632) -= 2;
          if ( *(int *)(a1 + 3632) >= 1 )
          {
            v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
            v59 = v19[179] - v56;
            v60 = v19[180] - v57;
            v20 = v19[181] - v58;
            v61 = v20;
            sub_100D7A40(&v59);
            v21 = (4000.0 - v20) * 0.001;
            if ( v21 > 0.0 )
            {
              v22 = v20 > 1500.0;
              v23 = v21;
              if ( !v22 )
                v23 = v21 + v21;
              v32 = v23;
              sub_10248110((int)v37, a1, a1, v32, 0x80000000, 0);
              v24 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
              v33 = (float *)sub_10019640(v24);
              v25 = sub_102D9B20();
              v26 = sub_100B9D10(v25, "SMG1");
              sub_10248070((float *)v37, v26, (float *)&v62, v33, 1.0);
              v27 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
              sub_100D9E70(v27, a1, v37);
            }
          }
          else
          {
            sub_1023C380((_DWORD *)a1, (int)"NPC_MissileDefense.Reload", 0.0, 0);
            *(float *)(a1 + 3636) = *(float *)(dword_106B31C8 + 12) + 0.3;
          }
        }
      }
    }
  }
}
