char __thiscall sub_1014D6D0(unsigned int this, int a2, int a3, float *a4)
{
  int *v5; // edi
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // ebx
  float *v9; // ebx
  _DWORD *v10; // edi
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  float *v14; // ebx
  float *v15; // edi
  double v16; // st7
  int v17; // ecx
  double v18; // st7
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  int v22; // edi
  int v23; // edi
  float v24; // ebx
  int v25; // edx
  int v26; // edi
  int v27; // ebx
  double v28; // st6
  double v29; // st4
  double v30; // rt2
  int v31; // ecx
  double v32; // st7
  double v33; // st6
  bool v34; // c0
  bool v35; // c3
  double v36; // st6
  int v37; // edx
  int v38; // eax
  float *v39; // ecx
  int v40; // edi
  double v41; // st7
  double v42; // st4
  double v43; // st6
  double v44; // st5
  double v45; // st7
  double v46; // st4
  double v47; // st3
  double v48; // st2
  double v49; // st1
  double v50; // st4
  double v51; // rt1
  double v52; // st2
  double v53; // st1
  double v54; // st3
  double v55; // st6
  double v56; // st7
  double v57; // st4
  double v58; // st6
  double v59; // st5
  double v60; // st7
  double v61; // st4
  double v62; // st3
  double v63; // st2
  double v64; // st1
  double v65; // st4
  double v66; // rt0
  double v67; // st2
  double v68; // st1
  double v69; // st3
  double v70; // st6
  float v72; // [esp+8h] [ebp-F0h]
  float v73; // [esp+Ch] [ebp-ECh]
  float v74; // [esp+Ch] [ebp-ECh]
  float v75; // [esp+Ch] [ebp-ECh]
  float v76[24]; // [esp+20h] [ebp-D8h] BYREF
  _DWORD v77[8]; // [esp+80h] [ebp-78h] BYREF
  int v78[3]; // [esp+A0h] [ebp-58h] BYREF
  int v79[3]; // [esp+ACh] [ebp-4Ch] BYREF
  float v80; // [esp+B8h] [ebp-40h] BYREF
  float v81; // [esp+BCh] [ebp-3Ch]
  float v82; // [esp+C0h] [ebp-38h]
  int v83; // [esp+C4h] [ebp-34h] BYREF
  float v84; // [esp+C8h] [ebp-30h]
  float v85; // [esp+CCh] [ebp-2Ch]
  int v86[3]; // [esp+D0h] [ebp-28h] BYREF
  float v87; // [esp+DCh] [ebp-1Ch] BYREF
  int v88; // [esp+E0h] [ebp-18h]
  float v89; // [esp+E4h] [ebp-14h] BYREF
  int v90; // [esp+E8h] [ebp-10h]
  int v91; // [esp+ECh] [ebp-Ch] BYREF
  float v92; // [esp+F0h] [ebp-8h]
  float v93; // [esp+F4h] [ebp-4h]

  v5 = (int *)(this + 220);
  v6 = *(_DWORD *)(this + 220) - (int)*(float *)(a2 + 52);
  if ( *(_DWORD *)(this + 220) != v6 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)this + 464))(this, this + 220);
    *v5 = v6;
  }
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  v89 = (float)*v5;
  sub_1010C270((float *)(this + 896), 1, (__int16 *)&v89);
  sub_1010DA50(
    (_DWORD *)(this + 896),
    *(_DWORD *)(this + 896),
    *(_DWORD *)(this + 900),
    *(_DWORD *)(this + 904),
    *(_DWORD *)(this + 908),
    *(_DWORD *)(this + 912),
    __SPAIR64__(this, v8),
    0.0);
  v9 = a4;
  v10 = (_DWORD *)a2;
  if ( !*(_BYTE *)(this + 1016) )
  {
    v11 = *(_DWORD *)(a2 + 44);
    *(float *)&v91 = a4[3] - *a4;
    v92 = a4[4] - a4[1];
    v93 = a4[5] - a4[2];
    if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
    sub_1014C960((char *)this, v12, (float *)&v91);
  }
  v13 = v10[16];
  if ( (v13 & 0x82) == 0 )
  {
    if ( (v13 & 0x240) == 0 )
      return v13;
    if ( *(_DWORD *)(this + 1020) == 1 )
    {
      v21 = v10[11];
      if ( v21 != -1 && off_1061BE18[4 * (v10[11] & 0xFFF) + 2] == v21 >> 12 && off_1061BE18[4 * (v10[11] & 0xFFF) + 1] )
      {
        v22 = sub_1001E870(v10);
        if ( (*(_DWORD *)(v22 + 252) & 0x800) != 0 )
          sub_100DAE60(v22);
        sub_1014B360((float *)this, (float *)(v22 + 580), (float *)&a2, &v89);
      }
      else
      {
        sub_1014B360((float *)this, v9 + 3, (float *)&a2, &v89);
      }
      v23 = (int)*(float *)&a2;
      LODWORD(v24) = (int)v89;
      v13 = v23 - 4;
      v25 = v23 + 4;
      v89 = v24;
      a2 = v23 - 4;
      v88 = v23 + 4;
      if ( !__OFSUB__(v23 - 4, v23 + 4) )
      {
        v90 = 4;
        do
        {
          v26 = LODWORD(v24) - 4;
          if ( !__OFSUB__(LODWORD(v24) - 4, LODWORD(v24) + 4) )
          {
            v87 = COERCE_FLOAT(abs32(v90));
            v27 = 4;
            do
            {
              if ( (int)(LODWORD(v87) + abs32(v27)) < (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4
                                                                                           + 8))(
                                                        dword_106B31E4,
                                                        2,
                                                        5) )
              {
                *(float *)&v91 = *(float *)a3 * 500.0;
                v92 = *(float *)(a3 + 4) * 500.0;
                v93 = 500.0 * *(float *)(a3 + 8);
                sub_1014C280(this, a2, v26, (float *)&v91, (int)(a4 + 3));
              }
              ++v26;
              --v27;
            }
            while ( v26 < LODWORD(v89) + 4 );
            v25 = v88;
            v24 = v89;
            v13 = a2;
          }
          --v90;
          a2 = ++v13;
        }
        while ( v13 < v25 );
      }
      return v13;
    }
    if ( *(float *)(a3 + 4) * *(float *)(this + 996)
       + *(float *)(this + 992) * *(float *)a3
       + *(float *)(a3 + 8) * *(float *)(this + 1000) <= 0.0 )
      v28 = -3000.0;
    else
      v28 = 3000.0;
    v13 = *(_DWORD *)(this + 976) * *(_DWORD *)(this + 980);
    v29 = *(float *)(this + 1000);
    v30 = *(float *)(this + 996) * v28;
    *(float *)v86 = *(float *)(this + 992) * v28;
    v31 = *(int *)(this + 1024);
    *(float *)&v86[1] = v30;
    a4 = (float *)v13;
    a2 = v31;
    *(float *)&v86[2] = v28 * v29;
    if ( v31 >= v13 )
      return v13;
    v32 = (double)a2;
    v33 = (double)(int)a4 * 0.1;
    v34 = v33 < v32;
    v35 = v33 == v32;
    v36 = *(float *)(this + 992) * -1.0;
    if ( !v34 && !v35 )
    {
      *(float *)&v91 = v36;
      v92 = *(float *)(this + 996) * -1.0;
      v93 = -1.0 * *(float *)(this + 1000);
      sub_10422540(&v91, v79);
      v73 = (double)*(int *)(this + 980) * *(float *)(this + 988);
      v72 = (double)*(int *)(this + 976) * *(float *)(this + 984);
      sub_1014B430(this, (float *)(this + 1004), (int)v79, (float *)v86, (int)(v9 + 3), v72, v73, 7);
      LOBYTE(v13) = sub_1014D260((int *)this);
      return v13;
    }
    *(float *)&v83 = v36;
    v84 = *(float *)(this + 996) * -1.0;
    v85 = -1.0 * *(float *)(this + 1000);
    sub_10422540(&v83, v78);
    sub_104222B0(v78, 0, &v91, &v80);
    *(float *)&v37 = 0.0;
    *(float *)&a2 = 0.0;
    if ( *(int *)(this + 976) <= 0 )
      goto LABEL_75;
    a3 = 257;
