float *__thiscall sub_1030D4C0(int this, int a2)
{
  int v4; // ecx
  float *v5; // esi
  double v6; // st7
  bool v7; // zf
  float *v8; // esi
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  double v14; // st7
  float *v15; // esi
  char *v16; // eax
  float *v17; // eax
  _DWORD ***v18; // ecx
  int v19; // ebx
  float *v20; // eax
  int (__thiscall *v21)(float *); // eax
  int v22; // eax
  float *v23; // ebx
  float *v24; // eax
  float *v25; // ecx
  float *v26; // ebx
  float *v27; // eax
  double v28; // st5
  double v29; // st3
  double v30; // st7
  double v31; // st3
  float *v32; // eax
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st4
  double v37; // st7
  double v38; // st4
  double v39; // st5
  float *v40; // eax
  float *v41; // eax
  double v42; // st5
  double v43; // st3
  double v44; // st7
  double v45; // st3
  double v46; // st7
  float *v47; // eax
  float *v48; // esi
  float *v49; // eax
  float *v50; // [esp+10h] [ebp-118h]
  float v51; // [esp+14h] [ebp-114h]
  float v52; // [esp+1Ch] [ebp-10Ch]
  int v53; // [esp+1Ch] [ebp-10Ch]
  int v54; // [esp+24h] [ebp-104h]
  float v55; // [esp+2Ch] [ebp-FCh]
  char v56[12]; // [esp+3Ch] [ebp-ECh] BYREF
  float v57; // [esp+48h] [ebp-E0h]
  float v58; // [esp+4Ch] [ebp-DCh]
  float v59; // [esp+50h] [ebp-D8h]
  char v60[12]; // [esp+90h] [ebp-98h] BYREF
  int v61[3]; // [esp+9Ch] [ebp-8Ch] BYREF
  float v62; // [esp+A8h] [ebp-80h] BYREF
  float v63; // [esp+ACh] [ebp-7Ch]
  float v64; // [esp+B0h] [ebp-78h]
  float v65[3]; // [esp+B4h] [ebp-74h] BYREF
  int v66[3]; // [esp+C0h] [ebp-68h] BYREF
  float v67; // [esp+CCh] [ebp-5Ch]
  float v68; // [esp+D0h] [ebp-58h]
  float v69; // [esp+D4h] [ebp-54h]
  float v70; // [esp+D8h] [ebp-50h]
  float v71; // [esp+DCh] [ebp-4Ch]
  float v72; // [esp+E0h] [ebp-48h]
  float v73; // [esp+E4h] [ebp-44h]
  float v74; // [esp+E8h] [ebp-40h]
  float v75; // [esp+ECh] [ebp-3Ch]
  float v76; // [esp+F0h] [ebp-38h]
  float v77; // [esp+F4h] [ebp-34h]
  float v78; // [esp+F8h] [ebp-30h]
  float *v79; // [esp+FCh] [ebp-2Ch]
  int v80; // [esp+100h] [ebp-28h] BYREF
  float v81; // [esp+104h] [ebp-24h]
  float v82; // [esp+108h] [ebp-20h]
  float v83; // [esp+10Ch] [ebp-1Ch]
  int v84; // [esp+110h] [ebp-18h] BYREF
  int v85; // [esp+114h] [ebp-14h]
  int v86; // [esp+118h] [ebp-10h] BYREF
  float v87; // [esp+11Ch] [ebp-Ch]
  float v88; // [esp+120h] [ebp-8h]
  float v89; // [esp+124h] [ebp-4h] BYREF
  int savedregs; // [esp+128h] [ebp+0h] BYREF

  if ( !*(_DWORD *)a2 )
    return 0;
  if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
  {
    v4 = *(_DWORD *)(this + 252);
    *(float *)&v80 = -90.0;
    v81 = 0.0;
    v82 = 0.0;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_1011CEB0((float *)(this + 580), (int)&v80, *(float *)(a2 + 16), 255, 0, 0, 8, 1, 2.0);
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v5 = *(float **)a2;
  if ( (*(_DWORD *)(*(_DWORD *)a2 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)a2);
  v6 = v5[145] - *(float *)(this + 580);
  v85 = this + 580;
  v73 = v6;
  v74 = v5[146] - *(float *)(this + 584);
  v75 = v5[147] - *(float *)(this + 588);
  off_10689714();
  v7 = *(_BYTE *)(a2 + 24) == 0;
  v75 = 0.0;
  if ( v7 )
  {
    v14 = *(float *)(a2 + 16) * *(float *)(a2 + 16);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = *(float **)a2;
    if ( (*(_DWORD *)(*(_DWORD *)a2 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)a2);
    v9 = v8[146] - *(float *)(v85 + 4);
    v10 = v9 * v9;
    v11 = v8[145] - *(float *)v85;
    v12 = v10;
    v13 = v8[147] - *(float *)(v85 + 8);
    v14 = v11 * v11 + v12 + v13 * v13;
  }
  v83 = v14;
  v15 = 0;
  v84 = -1;
  v79 = 0;
  v76 = flt_106F1CA8;
  v77 = flt_106F1CAC;
  v78 = flt_106F1CB0;
  while ( 1 )
  {
    v16 = *(char **)(this + 3808);
    if ( !v16 || (v17 = (float *)sub_1012BF20(&dword_1069E3E0, (int)v15, v16, 0, 0, 0, 0)) == 0 )
    {
      v18 = *(_DWORD ****)(this + 2404);
      if ( v84 == -1 )
        v17 = (float *)sub_100AB0F0(v18, (int)&v84, 2);
      else
        v17 = (float *)sub_100AB170(v18, (char *)&v84);
    }
    v15 = v17;
    if ( !v17 )
      break;
    v89 = *(float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v17 + 8))(v17);
    if ( sub_101A40D0((_DWORD *)(this + 3720), (int)&v89) == -1 && v15[88] >= 6.0 )
    {
      v19 = *((_DWORD *)v15 + 106);
      if ( v19 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v19 + 40))(*((_DWORD *)v15 + 106)) )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v19 + 116))(v19) >= 5.0 )
          {
            (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v19 + 204))(v19, &v62, 0);
            if ( v62 * v62 + v63 * v63 + v64 * v64 <= 256.0 )
            {
              if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
                sub_100DAE60(this);
              v20 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v15 + 576))(v15);
              v70 = *v20 - *(float *)v85;
              v71 = v20[1] - *(float *)(v85 + 4);
              v72 = v20[2] - *(float *)(v85 + 8);
              off_10689714();
              v21 = *(int (__thiscall **)(float *))(*(_DWORD *)v15 + 576);
              v72 = 0.0;
              v22 = v21(v15);
              v23 = (float *)a2;
              v7 = *(_BYTE *)(a2 + 24) == 0;
              v86 = *(int *)v22;
              v87 = *(float *)(v22 + 4);
              v88 = *(float *)(v22 + 8);
              if ( v7 )
              {
                v36 = *(float *)(a2 + 4) - *(float *)&v86;
                v37 = v36 * v36;
                v38 = *(float *)(a2 + 8) - v87;
                v39 = *(float *)(a2 + 12) - v88;
                v35 = v39 * v39 + v38 * v38 + v37;
                goto LABEL_38;
              }
              v24 = (float *)sub_10019640((_DWORD *)this);
              v25 = *(float **)a2;
              v67 = *v24 - *(float *)&v86;
              v68 = v24[1] - v87;
              v69 = v24[2] - v88;
              v26 = (float *)sub_10019640(v25);
              v27 = (float *)sub_10019640((_DWORD *)this);
              v28 = v27[2] - v26[2];
              v29 = *v27 - *v26;
              v30 = v29 * v29;
              v31 = v27[1] - v26[1];
              if ( v31 * v31 + v30 + v28 * v28 >= v67 * v67 + v68 * v68 + v69 * v69 )
              {
                v32 = (float *)sub_10019640((_DWORD *)this);
                *(float *)&v80 = *v32 - *(float *)&v86;
                v81 = v32[1] - v87;
                v82 = v32[2] - v88;
                v33 = v70 * v73 + v71 * v74 + v72 * v75;
                if ( v33 >= *(float *)(a2 + 20) )
                {
                  v52 = v33;
                  v34 = sub_10134630(v52, 1.0, *(float *)(a2 + 20), 1.0, 4.0);
                  v23 = (float *)a2;
                  v35 = v34 * (*(float *)&v80 * *(float *)&v80 + v81 * v81 + v82 * v82);
LABEL_38:
                  v89 = v35;
                  if ( v35 < v83 )
                  {
                    v40 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)v23 + 520))(*(_DWORD *)v23);
                    sub_1002A5F0((int)&savedregs, (int)v15, (float *)&v86, v40, (int)v60, (int)&v86, 1, 16395);
                    v41 = (float *)(*(int (__thiscall **)(_DWORD, int, _DWORD, char *))(**(_DWORD **)v23 + 576))(
                                     *(_DWORD *)v23,
                                     this,
                                     0,
                                     v56);
                    v42 = v59 - v41[2];
                    v43 = v57 - *v41;
                    v44 = v43 * v43;
                    v45 = v58 - v41[1];
                    if ( v45 * v45 + v44 + v42 * v42 <= v23[7] * v23[7] )
                    {
                      if ( sub_10308E30((float *)this, v15, *(_DWORD *)a2, v65) )
                      {
                        v7 = *(_DWORD *)(dword_106E3074 + 48) == 3;
                        v83 = v89;
                        v79 = v15;
                        v76 = v65[0];
                        v77 = v65[1];
                        v78 = v65[2];
                        if ( v7 )
                        {
                          v55 = 2.0;
                          v46 = 16.0;
                          v54 = 0;
                          v53 = 255;
LABEL_47:
                          v51 = v46;
                          v50 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v15 + 576))(v15);
                          v47 = (float *)sub_10019640((_DWORD *)this);
                          sub_1011C3A0(v47, v50, v51, 255, v53, 0, v54, 1, v55);
                        }
                      }
                      else if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
                      {
                        v55 = 2.0;
                        v46 = 32.0;
                        v54 = 64;
                        v53 = 0;
                        goto LABEL_47;
                      }
                    }
                  }
                  else if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
                  {
                    *(float *)v66 = 16.0;
                    *(float *)&v66[1] = 16.0;
                    *(float *)&v66[2] = 16.0;
                    *(float *)v61 = -16.0;
                    *(float *)&v61[1] = -16.0;
                    *(float *)&v61[2] = -16.0;
                    sub_1011BB20((int)&v86, (int)v61, (int)v66, 255, 0, 0, 0, 2.0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v48 = v79;
  if ( v79 )
  {
    *(float *)(this + 3688) = v76;
    *(float *)(this + 3692) = v77;
    *(float *)(this + 3696) = v78;
    if ( *(_DWORD *)(dword_106E3074 + 48) == 3 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v49 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v48 + 576))(v48);
      sub_1011C3A0((float *)v85, v49, 32.0, 0, 255, 0, 128, 1, 2.0);
    }
  }
  return v48;
}
