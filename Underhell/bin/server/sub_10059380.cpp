void __usercall sub_10059380(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  double v8; // st7
  double v9; // st4
  double v10; // st6
  float *v11; // ebx
  int v12; // eax
  int v13; // eax
  float *v14; // eax
  float v15; // edx
  float v16; // ecx
  float v17; // eax
  int v18; // edx
  float *v19; // eax
  double v20; // st4
  double v21; // st6
  double v22; // st4
  double v23; // st5
  double v24; // st6
  double v25; // st7
  bool v26; // zf
  int v27; // edi
  int v28; // edi
  double v29; // st4
  double v30; // st6
  double v31; // st4
  double v32; // st5
  double v33; // st6
  float *v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  float *v40; // ecx
  int v41; // eax
  float *v42; // ecx
  void (__thiscall *v43)(int); // edx
  int v44; // eax
  int v45; // eax
  float *v46; // ecx
  double v47; // st6
  double v48; // st5
  int v49; // edi
  float *v50; // eax
  double v51; // st4
  double v52; // st6
  double v53; // st4
  int v54; // eax
  float v55; // [esp+10h] [ebp-30h]
  float v57; // [esp+18h] [ebp-28h]
  float v58; // [esp+20h] [ebp-20h] BYREF
  float v59; // [esp+24h] [ebp-1Ch]
  float v60; // [esp+28h] [ebp-18h]
  float v61; // [esp+2Ch] [ebp-14h]
  float v62; // [esp+30h] [ebp-10h]
  float v63; // [esp+34h] [ebp-Ch]
  float v64; // [esp+38h] [ebp-8h]
  char v65; // [esp+3Fh] [ebp-1h]

  sub_1004B420((int (__thiscall ****)(_DWORD))a1);
  if ( *(float *)(a1 + 72) != flt_106F1CA8 || *(float *)(a1 + 76) != flt_106F1CAC || *(float *)(a1 + 80) != flt_106F1CB0 )
  {
    v4 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 576))(*(_DWORD *)(a1 + 4));
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v61 = v5;
    v8 = v5 - *(float *)(a1 + 72);
    v62 = v6;
    v63 = v7;
    v9 = v6 - *(float *)(a1 + 76);
    v10 = v7 - *(float *)(a1 + 80);
    if ( v8 * v8 + v9 * v9 + v10 * v10 > 4096.0 && (unsigned __int8)sub_1004B510((void *)a1, 100006, 0) )
      sub_10044510(*(_DWORD *)(a1 + 4), (int)"Lead behavior - bad transition?");
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v11 = (float *)sub_10261B20();
      if ( v11 )
      {
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 52))(a1, a2, a3);
        v12 = sub_1007DB30(100003);
        sub_10023E00(*(char **)(a1 + 4), v12);
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
        v13 = sub_1007DB30(100007);
        sub_10023E00(*(char **)(a1 + 4), v13);
        v14 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 576))(*(_DWORD *)(a1 + 4));
        v15 = v14[1];
        v16 = *v14;
        v17 = v14[2];
        v62 = v15;
        v18 = *(_DWORD *)v11;
        v61 = v16;
        v63 = v17;
        v19 = (float *)(*(int (__thiscall **)(float *))(v18 + 576))(v11);
        v20 = v62 - v19[1];
        v21 = v20 * v20;
        v22 = v61 - *v19;
        v23 = v21;
        v24 = v63 - v19[2];
        v57 = v22 * v22 + v23 + v24 * v24;
        v25 = off_10689708(v57);
        v64 = v25;
        if ( *(float *)(a1 + 104) * 4.0 >= v25 )
          goto LABEL_21;
        v26 = *(_BYTE *)(a1 + 140) == 0;
        v65 = 1;
        if ( !v26 || (unsigned __int8)sub_1004B510((void *)a1, 100000, 0) )
        {
          *(_BYTE *)(a1 + 140) = 0;
          if ( *(int *)(dword_106B31C8 + 20) <= 1 )
            v27 = sub_10261B20();
          else
            v27 = 0;
          if ( (*(_DWORD *)(v27 + 252) & 0x800) != 0 )
            sub_100DAE60(v27);
          if ( sub_10058C60((_DWORD *)a1, (float *)(v27 + 580), &v58) )
          {
            v28 = *(_DWORD *)(a1 + 4);
            if ( (*(_DWORD *)(v28 + 252) & 0x800) != 0 )
              sub_100DAE60(*(_DWORD *)(a1 + 4));
            v29 = v59 - *(float *)(v28 + 584);
            v30 = v29 * v29;
            v31 = v58 - *(float *)(v28 + 580);
            v32 = v30;
            v33 = v60 - *(float *)(v28 + 588);
            if ( v31 * v31 + v32 + v33 * v33 > 1024.0 )
LABEL_21:
              v65 = 0;
          }
        }
        if ( *(float *)(a1 + 104) * 4.0 <= v64 )
          goto LABEL_33;
        (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v11 + 536))(v11, &v58);
        if ( off_10689714() <= 50.0 )
          goto LABEL_33;
        if ( ((_DWORD)v11[63] & 0x800) != 0 )
          sub_100DAE60(v11);
        v34 = (float *)sub_1004BF30((_DWORD *)a1);
        v61 = *v34 - v11[145];
        v62 = v34[1] - v11[146];
        v63 = v34[2] - v11[147];
        off_10689714();
        if ( v59 * v62 + v61 * v58 + v60 * v63 <= 0.5 )
        {
LABEL_33:
          if ( v65 )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
            v37 = sub_1007DB30(100001);
            sub_10023CB0(*(char **)(a1 + 4), v37);
            (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
            v38 = sub_1007DB30(100002);
            sub_10023E00(*(char **)(a1 + 4), v38);
            goto LABEL_30;
          }
        }
        else
        {
          sub_1004C1E0((char **)a1, 100007);
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
        v35 = sub_1007DB30(100001);
        sub_10023E00(*(char **)(a1 + 4), v35);
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
        v36 = sub_1007DB30(100002);
        sub_10023CB0(*(char **)(a1 + 4), v36);
        if ( *(float *)(a1 + 104) > (double)v64 )
          sub_1004C1E0((char **)a1, 100003);
LABEL_30:
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *))(**(_DWORD **)(a1 + 4) + 548))(
               *(_DWORD *)(a1 + 4),
               v11)
          && (unsigned __int8)sub_100AB070(v11) )
        {
          sub_1004C1E0((char **)a1, 100005);
          *(_BYTE *)(a1 + 180) = 0;
        }
        else
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
          v39 = sub_1007DB30(100005);
          sub_10023E00(*(char **)(a1 + 4), v39);
          v40 = (float *)(a1 + 176);
          if ( *(_BYTE *)(a1 + 180) )
          {
            if ( sub_1001ED80(v40) )
            {
              sub_1004C1E0((char **)a1, 100001);
              sub_1004C260((char **)a1, 100002);
            }
          }
          else
          {
            sub_1001EE20(v40);
          }
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
        v41 = sub_1007DB30(100001);
        if ( !sub_10023D10(*(_DWORD **)(a1 + 4), v41) )
        {
          if ( *(_BYTE *)(a1 + 60) && *(_BYTE *)(a1 + 124) )
          {
            if ( (unsigned __int8)sub_102273D0(*(_DWORD *)(a1 + 4), 1) )
              sub_102273B0(*(_DWORD *)(a1 + 4), 0);
            *(_BYTE *)(a1 + 124) = 0;
          }
          v43 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 52);
          *(_BYTE *)(a1 + 164) = 0;
          v43(a1);
          v44 = sub_1007DB30(100000);
          sub_10023E00(*(char **)(a1 + 4), v44);
          goto LABEL_56;
        }
        if ( !*(_BYTE *)(a1 + 122) )
          goto LABEL_41;
        if ( *(_BYTE *)(a1 + 60) && !*(_BYTE *)(a1 + 124) && (unsigned __int8)sub_102273D0(*(_DWORD *)(a1 + 4), 1) )
        {
          sub_10227390(*(_DWORD *)(a1 + 4), 0);
          *(_BYTE *)(a1 + 124) = 1;
        }
        v42 = (float *)(a1 + 160);
        if ( *(_BYTE *)(a1 + 164) )
        {
          if ( sub_1001ED80(v42) )
LABEL_41:
            sub_1004C1E0((char **)a1, 100000);
        }
        else
        {
          sub_1001EE20(v42);
        }
