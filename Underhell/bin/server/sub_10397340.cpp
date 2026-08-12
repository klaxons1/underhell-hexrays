void __thiscall sub_10397340(int this)
{
  _DWORD *v2; // ebx
  int v3; // eax
  char *v4; // eax
  float *v5; // edi
  float *v6; // eax
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  float *v12; // edi
  float *v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  _DWORD **v22; // eax
  float *v23; // edi
  float *v24; // eax
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // eax
  float *v28; // eax
  int v29; // eax
  double v30; // st7
  double v31; // st7
  int v32; // eax
  float *v33; // eax
  _DWORD *v34; // eax
  float v35; // ebx
  int *v36; // edx
  int v37; // edi
  unsigned int v38; // eax
  int v39; // ecx
  const char *v40; // ecx
  const char *v41; // eax
  int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // eax
  unsigned int v45; // edx
  int v46; // edi
  const char *v47; // edi
  const char *v48; // edx
  int v49; // eax
  float *v50; // edi
  double v51; // st7
  int v52; // eax
  int v53; // edi
  float *v54; // ebx
  float *v55; // eax
  float *v56; // eax
  int v57; // [esp+4h] [ebp-3Ch]
  _BYTE v58[12]; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v59[12]; // [esp+20h] [ebp-20h] BYREF
  float v60; // [esp+2Ch] [ebp-14h]
  float v61; // [esp+30h] [ebp-10h]
  float v62; // [esp+34h] [ebp-Ch]
  unsigned __int8 v63[4]; // [esp+38h] [ebp-8h] BYREF
  float v64; // [esp+3Ch] [ebp-4h]

  sub_10094C40(this);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v2 = (_DWORD *)sub_10261B20();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) == 3 )
    {
      v3 = *(_DWORD *)(this + 2796);
      if ( !v3 )
        goto LABEL_100;
      v4 = *(char **)(v3 + 4);
      if ( !v4 || !*v4 )
        v4 = 0;
      if ( v4 == dword_10690428 )
      {
        if ( *(_DWORD *)(this + 2324) == 4
          || !sub_10023D10((_DWORD *)this, 32)
          && (v5 = (float *)sub_10019640(v2),
              v6 = (float *)sub_10019640((_DWORD *)this),
              v7 = v6[1] - v5[1],
              v8 = v7 * v7,
              v9 = *v6 - *v5,
              v10 = v8,
              v11 = v6[2] - v5[2],
              v9 * v9 + v10 + v11 * v11 > 360000.0) )
        {
          sub_1004AFC0((_DWORD *)this);
        }
      }
      else
      {
LABEL_100:
        if ( *(_DWORD *)(this + 2324) != 4 && sub_10023D10((_DWORD *)this, 32) )
        {
          v12 = (float *)sub_10019640(v2);
          v13 = (float *)sub_10019640((_DWORD *)this);
          v14 = v13[1] - v12[1];
          v15 = v14 * v14;
          v16 = *v13 - *v12;
          v17 = v15;
          v18 = v13[2] - v12[2];
          if ( v16 * v16 + v17 + v18 * v18 < 90000.0 && (!*(_DWORD *)(dword_10698344 + 48) || !*(_DWORD *)(this + 2796)) )
            sub_1004AF40((void *)this, dword_10690428);
        }
      }
    }
    *(float *)(this + 5624) = 0.0;
    if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5628) > -0.001
      && (*(float *)(this + 2744) == 0.0 || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2744) > 20.0) )
    {
      sub_100925F0((float *)(this + 5628), 4.0, 8.0);
    }
    v19 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this);
    if ( sub_10050FC0(v19) )
    {
      v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this);
      v21 = sub_10050FC0(v20);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 320))(v21)
        || sub_1001F080((float *)(this + 2456), &flt_10689730) )
      {
        v22 = (_DWORD **)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this);
        if ( sub_10050C40(v22) )
        {
          if ( *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this) + 40) > 0.1
            && sub_102A9EA0((float *)this) > 0.1 )
          {
            v23 = (float *)sub_10019640(v2);
            v24 = (float *)sub_10019640((_DWORD *)this);
            v60 = *v24 - *v23;
            v61 = v24[1] - v23[1];
            v62 = v24[2] - v23[2];
            v64 = off_10689714();
            if ( !sub_10023D10((_DWORD *)this, 1)
              || (v25 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this),
                  v26 = sub_10050FC0(v25),
                  (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 320))(v26))
              && (v27 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this),
                  *(float *)(v27 + 40) + *(float *)(v27 + 40) < v64)
              && (v28 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v2 + 924))(v2, v59),
                  v28[1] * v61 + v60 * *v28 + v28[2] * v62 < 0.0) )
            {
              v29 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2424))(this);
              v30 = v64 / *(float *)(v29 + 40);
              if ( v30 <= 10.0 )
              {
                if ( v30 <= 5.0 )
                {
                  if ( v30 <= 3.0 )
                    v31 = 1.1;
                  else
                    v31 = 1.25;
                }
                else
                {
                  v31 = 1.5;
                }
              }
              else
              {
                v31 = 2.0;
              }
              v32 = *v2;
              v64 = v31;
              v33 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v32 + 536))(v2, v59);
              sub_100D7A40(v33);
              *(float *)(this + 5624) = v31;
              if ( sub_102A9EA0((float *)this) > *(float *)(this + 5624) )
                *(float *)(this + 5624) = sub_102A9EA0((float *)this);
              *(float *)(this + 5624) = *(float *)(this + 5624) * v64;
            }
          }
        }
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2400))(this) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2404))(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2368))(this);
  v34 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
  v35 = COERCE_FLOAT(sub_10077AB0(v34, v63));
  v64 = v35;
  while ( v35 != 0.0 )
  {
    if ( *(_DWORD *)LODWORD(v35) != -1 )
    {
      v36 = &off_1061BE18[4 * (*(_DWORD *)LODWORD(v35) & 0xFFF) + 1];
      v37 = *(_DWORD *)LODWORD(v35) >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)LODWORD(v35) & 0xFFF) + 2] == v37 )
      {
        if ( *v36 )
        {
          v38 = *(_DWORD *)(*v36 + 300);
          if ( v38 != -1 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(*v36 + 300) & 0xFFF) + 2] == v38 >> 12 )
            {
              v39 = off_1061BE18[4 * (*(_DWORD *)(*v36 + 300) & 0xFFF) + 1];
              if ( v39 )
              {
                v40 = *(const char **)(v39 + 92);
                if ( !v40 )
                  v40 = String;
                v41 = dword_106EA244;
                if ( !dword_106EA244 )
                  v41 = String;
                if ( v40 == v41 )
                {
                  v35 = v64;
LABEL_62:
                  if ( *(_DWORD *)LODWORD(v35) == -1
                    || off_1061BE18[4 * (*(_DWORD *)LODWORD(v35) & 0xFFF) + 2] != *(_DWORD *)LODWORD(v35) >> 12 )
                  {
                    v42 = 0;
                  }
                  else
                  {
                    v42 = off_1061BE18[4 * (*(_DWORD *)LODWORD(v35) & 0xFFF) + 1];
                  }
                  *(_BYTE *)(LODWORD(v35) + 54) = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v42) < 3;
                  *(_BYTE *)(LODWORD(v35) + 53) = 0;
                  goto LABEL_67;
                }
              }
            }
            v35 = v64;
          }
        }
        if ( v36[1] == v37 && *v36 && (*(int (__thiscall **)(int))(*(_DWORD *)*v36 + 220))(*v36) == 20 )
          goto LABEL_62;
      }
    }
