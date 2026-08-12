void __thiscall sub_1008C530(_DWORD *this)
{
  int v1; // edi
  int v2; // ecx
  double v3; // st6
  int v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // edi
  int i; // esi
  int v15; // eax
  char *v16; // eax
  char *v17; // eax
  float v18; // edx
  double v19; // st7
  int v20; // eax
  __int16 *v21; // eax
  float *v22; // edx
  char v23; // al
  int v24; // ecx
  int v25; // esi
  int v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // esi
  __int16 *v30; // eax
  int v31; // ecx
  char v32; // dl
  char v33; // al
  int v34; // edx
  int v35; // ecx
  char v36; // dl
  _BYTE *v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // edi
  int v41; // esi
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // eax
  long double v46; // st7
  int v47; // esi
  int v48; // ecx
  int v49; // eax
  const char *v50; // eax
  int v51; // esi
  int v52; // edx
  int v53; // [esp-Ch] [ebp-210h]
  int v54; // [esp-8h] [ebp-20Ch]
  int v55; // [esp-4h] [ebp-208h]
  float v56; // [esp+4h] [ebp-200h]
  char Buffer[256]; // [esp+14h] [ebp-1F0h] BYREF
  char v58[12]; // [esp+114h] [ebp-F0h] BYREF
  char v59[12]; // [esp+120h] [ebp-E4h] BYREF
  int v60; // [esp+12Ch] [ebp-D8h]
  float v61; // [esp+130h] [ebp-D4h]
  float v62; // [esp+134h] [ebp-D0h]
  float v63; // [esp+138h] [ebp-CCh]
  float v64; // [esp+13Ch] [ebp-C8h]
  float v65; // [esp+140h] [ebp-C4h]
  float v66; // [esp+14Ch] [ebp-B8h]
  int v67[3]; // [esp+174h] [ebp-90h] BYREF
  int v68[3]; // [esp+180h] [ebp-84h] BYREF
  int v69[3]; // [esp+18Ch] [ebp-78h] BYREF
  int v70; // [esp+198h] [ebp-6Ch]
  int v71[3]; // [esp+19Ch] [ebp-68h] BYREF
  int v72; // [esp+1A8h] [ebp-5Ch]
  int v73; // [esp+1ACh] [ebp-58h] BYREF
  float v74; // [esp+1B0h] [ebp-54h]
  float v75; // [esp+1B4h] [ebp-50h]
  int v76; // [esp+1B8h] [ebp-4Ch]
  int v77; // [esp+1BCh] [ebp-48h]
  int v78; // [esp+1C0h] [ebp-44h] BYREF
  float v79; // [esp+1C4h] [ebp-40h]
  float v80; // [esp+1C8h] [ebp-3Ch]
  int v81; // [esp+1CCh] [ebp-38h] BYREF
  float v82; // [esp+1D0h] [ebp-34h]
  float v83; // [esp+1D4h] [ebp-30h]
  int v84; // [esp+1D8h] [ebp-2Ch] BYREF
  float v85; // [esp+1DCh] [ebp-28h]
  float v86; // [esp+1E0h] [ebp-24h]
  int v87; // [esp+1E4h] [ebp-20h]
  int v88; // [esp+1E8h] [ebp-1Ch] BYREF
  float v89; // [esp+1ECh] [ebp-18h]
  float v90; // [esp+1F0h] [ebp-14h]
  int v91; // [esp+1F4h] [ebp-10h]
  char ArgList[4]; // [esp+1F8h] [ebp-Ch]
  char v93; // [esp+1FFh] [ebp-5h]
  _DWORD *v94; // [esp+200h] [ebp-4h]
  int savedregs; // [esp+204h] [ebp+0h] BYREF

  v1 = (int)this;
  v94 = this;
  if ( byte_1069362C )
  {
    v2 = *(_DWORD *)(this[5] + 4);
    v77 = v2 - 1;
    dword_106936E8 = dword_106936EC + 20;
    v3 = (double)(v2 - 1) * 0.1 * 0.05;
    flt_106936E4 = v3;
    if ( v3 < 0.1 )
      flt_106936E4 = 0.1;
    if ( dword_106936EC + 20 > v2 )
      dword_106936E8 = v2;
    if ( (*(_BYTE *)(v1 + 8) & 0x40) != 0 )
    {
      v4 = sub_1025FB50(dword_1060F300);
      v5 = v4;
      if ( v4 )
      {
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v4 + 504))(v4, &v81);
        sub_100F5A30(&v73, 0, 0);
        *(float *)&v88 = *(float *)&v73 * 2048.0 + *(float *)&v81;
        v89 = v74 * 2048.0 + v82;
        v90 = 2048.0 * v75 + v83;
        sub_1002A5F0((int)&savedregs, v5, (float *)&v81, (float *)&v88, 33570827, v5, 0, (int)v59);
        if ( 1.0 != v66 && (v63 + v64) * 0.0 + v65 > 0.5 )
        {
          v88 = v60;
          v89 = v61;
          v90 = v62 + 1.0;
          sub_1011BAB0(&v88);
        }
      }
    }
    v6 = *(_DWORD **)(v1 + 20);
    v7 = *(_DWORD *)(v1 + 8);
    v8 = v6[2];
    v76 = v8;
    if ( (v7 & 0x20) != 0 )
    {
      if ( (v7 & 0x10000000) != 0 )
      {
        sub_1008C4D0(*(int (__thiscall ***)(int))(v1 + 16));
      }
      else if ( dword_10608FB8 != -1 )
      {
        v9 = 0;
        if ( (int)v6[1] > 0 )
        {
          v10 = v8;
          v11 = (int)v94;
          do
          {
            if ( sub_10085110(v6, dword_10608FB8, v9) )
            {
              sub_1008D160(v69, dword_10693634);
              sub_1008D160(v71, dword_10693634);
              sub_1011BC50((int)v69, (int)v71, 255, 0, 255, 0, 0.0);
            }
            v6 = *(_DWORD **)(v11 + 20);
            ++v9;
          }
          while ( v9 < v6[1] );
          v8 = v10;
          v1 = (int)v94;
        }
      }
    }
    v12 = *(_DWORD *)(v1 + 8);
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 0x10000000) != 0 )
      {
        sub_1008C4D0(*(int (__thiscall ***)(int))(v1 + 16));
      }
      else
      {
        v91 = dword_106936EC;
        if ( dword_106936EC < dword_106936E8 )
        {
          v13 = v8 + 4 * dword_106936EC;
          do
          {
            for ( i = 0; i < *(_DWORD *)(*(_DWORD *)v13 + 84); ++i )
            {
              v15 = sub_10074630(*(__int16 **)(*(_DWORD *)(*(_DWORD *)v13 + 72) + 4 * i), v91);
              if ( v15 < v91 )
              {
                sub_1008D160(&v88, dword_10693634);
                sub_1008D160(&v73, dword_10693634);
                *(float *)&v78 = *(float *)&v73 - *(float *)&v88;
                v79 = v74 - v89;
                v80 = v75 - v90;
                *(float *)ArgList = off_10689714();
                v16 = sub_10073710(dword_10693634);
                v81 = *(int *)v16;
                v82 = *((float *)v16 + 1);
                v83 = *((float *)v16 + 2);
                v17 = sub_10073730(dword_10693634);
                v84 = *(int *)v17;
                v85 = *((float *)v17 + 1);
                v18 = *((float *)v17 + 2);
                v19 = *(float *)ArgList;
                v20 = *(_DWORD *)v13;
                *(float *)&v84 = *(float *)&v84 + *(float *)ArgList;
                v86 = v18;
                if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v20 + 72) + 4 * i) + dword_10693634 + 4) & 4) != 0 )
                {
                  sub_1011BB60((int)&v88, (int)&v81, (int)&v84, (int)&v78, 100, 255, 255, 20, flt_106936E4);
                  v19 = *(float *)ArgList;
                }
                if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v13 + 72) + 4 * i) + dword_10693634 + 4) & 8) != 0 )
                {
                  v21 = *(__int16 **)(*(_DWORD *)(*(_DWORD *)v13 + 72) + 4 * i);
                  v22 = *(float **)(v8 + 4 * *v21);
                  if ( v22[1] != *(float *)(*(_DWORD *)(v8 + 4 * v21[1]) + 4)
                    || v22[2] != *(float *)(*(_DWORD *)(v8 + 4 * v21[1]) + 8)
                    || v22[3] != *(float *)(*(_DWORD *)(v8 + 4 * v21[1]) + 12) )
                  {
                    *(float *)&v84 = *(float *)&v84 - v19;
                    if ( v75 <= (double)v90 )
                      v83 = v83 - v19;
                    else
                      v86 = v19 + v86;
                    *(float *)&v78 = 0.0;
                    v79 = 1.0;
                    v80 = 0.0;
                  }
                  sub_1011BB60((int)&v88, (int)&v81, (int)&v84, (int)&v78, 255, 0, 255, 20, flt_106936E4);
                }
                v23 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v13 + 72) + 4 * i) + dword_10693634 + 4);
                if ( (v23 & 1) != 0 )
                {
                  sub_1011BB60((int)&v88, (int)&v81, (int)&v84, (int)&v78, 0, 255, 50, 20, flt_106936E4);
                }
                else if ( (v23 & 2) != 0 )
                {
                  sub_1011BB60((int)&v88, (int)&v81, (int)&v84, (int)&v78, 0, 0, 255, 20, flt_106936E4);
                }
              }
            }
            v13 += 4;
            ++v91;
          }
          while ( v91 < dword_106936E8 );
          v1 = (int)v94;
        }
      }
    }
    if ( *(char *)(v1 + 8) < 0 )
      sub_10071040(flt_106936E4);
    if ( (*(_BYTE *)(v1 + 8) & 9) != 0 )
    {
      *(float *)ArgList = *(float *)&dword_106936EC;
      if ( dword_106936EC < dword_106936E8 )
      {
        v87 = v76 + 4 * dword_106936EC;
        while ( 1 )
        {
          v24 = *(_DWORD *)v87;
          if ( *(_DWORD *)(*(_DWORD *)v87 + 60) != 1 )
          {
            v25 = (int)v94;
            v26 = v94[2];
            if ( (v26 & 8) == 0 )
              goto LABEL_94;
            if ( (v26 & 0x10000000) != 0 )
            {
              sub_1008C4D0((int (__thiscall **)(int))v94[4]);
              goto LABEL_94;
            }
            v27 = 0;
            v91 = 0;
            if ( *(int *)(v24 + 84) > 0 )
            {
              v28 = v76;
              v8 = v87;
              while ( 1 )
              {
                v29 = *(_DWORD *)ArgList;
                if ( sub_10074630(*(__int16 **)(*(_DWORD *)(*(_DWORD *)v8 + 72) + 4 * v27), *(int *)ArgList) < v29 )
                {
                  sub_1008D160(&v81, dword_10693634);
                  sub_1008D160(&v88, dword_10693634);
                  v30 = *(__int16 **)(*(_DWORD *)(*(_DWORD *)v8 + 72) + 4 * v91);
                  v31 = *(_DWORD *)(*(_DWORD *)(v28 + 4 * *v30) + 60);
                  v77 = *(_DWORD *)(*(_DWORD *)(v28 + 4 * v30[1]) + 60);
                  v32 = *((_BYTE *)v30 + 14);
                  v33 = *((_BYTE *)v30 + dword_10693634 + 4);
                  if ( v31 == 2 )
                    v83 = v83 + 1.0;
                  if ( v77 == 2 )
                    v90 = v90 + 1.0;
                  if ( (v32 & 1) != 0 )
                  {
                    sub_1011BC50((int)&v81, (int)&v88, 255, 0, 0, 0, flt_106936E4);
                  }
                  else if ( (v32 & 2) != 0 )
                  {
                    sub_1011BC50((int)&v81, (int)&v88, 100, 100, 100, 0, flt_106936E4);
                  }
                  else
                  {
                    v34 = v94[2];
                    v70 = v34 & 0x200;
                    if ( (v34 & 0x200) != 0 && (v33 & 4) != 0 )
                    {
                      sub_1011BC50((int)&v81, (int)&v88, 100, 255, 255, 0, flt_106936E4);
                    }
                    else if ( (v33 & 8) != 0 )
                    {
                      sub_1011BC50((int)&v81, (int)&v88, 255, 0, 255, 0, flt_106936E4);
                    }
                    else
                    {
                      if ( (v33 & 1) != 0 )
                      {
                        v56 = flt_106936E4;
                        v55 = 50;
                        v54 = 255;
                        v53 = 0;
LABEL_91:
                        sub_1011BC50((int)&v81, (int)&v88, v53, v54, v55, 0, v56);
                        goto LABEL_92;
                      }
                      v72 = v34 & 0x100;
                      if ( (v34 & 0x100) == 0 || (v33 & 2) == 0 )
                      {
                        if ( v31 == 3 || (v93 = 0, v77 == 3) )
                          v93 = 1;
                        v35 = 0;
                        v36 = 1;
                        v37 = (_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v8 + 72) + 4 * v91) + 4);
                        while ( (*v37 & 0xFD) == 0 )
                        {
                          ++v35;
                          ++v37;
                          if ( v35 >= 10 )
                            goto LABEL_84;
                        }
                        v36 = 0;
LABEL_84:
                        if ( (!v93 || !v70) && (!v36 || !v72) && (v93 || v36) )
                          goto LABEL_92;
                        v56 = flt_106936E4;
                        v55 = 25;
                        v54 = 25;
                        v53 = 100;
                        goto LABEL_91;
                      }
                      sub_1011BC50((int)&v81, (int)&v88, 0, 0, 255, 0, flt_106936E4);
                    }
                  }
                }
LABEL_92:
                v38 = *(_DWORD *)v8;
                v27 = v91 + 1;
                v91 = v27;
                if ( v27 >= *(_DWORD *)(v38 + 84) )
                {
                  v25 = (int)v94;
                  break;
                }
              }
            }
LABEL_94:
            v39 = *(_DWORD *)(v25 + 8);
            if ( (v39 & 1) != 0 )
              break;
          }
LABEL_128:
          v87 += 4;
          ++*(_DWORD *)ArgList;
          if ( *(int *)ArgList >= dword_106936E8 )
            goto LABEL_129;
        }
        v40 = 0;
        v8 = 0;
        v41 = 255;
        if ( (v39 & 0x10) != 0 && dword_10608FB4 != -1 && (v39 & 0x10000000) != 0 )
          sub_1008C4D0((int (__thiscall **)(int))v94[4]);
        v42 = v94[2];
        if ( (v42 & 0x20) != 0 && dword_10608FB8 != -1 )
        {
          if ( (v42 & 0x10000000) != 0 )
          {
            sub_1008C4D0((int (__thiscall **)(int))v94[4]);
          }
          else if ( sub_10085110((_DWORD *)v94[5], dword_10608FB8, *(int *)ArgList) )
          {
            v41 = 0;
            v40 = 0;
            v8 = 255;
          }
          goto LABEL_116;
        }
        v43 = *(_DWORD *)(*(_DWORD *)v87 + 64);
        if ( (v43 & 0x20000000) != 0 )
        {
          v41 = 200;
          v40 = 200;
          v8 = 200;
        }
        else if ( (v43 & 0x40000000) != 0 )
        {
          v40 = 25;
          v8 = 25;
        }
        else
        {
          v44 = *(_DWORD *)(*(_DWORD *)v87 + 60);
          if ( v44 != 4 )
          {
            if ( v44 == 3 )
            {
              v40 = 255;
              v8 = 255;
            }
            else
            {
              if ( v44 != 2 )
                goto LABEL_116;
              v40 = 255;
              v8 = 100;
            }
            v41 = 0;
            goto LABEL_116;
          }
          v40 = 0;
          v8 = 255;
        }