LABEL_56:
        if ( (*(_BYTE *)(a1 + 24) & 1) == 0 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
          v45 = sub_1007DB30(100004);
          sub_10023E00(*(char **)(a1 + 4), v45);
          v46 = *(float **)(a1 + 4);
          if ( fabs(v46[181] - *(float *)(a1 + 80)) < 64.0 )
          {
            v47 = v46[180] - *(float *)(a1 + 76);
            v48 = v46[179] - *(float *)(a1 + 72);
            v55 = v48 * v48 + v47 * v47;
            if ( off_10689708(v55) <= 64.0 )
            {
              if ( sub_1004C220((_DWORD **)a1, 100003)
                || 0.0 != *(float *)(a1 + 112)
                && (v49 = *(_DWORD *)(a1 + 4),
                    v50 = (float *)sub_10019640(v11),
                    v51 = v50[1] - *(float *)(v49 + 720),
                    v52 = v51 * v51,
                    v53 = *v50 - *(float *)(v49 + 716),
                    *(float *)(a1 + 112) * *(float *)(a1 + 112) > v53 * v53 + v52) )
              {
                sub_1004C1E0((char **)a1, 100004);
              }
            }
          }
        }
        if ( -1.0 == *(float *)(a1 + 156) || !sub_1004FBE0((float *)(a1 + 144), (int)v11) )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 52))(a1);
          v54 = sub_1007DB30(100006);
          sub_10023E00(*(char **)(a1 + 4), v54);
        }
        else
        {
          sub_1004C1E0((char **)a1, 100006);
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 62) )
  {
    sub_10023E00(*(char **)(a1 + 4), 17);
    sub_10023E00(*(char **)(a1 + 4), 18);
  }
}
