void __thiscall sub_10384820(int this, _BYTE *a2, float a3, int a4)
{
  double v5; // st7
  double v6; // st4
  double v7; // st5
  double v8; // st6
  double v9; // st5
  double v10; // st7
  bool v11; // cc
  double v12; // st6
  double v13; // st5
  double v14; // st7
  double v15; // rt0
  double v16; // st7
  double v17; // st7
  bool v18; // c0
  bool v19; // c3
  int v20; // ecx
  float v21; // ecx
  float v22; // edx
  float v23; // eax
  double v24; // st7
  int v25; // ecx
  double v26; // st6
  double v27; // st7
  long double v28; // st4
  int v29; // ecx
  long double v30; // st6
  int v31; // eax
  int v32; // ecx
  double v33; // st6
  double v34; // st4
  double v35; // st1
  double v36; // rtt
  double v37; // st7
  double v38; // st6
  double v39; // st5
  double v40; // st7
  double v41; // rt2
  double v42; // st6
  double v43; // st7
  _DWORD *v44; // edi
  int v45; // ebx
  float *v46; // eax
  const char *v47; // eax
  float v48; // [esp+3Ch] [ebp-150h]
  _BYTE v49[24]; // [esp+4Ch] [ebp-140h] BYREF
  float v50; // [esp+64h] [ebp-128h]
  float v51; // [esp+68h] [ebp-124h]
  float v52; // [esp+6Ch] [ebp-120h]
  float v53; // [esp+78h] [ebp-114h]
  _BYTE v54[12]; // [esp+A0h] [ebp-ECh] BYREF
  float v55[24]; // [esp+ACh] [ebp-E0h] BYREF
  int v56[14]; // [esp+10Ch] [ebp-80h] BYREF
  float v57[3]; // [esp+144h] [ebp-48h] BYREF
  float v58; // [esp+150h] [ebp-3Ch]
  float v59; // [esp+154h] [ebp-38h]
  float v60; // [esp+158h] [ebp-34h]
  float v61; // [esp+15Ch] [ebp-30h] BYREF
  float v62; // [esp+160h] [ebp-2Ch]
  float v63; // [esp+164h] [ebp-28h]
  int v64; // [esp+168h] [ebp-24h] BYREF
  float v65; // [esp+16Ch] [ebp-20h]
  float v66; // [esp+170h] [ebp-1Ch]
  float v67; // [esp+174h] [ebp-18h]
  float v68; // [esp+178h] [ebp-14h]
  float v69; // [esp+17Ch] [ebp-10h]
  float v70; // [esp+180h] [ebp-Ch] BYREF
  float v71; // [esp+184h] [ebp-8h]
  float v72; // [esp+188h] [ebp-4h]
  int savedregs; // [esp+18Ch] [ebp+0h] BYREF
  _DWORD *v74; // [esp+198h] [ebp+Ch]

  if ( !*(_DWORD *)(this + 424) || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 3912) )
    return;
  if ( a2[306] == 6 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 220))(a2) != 13 )
    sub_103839E0(this, (int)a2);
  v5 = a3;
  if ( a3 > 0.0 )
  {
    v6 = 1.0 - *(float *)(a4 + 44);
    v7 = *(float *)(this + 3628) * v5 * v6;
    v8 = *(float *)(this + 3624) * v5 * v6 * (*(float *)(this + 3624) * v5 * v6) + v7 * v7;
    v9 = v5 * *(float *)(this + 3632) * v6;
    v48 = v9 * v9 + v8;
    v10 = off_10689708(v48);
    v11 = *(_DWORD *)(this + 220) <= 0;
    v12 = *(float *)(a4 + 24) * v10;
    v13 = *(float *)(a4 + 28) * v10;
    v14 = v10 * *(float *)(a4 + 32);
    v15 = 1.0 / a3;
    v67 = v12 * v15;
    v68 = v13 * v15;
    v16 = v14 * v15;
    v69 = v16;
    if ( v11 && v16 > 0.0 )
    {
      v17 = 0.0;
    }
    else
    {
      v18 = v16 > 0.0;
      v19 = 0.0 == v16;
      v17 = 0.0;
      if ( v18 || v19 )
        goto LABEL_17;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1008D510(this, this + 580);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v17 = 0.0;
      if ( fabs(*(float *)(this + 588) - (float)0.0) >= 36.0 )
        goto LABEL_17;
    }
    v69 = v17;
LABEL_17:
    v20 = *(_DWORD *)(this + 424);
    v70 = v17;
    v71 = v17;
    v72 = 1.0;
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v20 + 228))(v20, &v61, &v70);
    if ( fabs(*(float *)(a4 + 28) * v62 + *(float *)(a4 + 24) * v61 + *(float *)(a4 + 32) * v63) < 0.25 )
    {
      sub_1001F130(v55);
      v21 = *(float *)(this + 3624);
      v55[0] = *(float *)(a4 + 12);
      v22 = *(float *)(this + 3628);
      v23 = *(float *)(this + 3632);
      v55[1] = *(float *)(a4 + 16);
      v24 = *(float *)(a4 + 20);
      v58 = v21;
      v25 = *(_DWORD *)(this + 252);
      v55[2] = v24;
      v59 = v22;
      v60 = v23;
      if ( (v25 & 0x800) != 0 )
        sub_100DAE60(this);
      v55[9] = *(float *)(this + 704);
      v55[10] = *(float *)(this + 708);
      v55[11] = *(float *)(this + 712);
      off_10689714();
      v26 = (*(float *)(a4 + 28) + v59) * 0.5;
      v27 = (*(float *)(a4 + 32) + v60) * 0.5;
      v55[6] = (*(float *)(a4 + 24) + v58) * 0.5;
      v55[7] = v26;
      v55[8] = v27;
      sub_1028E890((int)"ManhackSparks", (int)v55);
      sub_10219BB0(&v56[6]);
      v56[6] = (int)&CBroadcastRecipientFilter::`vftable';
      sub_1021A200((int)&v56[6]);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      ((void (__stdcall *)(int *, _DWORD, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*off_1065C5EC)[18])(
        &v56[6],
        0.0,
        this + 580,
        255,
        180,
        100,
        0,
        50.0,
        0.30000001,
        150.0);
      (*(void (__thiscall **)(_DWORD, _BYTE *, float *))(**(_DWORD **)(this + 424) + 204))(
        *(_DWORD *)(this + 424),
        v54,
        v57);
      v28 = v57[2] * v63 + v57[1] * v62 + v57[0] * v61;
      if ( fabs(v28) < 100.0 )
      {
        v29 = *(_DWORD *)(this + 424);
        v30 = 1000.0 - (v28 + v28);
        v70 = v61 * v30;
        v71 = v62 * v30;
        v72 = v63 * v30;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v29 + 244))(v29, &v70);
      }
      if ( (*(_BYTE *)(this + 248) & 2) == 0 )
        sub_1023C380((_DWORD *)this, (int)"NPC_Manhack.Grind", 0.0, 0);
      v31 = *(_DWORD *)(this + 252) >> 11;
      v70 = *(float *)(a4 + 24) * 24.0;
      v71 = *(float *)(a4 + 28) * 24.0;
      v72 = 24.0 * *(float *)(a4 + 32);
      if ( (v31 & 1) != 0 )
        sub_100DAE60(this);
      v32 = *(_DWORD *)(this + 252) >> 11;
      *(float *)&v64 = *(float *)(this + 580) - v70;
      v65 = *(float *)(this + 584) - v71;
      v66 = *(float *)(this + 588) - v72;
      if ( (v32 & 1) != 0 )
        sub_100DAE60(this);
      sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), (float *)&v64, 33570827, this, 0, (int)v49);
      if ( 1.0 != v53 )
      {
        v33 = (v50 + v51) * 0.0;
        if ( v52 + v33 < 0.5 && v33 - 1.0 * v52 < 0.5 )
          sub_10264E40((int)v49, (int)"ManhackCut");
      }
      std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(&v56[6]);
    }
    if ( *(_BYTE *)(a4 + 54) || *(_BYTE *)(a4 + 55) )
    {
      sub_1001F010((float *)&v64, -1.0, 1.0);
      v42 = 50.0 * v66;
      v43 = v65 * 50.0;
      *(float *)(this + 3624) = *(float *)&v64 * 50.0;
      *(float *)(this + 3628) = v43;
      *(float *)(this + 3632) = v42;
      *(float *)(this + 3912) = *(float *)(dword_106B31C8 + 12) + 0.5;
    }
    else
    {
      off_10689714();
      v34 = -(-v69 * *(float *)(a4 + 32) + -v68 * *(float *)(a4 + 28) + -v67 * *(float *)(a4 + 24));
      v35 = 2.0 * *(float *)(a4 + 32);
      v36 = *(float *)(a4 + 28) * 2.0 * v34;
      v70 = *(float *)(a4 + 24) * 2.0 * v34 - v67;
      v71 = v36 - v68;
      v37 = v34 * v35 - v69;
      v72 = v37;
      sub_100D7A40((float *)(this + 3624));
      v38 = v70 * v37;
      v39 = v71 * v37;
      v40 = v37 * v72 * 0.5 + *(float *)(this + 3632);
      v41 = v39 * 0.5 + *(float *)(this + 3628);
      *(float *)(this + 3624) = v38 * 0.5 + *(float *)(this + 3624);
      *(float *)(this + 3628) = v41;
      *(float *)(this + 3632) = v40;
    }
  }
  if ( sub_1007E040(*(_DWORD **)(this + 2588)) && (sub_100A61A0(*(int **)(*(_DWORD *)(this + 2588) + 36)) & 2) == 0 )
  {
    memset(v56, 0, sizeof(v56));
    v74 = *(_DWORD **)(this + 2588);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v44 = *(_DWORD **)(this + 2600);
    v45 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v46 = (float *)sub_1007DFE0(v74);
    sub_1007C550(v44, 0, (float *)(this + 580), v46, 33701899, v45, 100.0, 0, (float *)v56);
    if ( v56[0] < 0 )
    {
      v47 = *(const char **)(this + 92);
      if ( !v47 )
        v47 = String;
      if ( !sub_10001410((_DWORD *)v56[7], (int)v47) )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
        sub_10081C10(*(_DWORD *)(this + 2588));
      }
    }
  }
}
