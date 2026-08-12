void __usercall sub_1030BD10(int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  unsigned int v5; // eax
  int *v6; // ecx
  unsigned int v7; // eax
  int *v8; // edi
  int *v9; // ecx
  _DWORD *v10; // eax
  double v11; // st7
  int v12; // ecx
  float *v13; // eax
  int v14; // edx
  float *v15; // eax
  float v16; // edx
  double v17; // st7
  int (__thiscall *v18)(int); // eax
  float *v19; // eax
  int v20; // edx
  float *v21; // eax
  double v22; // rt0
  float *v23; // eax
  double v24; // st7
  float *v25; // eax
  int (__thiscall *v26)(int); // edx
  float *v27; // eax
  double v28; // st6
  float v29; // edx
  int (__thiscall *v30)(int); // eax
  float *v31; // eax
  int *v32; // edi
  double v33; // st7
  float *v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  int v37; // eax
  int v38; // edi
  float v39; // [esp+20h] [ebp-228h]
  int v42; // [esp+3Ch] [ebp-20Ch] BYREF
  _BYTE v43[80]; // [esp+8Ch] [ebp-1BCh] BYREF
  float v44[20]; // [esp+DCh] [ebp-16Ch] BYREF
  _DWORD v45[20]; // [esp+12Ch] [ebp-11Ch] BYREF
  float v46[3]; // [esp+17Ch] [ebp-CCh] BYREF
  float v47[19]; // [esp+188h] [ebp-C0h] BYREF
  float v48[3]; // [esp+1D4h] [ebp-74h] BYREF
  _DWORD v49[6]; // [esp+1E0h] [ebp-68h] BYREF
  char v50; // [esp+1F8h] [ebp-50h]
  float v51[3]; // [esp+1FCh] [ebp-4Ch] BYREF
  float v52[3]; // [esp+208h] [ebp-40h] BYREF
  float v53; // [esp+214h] [ebp-34h] BYREF
  float v54; // [esp+218h] [ebp-30h]
  float v55; // [esp+21Ch] [ebp-2Ch]
  float v56; // [esp+220h] [ebp-28h] BYREF
  float v57; // [esp+224h] [ebp-24h]
  float v58; // [esp+228h] [ebp-20h]
  int v59; // [esp+22Ch] [ebp-1Ch] BYREF
  float v60; // [esp+230h] [ebp-18h] BYREF
  float v61; // [esp+234h] [ebp-14h] BYREF
  float v62; // [esp+238h] [ebp-10h]
  int v63; // [esp+23Ch] [ebp-Ch]
  void *v64; // [esp+240h] [ebp-8h]
  void *retaddr; // [esp+248h] [ebp+0h]

  v63 = a2;
  v64 = retaddr;
  if ( *(float *)(dword_106B31C8 + 12) < (double)*((float *)a1 + 418) )
    return;
  v5 = a1[925];
  if ( v5 != -1
    && (v6 = &off_1061BE18[4 * (a1[925] & 0xFFF) + 1], v7 = v5 >> 12, off_1061BE18[4 * (a1[925] & 0xFFF) + 2] == v7)
    && *v6 )
  {
    if ( v6[1] == v7 )
      v9 = (int *)*v6;
    else
      v9 = 0;
    v8 = v9;
  }
  else
  {
    v8 = (int *)(*(int (__thiscall **)(int *))(*a1 + 368))(a1);
  }
  if ( !v8 )
    goto LABEL_32;
  if ( (*(int (__thiscall **)(int *, int, int))(*v8 + 220))(v8, a3, a4) == 6 )
  {
    v10 = (_DWORD *)sub_10248110((int)v45, (int)a1, (int)a1, 1.0, 1, 0);
    sub_100D9E70(v8, (int)a1, v10);
    a1[925] = -1;
    return;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*v8 + 320))(v8) )
    v11 = *(float *)(dword_106E3104 + 44);
  else
    v11 = 250.0;
  v12 = a1[63];
  *(float *)&v59 = v11;
  if ( (v12 & 0x800) != 0 )
    sub_100DAE60((int)a1);
  sub_10422220(a1 + 176, v48);
  *(float *)&v13 = COERCE_FLOAT((*(int (__thiscall **)(int *))(*a1 + 576))(a1));
  v14 = *v8;
  v62 = *(float *)&v13;
  v15 = (float *)(*(int (__thiscall **)(int *))(v14 + 576))(v8);
  v16 = *(float *)a1;
  v56 = *v15 - *(float *)LODWORD(v62);
  v57 = v15[1] - *(float *)(LODWORD(v62) + 4);
  v17 = v15[2];
  v18 = *(int (__thiscall **)(int))(LODWORD(v16) + 576);
  v58 = v17 - *(float *)(LODWORD(v62) + 8);
  *(float *)&v19 = COERCE_FLOAT(v18((int)a1));
  v20 = *v8;
  v62 = *(float *)&v19;
  v21 = (float *)(*(int (__thiscall **)(int *))(v20 + 576))(v8);
  v22 = v21[1] - *(float *)(LODWORD(v62) + 4);
  v61 = *v21 - *(float *)LODWORD(v62);
  v62 = v22;
  sub_10018C80(&v61);
  if ( v57 * v57 + v56 * v56 + v58 * v58 >= 24336.0 || v48[0] * v61 + v48[1] * v62 < 0.69999999 )
  {
    v25 = (float *)(*(int (__thiscall **)(int *, float *))(*a1 + 908))(a1, v52);
    v56 = *v25 * 156.0;
    v57 = v25[1] * 156.0;
    v26 = *(int (__thiscall **)(int))(*a1 + 576);
    v58 = 156.0 * v25[2];
    v27 = (float *)v26((int)a1);
    v28 = v27[1] + v57;
    v24 = v27[2] + v58;
    v60 = v56 + *v27;
    v61 = v28;
  }
  else
  {
    v23 = (float *)(*(int (__thiscall **)(int *))(*v8 + 576))(v8);
    v60 = *v23;
    v61 = v23[1];
    v24 = v23[2];
  }
  v62 = v24;
  sub_10248110((int)v43, (int)a1, (int)a1, *(float *)&v59, 4, 0);
  *(float *)&v49[5] = 1.0;
  v49[2] = 0;
  v56 = 16.0;
  v49[4] = 0;
  v57 = 16.0;
  v58 = 16.0;
  v29 = *(float *)a1;
  v53 = -16.0;
  v49[3] = v43;
  v54 = -16.0;
  v55 = -16.0;
  v30 = *(int (__thiscall **)(int))(LODWORD(v29) + 576);
  v49[0] = &CTraceFilterMelee::`vftable';
  v49[1] = a1;
  v50 = 1;
  v31 = (float *)v30((int)a1);
  sub_1001F200(v44, v31, &v60, &v53, &v56);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v44,
    100679691,
    v49,
    v46);
  v32 = (int *)LODWORD(v47[16]);
  sub_1030B5E0((int)a1, v47, 100.0, 250.0, 0);
  if ( v32 )
  {
    v56 = v47[0] - v46[0];
    v57 = v47[1] - v46[1];
    v58 = v47[2] - v46[2];
    off_10689714();
    v33 = sub_10247D70(75.0, 600.0);
    v53 = v56 * v33;
    v54 = v57 * v33;
    v55 = v33 * v58;
    sub_102487B0((int)v45, (int)a1, (int)a1, &v53, v47, *(float *)&v59, 128, 0, 0);
    sub_100D9E70(v32, (int)a1, v45);
    a1[925] = -1;
    sub_1023C380(a1, (int)"NPC_AntlionGuard.Shove", 0.0, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v32 + 320))(v32) )
    {
      v60 = 20.0;
      v61 = 0.0;
      v62 = -20.0;
      sub_100D8FC0(v32, (int)&v60);
      v34 = (float *)sub_10019640(v32);
      sub_10261B70(v34, 100.0, 1.5, 1.0, 2.0, 0, 0);
      v59 = -2147483520;
      sub_102600B0(v32, &v59, 1.0, 0.1, 1);
      sub_104222B0(a1 + 182, v52, 0, v51);
      v60 = v51[0] * 150.0 + v52[0] * 400.0;
      v61 = v51[1] * 150.0 + v52[1] * 400.0;
      v62 = 400.0 * v52[2] + 150.0 * v51[2];
      sub_100EA150((int)v32, &v60);
      if ( *((_BYTE *)a1 + 3675)
        && (*(unsigned __int8 (__thiscall **)(int *))(*v32 + 320))(v32)
        && (*(unsigned __int8 (__thiscall **)(int *))(*v32 + 264))(v32) )
      {
        v35 = v32[55];
        if ( v35 > 12 )
        {
          LODWORD(v62) = v35 - 12;
          v39 = (float)(v35 - 12);
          v36 = (_DWORD *)sub_10248110((int)&v42, (int)a1, (int)a1, v39, 0x20000, 0);
          sub_100D9E70(v32, (int)a1, v36);
        }
      }
      return;
    }
    v37 = sub_100CFD20((int)v32);
    v38 = v37;
    if ( v37 && (unsigned __int8)sub_1039DC40(v37) )
      sub_101FB150(v38, 0, 3);
LABEL_32:
    a1[925] = -1;
  }
}
