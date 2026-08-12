int __userpurge sub_10085990@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        char a7,
        int a8)
{
  bool v8; // zf
  float *v9; // edi
  int result; // eax
  int (__thiscall *v11)(int, int, int); // eax
  float *v12; // eax
  double v13; // st7
  float *v14; // eax
  float v15; // ecx
  float v16; // edx
  float v17; // eax
  void *v18; // esp
  double v19; // st6
  double v20; // st5
  double v21; // st7
  double v22; // st7
  double v23; // st5
  double v24; // rt2
  int v25; // eax
  int (__thiscall *v26)(int, int *); // edx
  float *v27; // edi
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  float *v31; // eax
  float v32; // edx
  float v33; // ecx
  double v34; // st7
  float v35; // edx
  int v36; // esi
  int v37; // esi
  _DWORD v38[20]; // [esp+14h] [ebp-1ACh] BYREF
  int v39; // [esp+64h] [ebp-15Ch]
  int v40; // [esp+68h] [ebp-158h]
  float v41[20]; // [esp+74h] [ebp-14Ch] BYREF
  _BYTE v42[12]; // [esp+C4h] [ebp-FCh] BYREF
  int v43; // [esp+D0h] [ebp-F0h] BYREF
  float v44; // [esp+F0h] [ebp-D0h]
  int v45; // [esp+120h] [ebp-A0h] BYREF
  int v46; // [esp+12Ch] [ebp-94h] BYREF
  int v47; // [esp+140h] [ebp-80h] BYREF
  int v48; // [esp+148h] [ebp-78h] BYREF
  _DWORD v49[4]; // [esp+154h] [ebp-6Ch] BYREF
  float v50[3]; // [esp+164h] [ebp-5Ch] BYREF
  float *v51; // [esp+170h] [ebp-50h]
  int v52[2]; // [esp+174h] [ebp-4Ch] BYREF
  int v53; // [esp+17Ch] [ebp-44h]
  int v54; // [esp+180h] [ebp-40h]
  _DWORD *v55; // [esp+184h] [ebp-3Ch]
  BOOL (__cdecl *v56)(float *, float *); // [esp+188h] [ebp-38h]
  float v57; // [esp+18Ch] [ebp-34h] BYREF
  float v58; // [esp+190h] [ebp-30h]
  float v59; // [esp+194h] [ebp-2Ch]
  int v60; // [esp+198h] [ebp-28h] BYREF
  float v61; // [esp+19Ch] [ebp-24h] BYREF
  float v62; // [esp+1A0h] [ebp-20h]
  float v63; // [esp+1A4h] [ebp-1Ch]
  int v64; // [esp+1A8h] [ebp-18h]
  int v65; // [esp+1ACh] [ebp-14h]
  _DWORD *v66; // [esp+1B0h] [ebp-10h]
  _DWORD v67[3]; // [esp+1B4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+1C0h] [ebp+0h]

  v67[0] = a2;
  v67[1] = retaddr;
  v8 = a1[1] == 0;
  v40 = a4;
  v39 = a3;
  v66 = a1;
  if ( v8 )
    return -1;
  v9 = a6;
  result = sub_10085580(a1, a6, a5, &v60);
  v64 = result;
  if ( result != -1 )
  {
    if ( a7 )
    {
      if ( a5 )
      {
        v11 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)a5 + 532);
        v65 = *(_DWORD *)(a5 + 1676);
        v51 = (float *)v11(a5, v39, v40);
        v12 = (float *)sub_1008D160(v50, v65);
        v61 = *v51 + *v12;
        v62 = v51[1] + v12[1];
        v13 = v51[2] + v12[2];
        v14 = &v61;
        v63 = v13;
      }
      else
      {
        v14 = (float *)(*(_DWORD *)(v66[2] + 4 * result) + 4);
      }
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v57 = v15;
      v58 = v16;
      v59 = v17;
      sub_100B8E60(a5, 1, a5, 0, 1);
      sub_10023120(COERCE_FLOAT(v67), a5, a6, &v57, 147467, (int)&v47, (int)v42);
      if ( 1.0 != v44 )
      {
        v64 = -1;
        goto LABEL_9;
      }
      result = v64;
    }
    if ( !a8 )
    {
LABEL_18:
      *(float *)&v66[6 * v60 + 6] = *(float *)(dword_106B31C8 + 12) + 10.0;
      return result;
    }
    if ( (**(unsigned __int8 (__thiscall ***)(int, _DWORD))a8)(a8, *(_DWORD *)(v66[2] + 4 * result)) )
    {
      result = v64;
      goto LABEL_18;
    }
  }