LABEL_61:
    v38 = *(_DWORD *)(this + 980);
    *(float *)&v39 = 0.0;
    v40 = 0;
    *(float *)&a4 = 0.0;
    if ( v38 <= 0 )
      goto LABEL_74;
    while ( v37 < 0
         || v37 >= *(_DWORD *)(this + 976)
         || v40 < 0
         || v40 >= v38
         || -1.0 == *(float *)(this + 4 * (v40 + a3)) )
    {
      if ( (int)v39 > 0 )
      {
        v88 = v40 - (_DWORD)v39;
        v41 = (double)(v40 - (int)v39);
        v42 = *(float *)(this + 988);
        v43 = v80 * v41 * v42;
        v44 = v81 * v41 * v42;
        v45 = v41 * v82 * v42;
        v46 = (double)a2;
        v47 = *(float *)&v91 * v46;
        v48 = v92 * v46;
        v49 = *(float *)(this + 984);
        v50 = v46 * v93 * v49;
        v51 = v48 * v49;
        v52 = v47 * v49 + *(float *)(this + 1004);
        v53 = *(float *)(this + 1012);
        v54 = v43 + v52;
        v55 = v51 + *(float *)(this + 1008);
        *(float *)&v83 = v54;
        v84 = v44 + v55;
        v85 = v45 + v50 + v53;
        v74 = (double)(int)a4 * *(float *)(this + 988);
        sub_1014B430(this, (float *)&v83, (int)v78, (float *)v86, (int)(v9 + 3), *(float *)(this + 984), v74, 7);
        v37 = a2;
        *(float *)&v39 = 0.0;
        goto LABEL_70;
      }
LABEL_71:
      v38 = *(_DWORD *)(this + 980);
      if ( ++v40 >= v38 )
      {
        if ( *(float *)&v39 != 0.0 )
        {
          v88 = v40 - (_DWORD)v39;
          v56 = (double)(v40 - (int)v39);
          v57 = *(float *)(this + 988);
          v58 = v80 * v56 * v57;
          v59 = v81 * v56 * v57;
          v60 = v56 * v82 * v57;
          v61 = (double)a2;
          v62 = *(float *)&v91 * v61;
          v63 = v92 * v61;
          v64 = *(float *)(this + 984);
          v65 = v61 * v93 * v64;
          v66 = v63 * v64;
          v67 = v62 * v64 + *(float *)(this + 1004);
          v68 = *(float *)(this + 1012);
          v69 = v58 + v67;
          v70 = v66 + *(float *)(this + 1008);
          *(float *)v79 = v69;
          *(float *)&v79[1] = v59 + v70;
          *(float *)&v79[2] = v60 + v65 + v68;
          v75 = (double)(int)a4 * *(float *)(this + 988);
          sub_1014B430(this, (float *)v79, (int)v78, (float *)v86, (int)(v9 + 3), *(float *)(this + 984), v75, 7);
          v37 = a2;
        }
LABEL_74:
        a3 += 16;
        a2 = ++v37;
        if ( v37 >= *(_DWORD *)(this + 976) )
        {
LABEL_75:
          LOBYTE(v13) = sub_1014D260((int *)this);
          return v13;
        }
        goto LABEL_61;
      }
    }
    v39 = (float *)((char *)v39 + 1);
