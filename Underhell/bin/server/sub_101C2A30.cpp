// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_101C2A30@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  float *v5; // eax
  int v6; // ecx
  int v7; // edx
  double v8; // st7
  int (__thiscall *v9)(int); // eax
  float *v10; // edi
  double v11; // st7
  int i; // edi
  double v13; // st7
  double v14; // st7
  int v15; // edx
  int result; // eax
  _DWORD v18[3]; // [esp+1Ch] [ebp-F4h] BYREF
  _DWORD v19[10]; // [esp+28h] [ebp-E8h] BYREF
  int v20; // [esp+50h] [ebp-C0h]
  int v21; // [esp+54h] [ebp-BCh]
  int v22; // [esp+58h] [ebp-B8h]
  int v23; // [esp+5Ch] [ebp-B4h]
  int v24; // [esp+60h] [ebp-B0h]
  int v25; // [esp+64h] [ebp-ACh]
  int v26; // [esp+68h] [ebp-A8h]
  int v27; // [esp+6Ch] [ebp-A4h]
  int v28; // [esp+70h] [ebp-A0h]
  int v29; // [esp+74h] [ebp-9Ch]
  _DWORD v30[3]; // [esp+78h] [ebp-98h] BYREF
  float v31; // [esp+84h] [ebp-8Ch] BYREF
  int v32; // [esp+88h] [ebp-88h]
  float v33; // [esp+8Ch] [ebp-84h]
  int v34; // [esp+90h] [ebp-80h]
  float v35; // [esp+94h] [ebp-7Ch]
  float v36; // [esp+98h] [ebp-78h]
  float v37; // [esp+9Ch] [ebp-74h]
  int v38; // [esp+A0h] [ebp-70h]
  float v39; // [esp+A4h] [ebp-6Ch]
  float v40; // [esp+A8h] [ebp-68h]
  float v41; // [esp+ACh] [ebp-64h]
  int v42; // [esp+B0h] [ebp-60h]
  float v43; // [esp+B4h] [ebp-5Ch]
  float v44; // [esp+B8h] [ebp-58h]
  float v45; // [esp+BCh] [ebp-54h]
  int v46; // [esp+C0h] [ebp-50h]
  int v47; // [esp+C4h] [ebp-4Ch]
  int v48; // [esp+C8h] [ebp-48h]
  int v49; // [esp+CCh] [ebp-44h]
  int v50; // [esp+D0h] [ebp-40h]
  int v51; // [esp+D4h] [ebp-3Ch]
  float v52; // [esp+D8h] [ebp-38h]
  float v53; // [esp+DCh] [ebp-34h]
  int v54; // [esp+E0h] [ebp-30h]
  float v55; // [esp+E4h] [ebp-2Ch]
  float v56; // [esp+E8h] [ebp-28h]
  float v57; // [esp+ECh] [ebp-24h]
  int v58; // [esp+F0h] [ebp-20h]
  float v59; // [esp+F4h] [ebp-1Ch] BYREF
  float v60; // [esp+F8h] [ebp-18h]
  float v61; // [esp+FCh] [ebp-14h]
  float *v62; // [esp+100h] [ebp-10h]
  int v63; // [esp+104h] [ebp-Ch]
  void *v64; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v63 = a2;
  v64 = retaddr;
  v58 = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, float, int, float, int, float, float, float, int, float, float, float, int, float, float, float, int, int, int, int, int, int, float, float, int, float, float, float, int, float, float, float))(*(_DWORD *)a1 + 636))(
          a1,
          a3,
          a4,
          v18[0],
          v18[1],
          v18[2],
          v19[0],
          v19[1],
          v19[2],
          v19[3],
          v19[4],
          v19[5],
          v19[6],
          v19[7],
          v19[8],
          v19[9],
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30[0],
          v30[1],
          v30[2],
          COERCE_FLOAT(LODWORD(v31)),
          v32,
          COERCE_FLOAT(LODWORD(v33)),
          v34,
          COERCE_FLOAT(LODWORD(v35)),
          COERCE_FLOAT(LODWORD(v36)),
          COERCE_FLOAT(LODWORD(v37)),
          v38,
          COERCE_FLOAT(LODWORD(v39)),
          COERCE_FLOAT(LODWORD(v40)),
          COERCE_FLOAT(LODWORD(v41)),
          v42,
          COERCE_FLOAT(LODWORD(v43)),
          COERCE_FLOAT(LODWORD(v44)),
          COERCE_FLOAT(LODWORD(v45)),
          v46,
          v47,
          v48,
          v49,
          v50,
          v51,
          COERCE_FLOAT(LODWORD(v52)),
          COERCE_FLOAT(LODWORD(v53)),
          v54,
          COERCE_FLOAT(LODWORD(v55)),
          COERCE_FLOAT(LODWORD(v56)),
          COERCE_FLOAT(LODWORD(v57)),
          v58,
          COERCE_FLOAT(LODWORD(v59)),
          COERCE_FLOAT(LODWORD(v60)),
          COERCE_FLOAT(LODWORD(v61)));
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320);
  v6 = *(_DWORD *)(a1 + 252) >> 11;
  v62 = v5;
  if ( (v6 & 1) != 0 )
  {
    sub_100DAE60(a1);
    v5 = v62;
  }
  v7 = *(_DWORD *)(a1 + 320);
  v55 = *v5 + *(float *)(a1 + 580);
  v56 = v5[1] + *(float *)(a1 + 584);
  v8 = *(float *)(a1 + 588) + v5[2];
  v9 = *(int (__thiscall **)(int))(v7 + 8);
  v57 = v8;
  v10 = (float *)v9(a1 + 320);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v11 = *v10;
  v62 = 0;
  v52 = v11 + *(float *)(a1 + 580);
  v53 = v10[1] + *(float *)(a1 + 584);
  v61 = v57 - 1.0;
  while ( 2 )
  {
    for ( i = 0; i <= 1; ++i )
    {
      if ( v62 )
        v13 = v52;
      else
        v13 = v55;
      v59 = v13;
      if ( i )
        v14 = v53;
      else
        v14 = v56;
      v15 = *(_DWORD *)a1;
      v60 = v14;
      if ( (*(int (__thiscall **)(int))(v15 + 12))(a1)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 284))(a1) )
      {
        v61 = COERCE_FLOAT(v18);
        v60 = 0.0;
        v59 = *(float *)&v58;
        ((void (__cdecl *)(int, float *, float *))sub_10265AF0)(a1, &v59, &v59);
      }
      else
      {
        v35 = 0.0;
        v36 = 0.0;
        v37 = 0.0;
        LOWORD(v47) = 1;
        v45 = 0.0;
        v44 = 0.0;
        v43 = 0.0;
        v41 = 0.0;
        v40 = 0.0;
        v39 = 0.0;
        v31 = v59;
        v32 = a1;
        v33 = 0.0;
        sub_10265570(a1, 0);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          &v31,
          v58,
          v30,
          v18);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v18, (int)v19, 255, 0, 0, 1, 5.0);
      }
      if ( HIBYTE(v20) )
        return sub_101C73D0(v26);
    }
    result = (int)v62 + 1;
    v62 = (float *)result;
    if ( result <= 1 )
      continue;
    break;
  }
  return result;
}
