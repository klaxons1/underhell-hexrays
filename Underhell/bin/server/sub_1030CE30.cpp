void __usercall sub_1030CE30(int *a1@<ecx>, int a2@<ebp>)
{
  unsigned int v3; // edi
  bool v4; // cc
  double v5; // st7
  unsigned int v6; // ecx
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st6
  float *v15; // edi
  float *v16; // eax
  int v17; // eax
  float *v18; // eax
  float *v19; // eax
  char *v20; // edi
  char *v21; // eax
  float *v22; // eax
  float v23; // edx
  float *v24; // eax
  float v25; // edx
  _DWORD *v26; // eax
  float *v27; // eax
  double v28; // st6
  double v29; // st7
  int v30; // edx
  int v31; // edx
  const char *v32; // eax
  int v33; // ecx
  _DWORD *v34; // eax
  float v35; // edx
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // eax
  char *v39; // eax
  char *v40; // [esp+18h] [ebp-1E4h]
  char *v41; // [esp+18h] [ebp-1E4h]
  int v42; // [esp+20h] [ebp-1DCh]
  float v43; // [esp+20h] [ebp-1DCh]
  int v44; // [esp+24h] [ebp-1D8h]
  float v45; // [esp+2Ch] [ebp-1D0h]
  float v46[22]; // [esp+38h] [ebp-1C4h] BYREF
  float v47[20]; // [esp+90h] [ebp-16Ch] BYREF
  float v48[3]; // [esp+E0h] [ebp-11Ch] BYREF
  _DWORD v49[3]; // [esp+ECh] [ebp-110h] BYREF
  _BYTE v50[12]; // [esp+F8h] [ebp-104h] BYREF
  float v51[10]; // [esp+104h] [ebp-F8h] BYREF
  char v52; // [esp+12Eh] [ebp-CEh]
  char v53; // [esp+12Fh] [ebp-CDh]
  __int16 v54; // [esp+138h] [ebp-C4h]
  float v55; // [esp+150h] [ebp-ACh]
  float v56[16]; // [esp+154h] [ebp-A8h]
  float v57[3]; // [esp+194h] [ebp-68h] BYREF
  float v58[3]; // [esp+1A0h] [ebp-5Ch] BYREF
  unsigned int v59; // [esp+1ACh] [ebp-50h]
  float v60; // [esp+1B0h] [ebp-4Ch]
  float v61; // [esp+1B4h] [ebp-48h]
  float v62; // [esp+1B8h] [ebp-44h]
  float v63; // [esp+1BCh] [ebp-40h] BYREF
  float v64; // [esp+1C0h] [ebp-3Ch]
  float v65; // [esp+1C4h] [ebp-38h]
  float v66; // [esp+1C8h] [ebp-34h] BYREF
  float v67; // [esp+1CCh] [ebp-30h]
  float v68; // [esp+1D0h] [ebp-2Ch]
  float v69; // [esp+1D4h] [ebp-28h] BYREF
  float v70; // [esp+1D8h] [ebp-24h]
  float v71; // [esp+1DCh] [ebp-20h]
  float v72; // [esp+1E0h] [ebp-1Ch] BYREF
  float v73; // [esp+1E4h] [ebp-18h]
  float v74; // [esp+1E8h] [ebp-14h]
  float *v75; // [esp+1ECh] [ebp-10h]
  _DWORD v76[3]; // [esp+1F0h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1FCh] [ebp+0h]

  v76[0] = a2;
  v76[1] = retaddr;
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v69 = 0.0;
  v70 = *((float *)a1 + 177);
  v71 = 0.0;
  sub_104222B0(&v69, &v63, v58, 0);
  v55 = 0.0;
  v3 = 0;
  v4 = a1[909] < 3;
  v56[0] = 200.0;
  v56[1] = 0.0;
  v56[2] = -200.0;
  v56[3] = 128.0;
  v56[4] = 128.0;
  v56[5] = 128.0;
  v56[6] = -128.0;
  v56[7] = -128.0;
  v56[9] = -128.0;
  v56[10] = -128.0;
  v56[8] = 128.0;
  v56[11] = 200.0;
  v56[12] = 0.0;
  v56[14] = 0.0;
  v56[13] = -200.0;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( v3 >= 8 )
        goto LABEL_37;
      v5 = v56[2 * v3];
      v6 = (unsigned int)a1[63] >> 11;
      v69 = v58[0] * v5;
      v70 = v58[1] * v5;
      v71 = v5 * v58[2];
      v7 = v56[2 * v3 - 1];
      v60 = v63 * v7;
      v61 = v64 * v7;
      v62 = v7 * v65;
      if ( (v6 & 1) != 0 )
        sub_100DAE60((int)a1);
      v8 = *((float *)a1 + 145) + v60;
      v9 = *((float *)a1 + 146);
      v59 = v3 + 1;
      v10 = v8;
      v11 = *((float *)a1 + 147) + v62;
      v72 = v10 + v69;
      v73 = v9 + v61 + v70;
      v74 = v11 + v71;
      v12 = RandomFloat(-64.0, 64.0);
      v72 = v12 + v72;
      v13 = RandomFloat(-64.0, 64.0);
      v73 = v13 + v73;
      v14 = v74 + 64.0;
      v74 = v14;
      v57[0] = v72;
      v57[1] = v73;
      v57[2] = v14 - 128.0;
      v15 = (float *)sub_10073730(5);
      v16 = (float *)sub_10073710(5);
      sub_1001F200(v47, &v72, v57, v16, v15);
      sub_10265570(v49, 0, 0);
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16))(dword_106B31F4, v47, 33701899);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v50, (int)v51, 255, 255, 0, 1, -1.0);
      if ( v53 || v52 || 1.0 == v51[8] )
        break;
      v17 = *(unsigned __int16 *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
                                    dword_106BAFF8,
                                    v54)
                                + 72);
      if ( v17 != 68 && v17 != 78 )
      {
        if ( *(_DWORD *)(dword_106E3074 + 48) != 2 )
          goto LABEL_36;
        v45 = 5.0;
        v44 = 128;
        v42 = 128;
LABEL_35:
        v41 = sub_10073730(5);
        v39 = sub_10073710(5);
        sub_1011BB20((int)v51, (int)v39, (int)v41, 255, v42, v44, 1, v45);
        goto LABEL_36;
      }
      v18 = (float *)(*(int (__thiscall **)(int *))(*a1 + 576))(a1);
      sub_1002A5F0((int)v76, (int)a1, v18, v51, 33701899, (int)a1, 0, (int)v46);
      if ( 1.0 == v46[11] )
      {
        v20 = (char *)sub_101811E0("npc_antlion", -1);
        if ( !v20 )
          goto LABEL_37;
        if ( *(_DWORD *)(dword_106E3074 + 48) == 2 )
        {
          v40 = sub_10073730(5);
          v21 = sub_10073710(5);
          sub_1011BB20((int)v51, (int)v21, (int)v40, 0, 255, 0, 1, 5.0);
          v22 = (float *)(*(int (__thiscall **)(int *))(*a1 + 576))(a1);
          sub_1011BC50(v22, v51, 0, 255, 0, 1, 5.0);
        }
        v72 = v51[0];
        v73 = v51[1];
        v74 = v51[2];
        sub_100E0D20((int)v20, &v72);
        v67 = v64;
        v23 = *(float *)a1;
        v66 = v63;
        v68 = v65;
        if ( (*(int (__thiscall **)(int *, _DWORD *, _BYTE *))(LODWORD(v23) + 368))(a1, v49, v50) )
        {
          v24 = (float *)sub_10019640(a1);
          v25 = *(float *)a1;
          v75 = v24;
          v26 = (_DWORD *)(*(int (__thiscall **)(int *))(LODWORD(v25) + 368))(a1);
          v27 = (float *)sub_10019640(v26);
          v28 = v27[1] - v75[1];
          v29 = v27[2] - v75[2];
          v66 = *v27 - *v75;
          v67 = v28;
          v68 = v29;
          off_10689714();
        }
        sub_10422540(&v66, v48);
        sub_100E0EA0((int)v20, v48);
        sub_10035270((int)v20, v30, 4);
        sub_10035270((int)v20, v31, 512);
        v32 = (const char *)a1[65];
        if ( !v32 )
          v32 = String;
        v75 = (float *)(*(_DWORD *)v20 + 128);
        sub_1025F440("%s,SummonedAntlionDied,,0,-1", v32);
        (*(void (__thiscall **)(char *))v75)(v20);
        v20[3652] = 1;
        sub_10260750(v20);
        (*(void (__thiscall **)(char *))(*(_DWORD *)v20 + 136))(v20);
        v43 = RandomFloat(0.1, 1.0);
        sub_1010C7F0((float *)dword_10614CA8, (int)v20, "Unburrow", v43, (int)a1, (int)a1, 0);
        v33 = a1[699];
        if ( v33 )
          sub_100B20E0(v33, v20);
        if ( (*(int (__thiscall **)(int *))(*a1 + 368))(a1) )
        {
          v34 = (_DWORD *)(*(int (__thiscall **)(int *, int))(*a1 + 368))(a1, 1);
          sub_100285C0(v20, v34, (char)"OnDeath");
          sub_1002B660((int)v20, 3);
          v35 = *(float *)a1;
          v75 = (float *)(*(_DWORD *)v20 + 1876);
          v36 = (_DWORD *)(*(int (__thiscall **)(int *, _DWORD))(LODWORD(v35) + 368))(a1, 0);
          v37 = sub_10019640(v36);
          v38 = (*(int (__thiscall **)(int *, _DWORD *))(*a1 + 368))(a1, v37);
          (*(void (__thiscall **)(char *, int))v75)(v20, v38);
        }
        ++a1[909];
      }
      else if ( *(_DWORD *)(dword_106E3074 + 48) == 2 )
      {
        v19 = (float *)(*(int (__thiscall **)(int *))(*a1 + 576))(a1);
        sub_1011BC50(v19, v51, 255, 0, 0, 1, 5.0);
      }
LABEL_36:
      if ( a1[909] >= 3 )
        goto LABEL_37;
      v3 = v59;
    }
    if ( *(_DWORD *)(dword_106E3074 + 48) != 2 )
      goto LABEL_36;
    v45 = 5.0;
    v44 = 0;
    v42 = 0;
    goto LABEL_35;
  }
LABEL_37:
  if ( *(_DWORD *)(dword_106E3074 + 48) == 2 )
    Msg("Guard summoned antlion count: %d\n", a1[909]);
  if ( a1[909] <= 2 )
    *((float *)a1 + 908) = RandomFloat(10.0, 15.0) + *(float *)(dword_106B31C8 + 12);
  else
    *((float *)a1 + 908) = RandomFloat(15.0, 20.0) + *(float *)(dword_106B31C8 + 12);
}
