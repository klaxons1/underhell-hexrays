// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_102E3620@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int v6; // eax
  int v7; // eax
  int (__thiscall *v8)(_DWORD *, int *, int, int); // edx
  float *v9; // eax
  double v10; // st7
  int (__thiscall *v11)(_DWORD *, float *); // edx
  float *v12; // eax
  _DWORD *v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int *v18; // eax
  int v19; // edx
  float *v20; // esi
  double v21; // st7
  float *v22; // esi
  int v23; // eax
  double v24; // st7
  bool v25; // sf
  _DWORD *v27; // ecx
  int v28; // eax
  _DWORD *v29; // eax
  double v30; // st7
  double v31; // st4
  double v32; // st6
  double v33; // st4
  double v34; // st5
  double v35; // st6
  float v37[20]; // [esp+44h] [ebp-12Ch] BYREF
  _DWORD v38[4]; // [esp+94h] [ebp-DCh] BYREF
  _DWORD v39[3]; // [esp+A4h] [ebp-CCh] BYREF
  float v40; // [esp+B0h] [ebp-C0h] BYREF
  float v41; // [esp+B4h] [ebp-BCh]
  float *v42; // [esp+B8h] [ebp-B8h]
  float v43; // [esp+BCh] [ebp-B4h]
  float v44; // [esp+C0h] [ebp-B0h]
  float v45; // [esp+C4h] [ebp-ACh]
  float v46; // [esp+D0h] [ebp-A0h]
  char v47; // [esp+DBh] [ebp-95h]
  char v48; // [esp+E6h] [ebp-8Ah]
  float *v49; // [esp+F0h] [ebp-80h]
  float v50[3]; // [esp+FCh] [ebp-74h] BYREF
  float v51[3]; // [esp+108h] [ebp-68h] BYREF
  float v52[3]; // [esp+114h] [ebp-5Ch] BYREF
  float v53; // [esp+120h] [ebp-50h] BYREF
  float v54; // [esp+124h] [ebp-4Ch]
  float v55; // [esp+128h] [ebp-48h]
  int v56; // [esp+12Ch] [ebp-44h]
  float v57; // [esp+130h] [ebp-40h] BYREF
  float v58; // [esp+134h] [ebp-3Ch]
  float v59; // [esp+138h] [ebp-38h]
  int v60; // [esp+13Ch] [ebp-34h] BYREF
  int v61; // [esp+140h] [ebp-30h]
  int v62; // [esp+144h] [ebp-2Ch] BYREF
  int v63; // [esp+148h] [ebp-28h]
  int v64; // [esp+14Ch] [ebp-24h]
  float *v65; // [esp+150h] [ebp-20h] BYREF
  float v66; // [esp+154h] [ebp-1Ch]
  float v67; // [esp+158h] [ebp-18h]
  float v68; // [esp+15Ch] [ebp-14h]
  int v69; // [esp+160h] [ebp-10h]
  int v70; // [esp+164h] [ebp-Ch]
  void *v71; // [esp+168h] [ebp-8h]
  void *retaddr; // [esp+170h] [ebp+0h]

  v70 = a2;
  v71 = retaddr;
  sub_100F5A30(a1, (int)v51, 0, 0);
  v6 = sub_100CF460(a1);
  v7 = sub_103FA8C0(v6);
  sub_10265720(v38, (int)a1, v7, 3);
  v8 = *(int (__thiscall **)(_DWORD *, int *, int, int))(*a1 + 504);
  v57 = v51[0] * 16384.0;
  v58 = v51[1] * 16384.0;
  v59 = 16384.0 * v51[2];
  v9 = (float *)v8(a1, &v62, a3, a4);
  v10 = v57 + *v9;
  v68 = COERCE_FLOAT(v52);
  v53 = v10;
  v54 = v9[1] + v58;
  v11 = *(int (__thiscall **)(_DWORD *, float *))(*a1 + 504);
  v55 = v9[2] + v59;
  v12 = (float *)v11(a1, v52);
  sub_1001F180(v37, v12, &v53);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v37,
    1174421507,
    v38,
    v39);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v39, (int)&v40, 255, 0, 0, 1, -1.0);
  if ( !sub_10163140(v39) )
  {
    v13 = (_DWORD *)a1[1344];
    v14 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v15 = sub_100B1560(v13, &v65, 1);
    v69 = v15;
    if ( v15 )
    {
      while ( 1 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 1524))(v15) )
        {
          v16 = v14;
          v56 = v14;
          if ( v14 + 1 > v61 )
          {
            sub_102ABFC0(&v60, v14 - v61 + 1);
            v14 = v63;
            v16 = v56;
          }
          v17 = v60;
          v63 = ++v14;
          v64 = v60;
          if ( v14 - v16 - 1 > 0 )
          {
            memcpy((void *)(v60 + 4 * v16 + 4), (const void *)(v60 + 4 * v16), 4 * (v14 - v16 - 1));
            v16 = v56;
            v17 = v60;
          }
          v18 = (int *)(v17 + 4 * v16);
          if ( v18 )
            *v18 = v69;
        }
        v69 = sub_100B1630((_DWORD *)a1[1344], (int *)&v65, 1);
        if ( !v69 )
          break;
        v15 = v69;
      }
    }
    v69 = 0;
    if ( v14 > 0 )
    {
      while ( !(*(unsigned __int8 (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v60 + 4 * v69) + 1560))(
                 *(_DWORD *)(v60 + 4 * v69),
                 v49) )
      {
        if ( ++v69 >= v14 )
          goto LABEL_18;
      }
      v25 = v62 < 0;
      *(_DWORD *)(a5 + 12) = v49;
      if ( !v25 && v60 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v60);
      return 1;
    }
