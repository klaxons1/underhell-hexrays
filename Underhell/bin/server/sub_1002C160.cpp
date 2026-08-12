void __userpurge sub_1002C160(_DWORD *a1@<ecx>, double a2@<st0>, float *a3)
{
  int v4; // eax
  char v5; // cl
  _DWORD *v6; // eax
  int v7; // eax
  char v8; // cl
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // cl
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // cl
  _DWORD *v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  char v27; // cl
  _DWORD *v28; // eax
  char v29; // cl
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  char v36; // cl
  _DWORD *v37; // eax
  int v38; // eax
  char v39; // cl
  _DWORD *v40; // eax
  int v41; // eax
  int v42; // eax
  float *v43; // eax
  float *v44; // eax
  double v45; // st7
  int v46; // eax
  void (__thiscall *v47)(_DWORD *, int, float *, _DWORD); // edx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  char v51; // cl
  _DWORD *v52; // eax
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // eax
  int v56; // eax
  int v57; // eax
  double v58; // st7
  void (__thiscall *v59)(_DWORD *); // edx
  int v60; // eax
  char v61; // cl
  _DWORD *v62; // eax
  int v63; // eax
  char v64; // cl
  _DWORD *v65; // eax
  bool v66; // zf
  float v67; // eax
  int v68; // eax
  float v69; // edi
  int v70; // eax
  int v71; // eax
  float *v72; // eax
  int v73; // ecx
  double v74; // st6
  double v75; // st5
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  char v82; // [esp+8h] [ebp-44h]
  _DWORD *v83; // [esp+Ch] [ebp-40h]
  int v84; // [esp+Ch] [ebp-40h]
  _DWORD *v85; // [esp+10h] [ebp-3Ch]
  float v86; // [esp+10h] [ebp-3Ch]
  int v87; // [esp+10h] [ebp-3Ch]
  float v88; // [esp+10h] [ebp-3Ch]
  _BYTE v89[12]; // [esp+20h] [ebp-2Ch] BYREF
  float v90[3]; // [esp+2Ch] [ebp-20h] BYREF
  float v91; // [esp+38h] [ebp-14h] BYREF
  float v92; // [esp+3Ch] [ebp-10h]
  float v93; // [esp+40h] [ebp-Ch]
  float v94; // [esp+44h] [ebp-8h]
  float v95; // [esp+48h] [ebp-4h] BYREF
  float v96; // [esp+54h] [ebp+8h]
  int v97; // [esp+54h] [ebp+8h]

  (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
  v4 = sub_1007DB30(28);
  if ( v4 != -1 )
  {
    v5 = v4;
    if ( v4 != 999999999 )
    {
      v6 = &a1[((v4 - 1000000000) >> 5) + 548];
      *v6 &= ~(1 << (v5 & 0x1F));
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
  v7 = sub_1007DB30(29);
  if ( v7 != -1 )
  {
    v8 = v7;
    if ( v7 != 999999999 )
    {
      v9 = &a1[((v7 - 1000000000) >> 5) + 548];
      *v9 &= ~(1 << (v8 & 0x1F));
    }
  }
  (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
  v10 = sub_1007DB30(26);
  v11 = (int)a3;
  if ( v10 != -1 && v10 != 999999999 && ((1 << (v10 & 0x1F)) & a1[((v10 - 1000000000) >> 5) + 548]) != 0
    || (v12 = a1[601],
        v13 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1),
        a2 = sub_100AACC0(v13),
        *(float *)(dword_106B31C8 + 12) == a2) )
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v14 = sub_1007DB30(15);
    if ( v14 != -1 && v14 != 999999999 )
      a1[((v14 - 1000000000) >> 5) + 548] &= ~(1 << (v14 & 0x1F));
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v15 = sub_1007DB30(13);
    if ( v15 != -1 )
    {
      v16 = v15;
      if ( v15 != 999999999 )
      {
        v17 = &a1[((v15 - 1000000000) >> 5) + 548];
        *v17 &= ~(1 << (v16 & 0x1F));
      }
    }
    a1[680] = -1;
    v95 = 0.0;
    LOBYTE(v12) = sub_100AB270(a3);
    if ( (_BYTE)v12
      || (a2 = *(float *)(a1[601] + 8), v94 = *(float *)(a1[601] + 8), sub_100271C0((float *)a1, a3), a2 < v94)
      && (*(unsigned __int8 (__thiscall **)(_DWORD *, float *, int, float *))(*a1 + 548))(a1, a3, 16449, &v95) )
    {
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v25 = sub_1007DB30(15);
      if ( v25 != -1 && v25 != 999999999 )
        a1[((v25 - 1000000000) >> 5) + 548] |= 1 << (v25 & 0x1F);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v26 = sub_1007DB30(10);
      if ( (_BYTE)v12 )
      {
        if ( v26 != -1 )
        {
          v27 = v26;
          if ( v26 != 999999999 )
          {
            v28 = &a1[((v26 - 1000000000) >> 5) + 548];
            *v28 |= 1 << (v27 & 0x1F);
          }
        }
      }
      else if ( v26 != -1 )
      {
        v29 = v26;
        if ( v26 != 999999999 )
        {
          v30 = &a1[((v26 - 1000000000) >> 5) + 548];
          *v30 &= ~(1 << (v29 & 0x1F));
        }
      }
      LOBYTE(v12) = 0;
      if ( (a1[679] & 0x20000) == 0 )
      {
        v31 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
        if ( v31 )
          v32 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31);
        else
          LOBYTE(v32) = -1;
        v33 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
        v85 = a1;
        v83 = a1;
        v82 = v32;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 320))(v33) )
        {
          sub_1002A0F0(a1 + 772, v32, (int)a1, (int)a1);
          v85 = a1;
          v83 = a1;
          v82 = v32;
        }
        sub_1002A0F0(a1 + 754, v82, (int)v83, (int)v85);
      }
      a1[679] |= 0x20000u;
      v11 = (int)a3;
    }
    else
    {
      if ( v95 == 0.0 )
        a1[680] = -1;
      else
        a1[680] = *(_DWORD *)(*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v95) + 8))(COERCE_FLOAT(LODWORD(v95)));
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v18 = sub_1007DB30(13);
      if ( v18 != -1 && v18 != 999999999 )
        a1[((v18 - 1000000000) >> 5) + 548] |= 1 << (v18 & 0x1F);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v19 = sub_1007DB30(10);
      if ( v19 != -1 )
      {
        v20 = v19;
        if ( v19 != 999999999 )
        {
          v21 = &a1[((v19 - 1000000000) >> 5) + 548];
          *v21 &= ~(1 << (v20 & 0x1F));
        }
      }
      if ( (a1[679] & 0x20000) != 0 )
      {
        v22 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 320))(v22) )
        {
          v23 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
          sub_1010DD80(v23, (int)a1, 0.0);
        }
        a2 = 0.0;
        v24 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
        sub_1010DD80(v24, (int)a1, 0.0);
      }
      a1[679] &= ~0x20000u;
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 264))(v11) )
  {
    sub_100271C0((float *)a1, (float *)v11);
    v95 = a2;
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v41 = sub_1007DB30(10);
    if ( v41 == -1 || (v42 = v41 - 1000000000, v42 == -1) || ((1 << (v42 & 0x1F)) & a1[(v42 >> 5) + 548]) == 0 )
    {
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v53 = sub_1007DB30(13);
      if ( v53 == -1 || (v54 = v53 - 1000000000, v54 == -1) || ((1 << (v54 & 0x1F)) & a1[(v54 >> 5) + 548]) == 0 )
      {
        if ( !sub_10023D10(a1, 10) && v95 <= 256.0 )
        {
          LOBYTE(v12) = (_BYTE)a3;
          v11 = *a1;
          v55 = sub_10019640(a3);
          (*(void (__thiscall **)(_DWORD *, float *, _DWORD *, float *))(v11 + 1876))(a1, a3, v55, a3);
        }
      }
    }
    else
    {
      v43 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 536))(v11, v90);
      if ( sub_1001F080(v43, &flt_106F1CA8) )
      {
        v96 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -0.050000001,
                0.0);
        v44 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v11 + 536))(v11, v89);
        v91 = *v44 * v96;
        v92 = v44[1] * v96;
        v45 = v96 * v44[2];
        v46 = *(_DWORD *)(v11 + 252) >> 11;
        v93 = v45;
        if ( (v46 & 1) != 0 )
          sub_100DAE60(v11);
        v47 = *(void (__thiscall **)(_DWORD *, int, float *, _DWORD))(*a1 + 1876);
        v90[0] = *(float *)(v11 + 580) - v91;
        v90[1] = *(float *)(v11 + 584) - v92;
        v90[2] = *(float *)(v11 + 588) - v93;
        v47(a1, v11, v90, 0);
      }
      else
      {
        if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
          sub_100DAE60(v11);
        (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*a1 + 1876))(a1, v11, v11 + 580, 0);
      }
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 288))(v11)
        && (v48 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 288))(v11),
            (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v48 + 876))(v48, a1)) )
      {
        sub_10023CB0((char *)a1, 28);
        sub_10023E00((char *)a1, 29);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
        v49 = sub_1007DB30(28);
        if ( v49 != -1 && v49 != 999999999 )
          a1[((v49 - 1000000000) >> 5) + 548] &= ~(1 << (v49 & 0x1F));
        (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
        v50 = sub_1007DB30(29);
        if ( v50 != -1 )
        {
          v51 = v50;
          if ( v50 != 999999999 )
          {
            v52 = &a1[((v50 - 1000000000) >> 5) + 548];
            *v52 |= 1 << (v51 & 0x1F);
          }
        }
      }
    }
    v97 = a1[724];
    if ( !sub_100CF460(a1)
      || ((*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1), v56 = sub_1007DB30(10), v56 == -1)
      || (v57 = v56 - 1000000000, v57 == -1)
      || ((1 << (v57 & 0x1F)) & a1[(v57 >> 5) + 548]) == 0 )
    {
      v58 = *(float *)&v97;
    }
    else if ( *(float *)(sub_100CF460(a1) + 1220) >= (double)*((float *)a1 + 724) )
    {
      v58 = *(float *)(sub_100CF460(a1) + 1220);
    }
    else
    {
      v58 = *((float *)a1 + 724);
    }
    v59 = *(void (__thiscall **)(_DWORD *))(*a1 + 2160);
    if ( v58 > v95 )
    {
      v59(a1);
      v63 = sub_1007DB30(27);
      if ( v63 != -1 )
      {
        v64 = v63;
        if ( v63 != 999999999 )
        {
          v65 = &a1[((v63 - 1000000000) >> 5) + 548];
          *v65 &= ~(1 << (v64 & 0x1F));
        }
      }
    }
    else
    {
      v59(a1);
      v60 = sub_1007DB30(27);
      if ( v60 != -1 )
      {
        v61 = v60;
        if ( v60 != 999999999 )
        {
          v62 = &a1[((v60 - 1000000000) >> 5) + 548];
          *v62 |= 1 << (v61 & 0x1F);
        }
      }
    }
    v66 = (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 2048))(a1) == 0;
    v67 = *(float *)a1;
    if ( v66 )
    {
      (*(void (__thiscall **)(_DWORD *))(LODWORD(v67) + 2004))(a1);
    }
    else
    {
      v86 = v95;
      v68 = (*(int (__thiscall **)(_DWORD *))(LODWORD(v67) + 368))(a1);
      sub_10026150((char *)a1, (unsigned __int8)v12, v11, v68, v86);
    }
    sub_100272C0(a1, v11);
    sub_10027450(a1, v11);
    if ( !*(_BYTE *)(a1[647] + 58) )
    {
      v69 = *(float *)a1;
      v70 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(LODWORD(v69) + 1768))(a1, v70) )
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
        v71 = sub_1007DB30(31);
        if ( v71 != -1 && v71 != 999999999 )
          a1[((v71 - 1000000000) >> 5) + 548] |= 1 << (v71 & 0x1F);
      }
    }
    v84 = (*(int (__thiscall **)(_DWORD *))(*a1 + 364))(a1);
    (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
    if ( *(float *)(dword_106B31C8 + 12) - sub_10077680(v84, 1) > 8.0 )
    {
      v87 = (*(int (__thiscall **)(_DWORD *))(*a1 + 364))(a1);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 1868))(a1);
      v72 = (float *)sub_10077560(v87);
      v91 = *v72;
      v73 = a1[63];
      v92 = v72[1];
      v93 = v72[2];
      if ( (v73 & 0x800) != 0 )
        sub_100DAE60(a1);
      v74 = v92 - *((float *)a1 + 146);
      v75 = v91 - *((float *)a1 + 145);
      v88 = v75 * v75 + v74 * v74;
      if ( off_10689708(v88) < 48.0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
        v76 = sub_1007DB30(10);
        if ( v76 == -1 || (v77 = v76 - 1000000000, v77 == -1) || ((1 << (v77 & 0x1F)) & a1[(v77 >> 5) + 548]) == 0 )
          sub_10021850(a1);
      }
      (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
      v78 = sub_1007DB30(10);
      if ( v78 == -1 || (v79 = v78 - 1000000000, v79 == -1) || ((1 << (v79 & 0x1F)) & a1[(v79 >> 5) + 548]) == 0 )
      {
        (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
        v80 = sub_1007DB30(31);
        if ( v80 != -1 )
        {
          v81 = v80 - 1000000000;
          if ( v81 != -1
            && ((1 << (v81 & 0x1F)) & a1[(v81 >> 5) + 548]) != 0
            && !(*(unsigned __int8 (__thiscall **)(_DWORD *, float *, int, _DWORD))(*a1 + 544))(a1, &v91, 16449, 0) )
          {
            sub_10021850(a1);
          }
        }
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v34 = sub_1007DB30(30);
    if ( v34 != -1 && v34 != 999999999 )
      a1[((v34 - 1000000000) >> 5) + 548] |= 1 << (v34 & 0x1F);
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v35 = sub_1007DB30(10);
    if ( v35 != -1 )
    {
      v36 = v35;
      if ( v35 != 999999999 )
      {
        v37 = &a1[((v35 - 1000000000) >> 5) + 548];
        *v37 &= ~(1 << (v36 & 0x1F));
      }
    }
    (*(void (__thiscall **)(_DWORD *))(*a1 + 2160))(a1);
    v38 = sub_1007DB30(13);
    if ( v38 != -1 )
    {
      v39 = v38;
      if ( v38 != 999999999 )
      {
        v40 = &a1[((v38 - 1000000000) >> 5) + 548];
        *v40 &= ~(1 << (v39 & 0x1F));
      }
    }
  }
}