LABEL_67:
    v43 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
    v35 = COERCE_FLOAT(sub_10077340(v43, v63));
    v64 = v35;
  }
  v44 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  *(_BYTE *)(this + 4449) = 0;
  if ( v44 )
  {
    v45 = v44[75];
    if ( v45 != -1 && off_1061BE18[4 * (v44[75] & 0xFFF) + 2] == v45 >> 12 )
    {
      v46 = off_1061BE18[4 * (v44[75] & 0xFFF) + 1];
      if ( v46 )
      {
        v47 = *(const char **)(v46 + 92);
        if ( !v47 )
          v47 = String;
        v48 = dword_106EA244;
        if ( !dword_106EA244 )
          v48 = String;
        if ( v47 == v48 )
          goto LABEL_78;
      }
    }
    if ( (*(int (__thiscall **)(_DWORD *))(*v44 + 220))(v44) == 20 )
LABEL_78:
      *(_BYTE *)(this + 4449) = 1;
  }
  sub_10023E00((char *)this, 77);
  if ( sub_100697A0((_DWORD *)this, 28, 1) )
  {
    v49 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 8);
    v50 = (float *)v49;
    if ( v49 )
    {
      if ( (*(_DWORD *)(v49 + 16) & 0x400000) != 0 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v57 = *(_DWORD *)(this + 1676);
        v60 = v50[9] - *(float *)(this + 580);
        v61 = v50[10] - *(float *)(this + 584);
        v62 = v50[11] - *(float *)(this + 588);
        v51 = sub_100737B0(v57);
        if ( v61 * v61 + v60 * v60 + v62 * v62 > (v51 + v51 + 350.0) * (v51 + v51 + 350.0) )
          sub_10023CB0((char *)this, 77);
      }
    }
  }
  v52 = *(_DWORD *)(this + 2324);
  if ( v52 == 1 || v52 == 2 || v52 == 3 || v52 == 4 && *(_BYTE *)(this + 4413) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2364))(this);
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1
    && *(_DWORD *)(dword_10698344 + 48)
    && !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && sub_10023D10((_DWORD *)this, 55) )
  {
    v53 = sub_10261B20();
    v54 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 504))(this, v59);
    v55 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v53 + 504))(v53, v58);
    v60 = *v55 - *v54;
    v61 = v55[1] - v54[1];
    v62 = 0.0;
    off_10689714();
    v56 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 920))(this, v58);
    if ( v56[1] * v61 + v60 * *v56 + v56[2] * v62 > 0.707106781187 )
      sub_10023E00((char *)this, 55);
  }
}