LABEL_9:
  v49[0] = &CNodeFilter::`vftable';
  v49[1] = a6;
  v49[2] = a5;
  if ( a5 )
    v49[3] = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 1672))(a5);
  v18 = alloca(80);
  v19 = 720.0;
  v61 = 720.0;
  v52[0] = (int)v38;
  v20 = 720.0;
  v52[1] = 10;
  v62 = 720.0;
  v53 = -1;
  v21 = 720.0;
  v54 = 0;
  v63 = 720.0;
  v55 = v38;
  v56 = sub_10084F20;
  if ( a5 )
  {
    if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a5 + 1672))(a5) & 4) != 0 )
    {
      v22 = 1440.0;
      v19 = 1440.0;
      v23 = 1440.0;
    }
    else
    {
      v22 = v63;
      v23 = v62;
      v19 = v61;
    }
    v24 = v23;
    v20 = v22;
    v21 = v24;
  }
  v57 = *a6 + v19;
  v58 = a6[1] + v21;
  v59 = a6[2] + v20;
  v61 = *a6 - v19;
  v62 = a6[1] - v21;
  v63 = a6[2] - v20;
  sub_10085820(v66, v52, 10, &v61, &v57, (int)v49);
  if ( !v54 )
  {
LABEL_38:
    if ( a5 )
      v36 = *(_DWORD *)(a5 + 1676);
    else
      v36 = 11;
    sub_10085610(v66, v9, -1, v36);
    if ( v53 >= 0 )
    {
      if ( v52[0] )
        (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*g_pMemAlloc + 20))(
          g_pMemAlloc,
          v52[0],
          v38[0],
          v38[1],
          v38[2],
          v38[3],
          v38[4],
          v38[5],
          v38[6],
          v38[7],
          v38[8],
          v38[9],
          v38[10],
          v38[11],
          v38[12],
          v38[13],
          v38[14],
          v38[15],
          v38[16],
          v38[17],
          v38[18],
          v38[19]);
    }
    return -1;
  }
  while ( 1 )
  {
    v25 = *(_DWORD *)(v52[0] + 4);
    v65 = v25;
    if ( v25 != v64 )
    {
      if ( a5 )
      {
        if ( !sub_10080610(*(_DWORD **)(a5 + 2588), v25, 147467) )
          goto LABEL_37;
        v25 = v65;
      }
      if ( !a7 )
        goto LABEL_34;
      if ( a5 )
      {
        v26 = *(int (__thiscall **)(int, int *))(*(_DWORD *)a5 + 1792);
        v60 = *(_DWORD *)(a5 + 1676);
        v27 = (float *)v26(a5, &v45);
        v28 = (float *)sub_1008D160(&v48, v60);
        v57 = *v28 + *v27;
        v58 = v27[1] + v28[1];
        v29 = v27[2];
        v9 = a6;
        v30 = v29 + v28[2];
        v31 = &v57;
        v59 = v30;
      }
      else
      {
        v31 = (float *)(*(_DWORD *)(v66[2] + 4 * v25) + 4);
      }
      v32 = *v31;
      v33 = v31[1];
      v50[0] = *v9;
      v50[1] = v9[1];
      v34 = v9[2] + 1.0;
      v61 = v32;
      v35 = v31[2];
      v62 = v33;
      v50[2] = v34;
      v63 = v35;
      sub_100B8E60(a5, 1, a5, 0, 1);
      sub_1001F180(v41, v50, &v61);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v41,
        147467,
        &v46,
        v42);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v42, (int)&v43, 255, 0, 0, 1, -1.0);
      if ( 1.0 == v44 )
        break;
    }
LABEL_37:
    sub_10085690(v52);
    if ( !v54 )
      goto LABEL_38;
  }
  v25 = v65;
LABEL_34:
  if ( !a8 )
    goto LABEL_41;
  if ( !(**(unsigned __int8 (__thiscall ***)(int, _DWORD))a8)(a8, *(_DWORD *)(v66[2] + 4 * v25)) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a8 + 4))(a8) )
      goto LABEL_38;
    goto LABEL_37;
  }
  v25 = v65;
LABEL_41:
  if ( a5 )
    v37 = *(_DWORD *)(a5 + 1676);
  else
    v37 = 11;
  sub_10085610(v66, v9, v25, v37);
  sub_102375F0(v52);
  return v65;
}
