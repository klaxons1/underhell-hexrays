float *__userpurge sub_1002E900@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, float *a3, float *a4)
{
  bool v5; // zf
  int v6; // eax
  float *result; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // edi
  int v14; // esi
  float *v15; // eax
  int (__thiscall *v16)(int, _BYTE *); // edx
  float *v17; // eax
  double v18; // st6
  double v19; // st5
  float v20; // edx
  float v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  float *v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ebx
  float v31; // edx
  float v32; // ecx
  int v33; // eax
  float *v34; // eax
  double v35; // st6
  double v36; // st7
  float v37; // edx
  float v38; // ecx
  float v39; // [esp+14h] [ebp-108h]
  int v40; // [esp+14h] [ebp-108h]
  float v41; // [esp+18h] [ebp-104h]
  char v42[44]; // [esp+28h] [ebp-F4h] BYREF
  float v43; // [esp+54h] [ebp-C8h]
  int v44; // [esp+74h] [ebp-A8h]
  char v45[12]; // [esp+7Ch] [ebp-A0h] BYREF
  _BYTE v46[12]; // [esp+88h] [ebp-94h] BYREF
  float v47[3]; // [esp+94h] [ebp-88h] BYREF
  char v48[12]; // [esp+A0h] [ebp-7Ch] BYREF
  float v49; // [esp+B8h] [ebp-64h]
  float v50; // [esp+BCh] [ebp-60h]
  float v51; // [esp+C0h] [ebp-5Ch]
  float v52[3]; // [esp+C4h] [ebp-58h] BYREF
  float v53; // [esp+D0h] [ebp-4Ch]
  float v54; // [esp+D4h] [ebp-48h]
  float v55; // [esp+D8h] [ebp-44h]
  float v56; // [esp+DCh] [ebp-40h]
  float v57; // [esp+E0h] [ebp-3Ch]
  float v58; // [esp+E4h] [ebp-38h]
  float v59; // [esp+E8h] [ebp-34h]
  float v60; // [esp+ECh] [ebp-30h]
  float v61; // [esp+F0h] [ebp-2Ch]
  float v62; // [esp+F4h] [ebp-28h] BYREF
  float v63; // [esp+F8h] [ebp-24h]
  float v64; // [esp+FCh] [ebp-20h]
  float v65; // [esp+100h] [ebp-1Ch] BYREF
  float v66; // [esp+104h] [ebp-18h]
  float v67; // [esp+108h] [ebp-14h]
  float v68; // [esp+10Ch] [ebp-10h]
  float v69; // [esp+110h] [ebp-Ch] BYREF
  float v70; // [esp+114h] [ebp-8h]
  float v71; // [esp+118h] [ebp-4h]
  int savedregs; // [esp+11Ch] [ebp+0h] BYREF

  v5 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1) == 0;
  v6 = *(_DWORD *)a1;
  if ( v5 )
  {
    (*(void (__thiscall **)(_BYTE *, float *, float *, int))(v6 + 2096))(a1, a3, a4, 1);
    return a3;
  }
  v8 = (*(int (__thiscall **)(_BYTE *, int))(v6 + 368))(a1, a2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8)
    && a1[447] != 3
    && *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1) + 447) == 3
    && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 4) < 3 )
  {
    v9 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v9 + 528))(v9, &v62, 0, 0);
    v10 = *(_DWORD *)a1;
    v64 = 0.0;
    v11 = (*(int (__thiscall **)(_BYTE *))(v10 + 368))(a1);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v11 + 536))(v11, &v65);
    off_10689714();
    v12 = v63 * v66 + v65 * v62 + v67 * v64;
    v68 = v12;
    if ( v12 < 0.0 )
      v68 = 0.0;
    v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
    v14 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
    v15 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v13 + 536))(v13, v45);
    v56 = *v15 * v68;
    v57 = v15[1] * v68;
    v16 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 504);
    v58 = v68 * v15[2];
    v53 = v62 * 48.0;
    v54 = v63 * 48.0;
    v55 = 48.0 * v64;
    v17 = (float *)v16(v14, v46);
    v18 = v17[1] + v54;
    v19 = v17[2];
    v59 = v53 + *v17 + v56 - *a4;
    v60 = v18 + v57 - a4[1];
    v61 = v19 + v55 + v58 - a4[2];
    off_10689714();
    result = a3;
    v20 = v60;
    *a3 = v59;
    v21 = v61;
    a3[1] = v20;
    a3[2] = v21;
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)a1 + 2100))(a1, v52);
    v69 = v52[0] - *a4;
    v70 = v52[1] - a4[1];
    v71 = v52[2] - a4[2];
    off_10689714();
    (*(void (__thiscall **)(_BYTE *, float *, float *))(*(_DWORD *)a1 + 2108))(a1, a4, &v69);
    v47[0] = v69;
    v47[1] = v70;
    v47[2] = v71;
    sub_10421D80(v47, v48);
    if ( !(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1)
      || (v22 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1),
          (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 220))(v22) != 6)
      || (v23 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1),
          (v24 = __RTDynamicCast(
                   v23,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CNPC_Bullseye `RTTI Type Descriptor',
                   0)) == 0)
      || !*(_BYTE *)(v24 + 3672) )
    {
      v25 = *(_DWORD *)a1;
      (*(void (__thiscall **)(_BYTE *, float *))(*(_DWORD *)a1 + 368))(a1, a4);
      v41 = COERCE_FLOAT(sub_100CF460(a1));
      v39 = ((double (__thiscall *)(_BYTE *))*(_DWORD *)(v25 + 1112))(a1);
      v40 = (*(int (__thiscall **)(_BYTE *, _DWORD))(v25 + 368))(a1, LODWORD(v39));
      v26 = sub_100CF460(a1);
      v27 = (float *)(*(int (__thiscall **)(_BYTE *, _BYTE *, int, int))(v25 + 1108))(a1, v46, v26, v40);
      sub_10022E00(v47, v27, v41);
      v69 = v49;
      v70 = v50;
      v71 = v51;
    }
    v28 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 368))(a1);
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 288))(v28);
    v30 = v29;
    if ( v29 && (*(unsigned __int8 (__thiscall **)(int, _BYTE *))(*(_DWORD *)v29 + 888))(v29, a1) )
    {
      v65 = v69 * 8192.0 + *a4;
      v66 = v70 * 8192.0 + a4[1];
      v67 = 8192.0 * v71 + a4[2];
      sub_1002A5F0((int)&savedregs, (int)a1, a4, &v65, 1174421507, (int)a1, 0, (int)v42);
      if ( 1.0 != v43 && v44 && *(_BYTE *)(v44 + 225) )
      {
        result = a3;
        v31 = v50;
        *a3 = v49;
        v32 = v51;
        a3[1] = v31;
        a3[2] = v32;
        return result;
      }
      v33 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 892))(v30);
      if ( v33 )
      {
        v34 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v33 + 576))(v33);
        v35 = v34[1] - a4[1];
        v36 = v34[2] - a4[2];
        v69 = *v34 - *a4;
        v70 = v35;
        v71 = v36;
        off_10689714();
      }
    }
    result = a3;
    v37 = v70;
    *a3 = v69;
    v38 = v71;
    a3[1] = v37;
    a3[2] = v38;
  }
  return result;
}