LABEL_70:
    a4 = v39;
    goto LABEL_71;
  }
  v14 = v9 + 3;
  sub_1014B360((float *)this, v14, &v87, &v89);
  a2 = (int)v87;
  v15 = (float *)a3;
  v16 = *(float *)a3;
  v90 = (int)v89;
  *(float *)&v91 = v16 * 500.0;
  v92 = *(float *)(a3 + 4) * 500.0;
  v93 = 500.0 * *(float *)(a3 + 8);
  LOBYTE(v13) = sub_1014C280(this, a2, v90, (float *)&v91, (int)v14);
  if ( (_BYTE)v13 )
  {
    sub_1001F130(v76);
    v76[6] = a4[6];
    v76[7] = a4[7];
    v76[8] = a4[8];
    v76[0] = *v14;
    v76[1] = v14[1];
    v76[2] = v14[2];
    sub_10219BB0(v77);
    v77[0] = &CPASFilter::`vftable';
    sub_1021A370(v76);
    sub_10219AA0(1);
    ((void (__stdcall *)(_DWORD *, _DWORD, float *, const char *, float *))(*off_1065C5EC)[38])(
      v77,
      0.0,
      v76,
      "GlassImpact",
      v76);
    LOBYTE(v13) = std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v77);
  }
  if ( !*(_DWORD *)(this + 1020) )
  {
    v17 = a2;
    v18 = v87 - (double)a2;
    *(float *)&a4 = v89 - (double)v90;
    if ( v18 <= 0.8 || a2 == *(_DWORD *)(this + 976) - 1 )
    {
      if ( v18 >= 0.2 || *(float *)&a2 == 0.0 )
      {
LABEL_24:
        if ( *(float *)&a4 <= 0.8 || v90 == *(_DWORD *)(this + 980) - 1 )
        {
          if ( *(float *)&a4 >= 0.2 || !v90 )
          {
LABEL_31:
            *(float *)&v13 = COERCE_FLOAT(
                               (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                 dword_106B31E4,
                                 0,
                                 1));
            if ( *(float *)&v13 == 0.0 )
            {
              *(float *)&v91 = *v15 * 1000.0;
              v92 = v15[1] * 1000.0;
              v93 = 1000.0 * v15[2];
              sub_1014C280(this, a2, v90 + 1, (float *)&v91, (int)v14);
              *(float *)&v13 = COERCE_FLOAT(
                                 (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                   dword_106B31E4,
                                   0,
                                   1));
              if ( *(float *)&v13 == 0.0 )
              {
                *(float *)&v91 = *v15 * 1000.0;
                v92 = v15[1] * 1000.0;
                v93 = 1000.0 * v15[2];
                LOBYTE(v13) = sub_1014C280(this, a2, v90 + 2, (float *)&v91, (int)v14);
              }
            }
            return v13;
          }
          v20 = v90 - 1;
        }
        else
        {
          v20 = v90 + 1;
        }
        *(float *)&v91 = *v15 * 500.0;
        v92 = v15[1] * 500.0;
        v93 = 500.0 * v15[2];
        sub_1014C280(this, v17, v20, (float *)&v91, (int)v14);
        goto LABEL_31;
      }
      v19 = a2 - 1;
    }
    else
    {
      v19 = a2 + 1;
    }
    *(float *)&v91 = *v15 * 500.0;
    v92 = v15[1] * 500.0;
    v93 = 500.0 * v15[2];
    sub_1014C280(this, v19, v90, (float *)&v91, (int)v14);
    v17 = a2;
    goto LABEL_24;
  }
  return v13;
}