LABEL_18:
    if ( v62 >= 0 && v60 )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v60);
  }
  if ( 1.0 == v46 || (v48 & 4) != 0 )
  {
    *(float *)a5 = v40;
    *(float *)(a5 + 4) = v41;
    *(float *)(a5 + 8) = *(float *)&v42;
  }
  else
  {
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v49 + 284))(v49)
      && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v49 + 1524))(v49) )
    {
      v19 = *((_DWORD *)v49 + 63) >> 11;
      v20 = v49;
      v65 = v49;
      if ( (v19 & 1) != 0 )
        sub_100DAE60((int)v49);
      v21 = v20[145];
      v22 = (float *)a5;
      v23 = (int)v65;
      *(float *)a5 = v21;
      *(float *)(a5 + 4) = *(float *)(v23 + 584);
      v24 = *(float *)(v23 + 588);
    }
    else
    {
      v57 = -16.0;
      v58 = -16.0;
      v59 = 0.0;
      v53 = 16.0;
      v54 = 16.0;
      v55 = 0.0;
      v50[0] = v40;
      v50[1] = v41;
      v50[2] = *(float *)&v42 - 8192.0;
      v52[0] = v43 * 24.0 + v40;
      v52[1] = v44 * 24.0 + v41;
      v52[2] = *(float *)&v42 + 24.0 * v45;
      sub_1001F200(v37, v52, v50, &v57, v42);
      sub_10265570(&v62, (int)a1, 0);
      (*(void (__thiscall **)(int, float *, int, int *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v37,
        16395,
        &v62,
        v39);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v39, (int)&v40, 255, 255, 0, 1, -1.0);
      v22 = (float *)a5;
      if ( v47 )
      {
        *(float *)a5 = v66;
        *(float *)(a5 + 4) = v67;
        v24 = v68;
      }
      else
      {
        *(float *)a5 = v40;
        *(float *)(a5 + 4) = v41;
        v24 = *(float *)&v42;
      }
    }
    v22[2] = v24;
    v27 = (_DWORD *)a1[1344];
    if ( v27 )
    {
      v28 = sub_100B1560(v27, 0, 1);
      if ( v28 )
      {
        v29 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 1568))(v28);
        if ( v29 )
        {
          v30 = *v22;
          v68 = *(float *)&v22;
          v66 = v30;
          if ( sub_100296E0(v29, COERCE_INT(v22[1]), COERCE_FLOAT_(v22[2])) )
          {
            v31 = v67 - v22[1];
            v32 = v31 * v31;
            v33 = v66 - *v22;
            v34 = v32;
            v35 = v68 - v22[2];
            return v33 * v33 + v34 + v35 * v35 < 32400.0;
          }
        }
      }
    }
  }
  return 0;
}