LABEL_116:
        v45 = sub_1008D160(v58, dword_10693634);
        v84 = *(int *)v45;
        v85 = *(float *)(v45 + 4);
        v86 = *(float *)(v45 + 8);
        *(float *)&v73 = 5.0;
        v74 = 5.0;
        v75 = 5.0;
        *(float *)v68 = -5.0;
        *(float *)&v68[1] = -5.0;
        *(float *)&v68[2] = -5.0;
        sub_1011BB20((int)&v84, (int)v68, (int)&v73, v41, v40, v8, 0, flt_106936E4);
        if ( *(_DWORD *)(*(_DWORD *)v87 + 60) == 4 )
        {
          v46 = *(float *)(*(_DWORD *)v87 + 56) * 0.017453292;
          *(float *)v67 = cos(v46) * 12.0 + *(float *)&v84;
          *(float *)&v67[1] = sin(v46) * 12.0 + v85;
          *(float *)&v67[2] = 12.0 * flt_106936E4 + v86;
          sub_1011BC50((int)&v84, (int)v67, v41, v40, v8, 0, flt_106936E4);
        }
        v47 = v87;
        if ( *(_DWORD *)(*(_DWORD *)v87 + 96) )
        {
          *(float *)v69 = 7.0;
          *(float *)&v69[1] = 7.0;
          *(float *)&v69[2] = 7.0;
          *(float *)v71 = -7.0;
          *(float *)&v71[1] = -7.0;
          *(float *)&v71[2] = -7.0;
          sub_1011BB20((int)&v84, (int)v71, (int)v69, 255, 255, 0, 0, flt_106936E4);
        }
        if ( (v94[2] & 2) != 0 )
        {
          v48 = v94[3];
          Buffer[0] = 0;
          if ( v48 )
            sub_1001E280(
              Buffer,
              "%i (wc:%i; z:%i)",
              *(_DWORD *)ArgList,
              *(_DWORD *)(v48 + 4 * **(_DWORD **)v47),
              *(_DWORD *)(*(_DWORD *)v47 + 68));
          else
            sub_1001E280(Buffer, "%i (z:%i)", *(_DWORD *)ArgList, *(_DWORD *)(*(_DWORD *)v47 + 68));
          *(float *)&v78 = *(float *)&v84 + 6.0;
          v79 = v85 + 6.0;
          v80 = v86 + 6.0;
          sub_1011CF30((int)&v78, (int)Buffer, 1, flt_106936E4);
          v49 = *(_DWORD *)(*(_DWORD *)v47 + 96);
          if ( v49 )
          {
            v50 = *(const char **)(v49 + 824);
            if ( !v50 )
              v50 = String;
            sub_1001E280(Buffer, "%s", v50);
            v80 = v80 - 3.0;
            sub_1011CF30((int)&v78, (int)Buffer, 1, flt_106936E4);
          }
        }
        goto LABEL_128;
      }
    }
LABEL_129:
    v51 = (int)v94;
    if ( (v94[2] & 0xD) != 0 )
      sub_100861C0((int)v94, v8, (int)v94);
    v52 = *(_DWORD *)(v51 + 20);
    dword_106936EC = dword_106936E8;
    if ( dword_106936E8 >= *(_DWORD *)(v52 + 4) )
      dword_106936EC = 0;
  }
}
