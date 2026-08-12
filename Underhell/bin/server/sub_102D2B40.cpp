void __userpurge sub_102D2B40(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        float *a6,
        float *a7,
        int a8,
        int a9)
{
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  float *v16; // eax
  double v17; // st7
  unsigned int v18; // eax
  int v19; // ecx
  float *v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // eax
  double v24; // st6
  double v25; // st7
  void (__thiscall *v26)(int); // eax
  int v27; // edi
  int (__thiscall *v28)(int, _DWORD *, _DWORD); // edx
  float *v29; // eax
  const char *v30; // ecx
  int v31; // eax
  int v32; // [esp+34h] [ebp-120h]
  int v33; // [esp+38h] [ebp-11Ch]
  float v35; // [esp+40h] [ebp-114h] BYREF
  float v36; // [esp+44h] [ebp-110h]
  float v37; // [esp+48h] [ebp-10Ch]
  float v38; // [esp+4Ch] [ebp-108h] BYREF
  float v39; // [esp+50h] [ebp-104h]
  float v40; // [esp+54h] [ebp-100h]
  _DWORD v41[8]; // [esp+98h] [ebp-BCh] BYREF
  float v42[3]; // [esp+B8h] [ebp-9Ch] BYREF
  const char *v43; // [esp+C4h] [ebp-90h]
  float v44; // [esp+C8h] [ebp-8Ch]
  int v45; // [esp+CCh] [ebp-88h]
  int v46; // [esp+D0h] [ebp-84h]
  int v47; // [esp+D4h] [ebp-80h]
  int v48; // [esp+D8h] [ebp-7Ch]
  float v49; // [esp+DCh] [ebp-78h]
  int v50; // [esp+E0h] [ebp-74h]
  __int16 v51; // [esp+E4h] [ebp-70h]
  char v52; // [esp+E6h] [ebp-6Eh]
  int v53; // [esp+E8h] [ebp-6Ch]
  int v54[5]; // [esp+ECh] [ebp-68h] BYREF
  __int16 v55; // [esp+100h] [ebp-54h]
  float v56[3]; // [esp+108h] [ebp-4Ch] BYREF
  _DWORD v57[3]; // [esp+114h] [ebp-40h] BYREF
  float v58; // [esp+120h] [ebp-34h] BYREF
  float v59; // [esp+124h] [ebp-30h]
  float v60; // [esp+128h] [ebp-2Ch]
  float v61; // [esp+12Ch] [ebp-28h] BYREF
  float v62; // [esp+130h] [ebp-24h]
  float v63; // [esp+134h] [ebp-20h]
  float v64; // [esp+138h] [ebp-1Ch] BYREF
  float v65; // [esp+13Ch] [ebp-18h]
  float v66; // [esp+140h] [ebp-14h]
  int v67; // [esp+144h] [ebp-10h]
  _DWORD v68[3]; // [esp+148h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+154h] [ebp+0h]

  v68[0] = a2;
  v68[1] = retaddr;
  v62 = flt_10689734;
  v10 = *(_DWORD *)(a1 + 808);
  v33 = a3;
  v61 = flt_10689730;
  v63 = flt_10689738;
  if ( v10 != -1 && (v11 = &off_1061BE18[4 * (v10 & 0xFFF) + 1], v12 = v10 >> 12, v11[1] == v12) && *v11 )
  {
    *(float *)&v67 = *(float *)(a1 + 1400) * 1.1;
    if ( v11[1] == v12 )
      v13 = *v11;
    else
      v13 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v13 + 284))(v13, a3) )
      *(float *)&v67 = 1.25;
    v14 = *(_DWORD *)(a1 + 808);
    if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 2] != v14 >> 12 )
      v15 = 0;
    else
      v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 1];
    v16 = (float *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v15 + 536))(v15, v57);
    v64 = *v16 * *(float *)&v67;
    v65 = v16[1] * *(float *)&v67;
    v17 = *(float *)&v67 * v16[2];
    v18 = *(_DWORD *)(a1 + 808);
    v66 = v17;
    if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
      v19 = 0;
    else
      v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
    v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
    v58 = *v20 + v64;
    v59 = v20[1] + v65;
    v60 = v20[2] + v66;
    v63 = v60;
    v61 = v58;
    v62 = v59;
    *(float *)&v67 = COERCE_FLOAT(sub_10219A30());
    v64 = (double)v67 * 0.000030518509 * 144.0 - 72.0;
    *(float *)&v67 = COERCE_FLOAT(sub_10219A30());
    v21 = *(_DWORD *)(a1 + 808);
    v65 = (double)v67 * 0.000030518509 * 144.0 - 72.0;
    if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
      v22 = 0;
    else
      v22 = off_1061BE18[4 * (v21 & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 220))(v22) != 6 )
    {
      v61 = v58 + v64;
      v62 = v65 + v59;
      v63 = v60;
    }
  }
  else if ( sub_102C9B50(a1) )
  {
    sub_102CC260(a1, (int)v68, a3, a1, &v61);
  }
  else
  {
    if ( !sub_102C9BB0((_DWORD *)a1) )
      return;
    sub_102CC3D0(a1, &v61);
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v23 = *(_DWORD *)(a1 + 252) >> 11;
  v24 = *(float *)(a1 + 584) + v62;
  v64 = (v61 + *(float *)(a1 + 580)) * 0.5;
  v65 = 0.5 * v24;
  if ( (v23 & 1) != 0 )
    sub_100DAE60(a1);
  v25 = *(float *)(a1 + 588);
  v66 = *(float *)(a1 + 588);
  v58 = v64;
  v59 = v65;
  v60 = v25 + 1024.0;
  sub_1001F180(v42, &v64, &v58);
  sub_10265570(v57, 0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, float *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v42,
    16395,
    v57,
    &v35,
    v33,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)&v35, (int)&v38, 255, 0, 0, 1, 5.0);
  v64 = v38;
  v65 = v39;
  v66 = v40;
  sub_1001F180(v42, &v64, &v61);
  sub_10265570(v57, 0, 0);
  v26 = *(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16);
  v36 = COERCE_FLOAT(&v35);
  v35 = COERCE_FLOAT(v57);
  v26(dword_106B31F4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)&v35, (int)&v38, 255, 0, 0, 1, 5.0);
  if ( *(_DWORD *)(dword_106DE564 + 48) )
    sub_1011BC50(&v35, &v38, 255, 0, 0, 0, 5.0);
  if ( *(_DWORD *)(a1 + 1404) )
  {
    v27 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)a1 + 580))(a1, v57);
    sub_10219BB0(v41);
    v41[0] = &CPASFilter::`vftable';
    sub_1021A370(v41, v27);
    v28 = *(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)a1 + 580);
    v41[0] = &CPASAttenuationFilter::`vftable';
    v29 = (float *)v28(a1, v57, 0.80000001);
    sub_1021A0E0(v41, v29, COERCE_FLOAT(v42));
    v49 = 0.0;
    v51 = 1;
    LODWORD(v42[2]) = 1;
    v30 = *(const char **)(a1 + 1404);
    v46 = 0;
    v47 = 100;
    v48 = 0;
    v50 = 0;
    v52 = 0;
    v53 = -1;
    memset(v54, 0, sizeof(v54));
    v55 = -1;
    v43 = v30;
    if ( !v30 )
      v43 = String;
    v45 = 0;
    v44 = 1.0;
    v32 = *(_DWORD *)(a1 + 24);
    v31 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0);
    sub_1023BE40(v41, v31, v32);
    sub_102375F0(v54);
    std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v41);
  }
  v56[0] = v38 - v35;
  v56[1] = v39 - v36;
  v56[2] = v40 - v37;
  off_10689714();
  sub_102D0190(
    (int)v68,
    (int)a6,
    a1,
    a6,
    &v38,
    v56,
    *(float *)(a1 + 1400),
    *(float *)(a1 + 1412),
    *(_DWORD *)(a1 + 1408));
  sub_102D19C0((char *)a1, a5, a6, a7, a1, a9);
}
