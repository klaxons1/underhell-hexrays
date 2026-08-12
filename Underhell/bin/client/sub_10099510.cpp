void __thiscall sub_10099510(_DWORD *this, unsigned int *a2, unsigned int *a3, int a4, int a5, int a6, float *a7)
{
  int (__thiscall *v8)(void *, int, _DWORD); // edx
  _DWORD *v9; // esi
  float *v10; // ebx
  int v11; // ecx
  double v12; // st7
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  int v17; // eax
  int v18; // ebx
  int v19; // esi
  int v20; // eax
  void (__thiscall *v21)(int, int, _DWORD, int *, int *); // edx
  int v22; // esi
  int v23; // ecx
  int v24; // ebx
  int v25; // edi
  void (__thiscall *v26)(int, int); // edx
  int v27; // ebx
  int v28; // edi
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  double v34; // st7
  float *v35; // ebx
  double v36; // st6
  unsigned __int8 v37; // dl
  double v38; // st5
  int v39; // esi
  unsigned __int8 v40; // cl
  float *v41; // eax
  int v42; // edi
  float *v43; // eax
  double v44; // st7
  double v45; // st7
  float *v46; // eax
  double v47; // st6
  double v48; // st7
  float *v49; // eax
  double v50; // st7
  float *v51; // eax
  double v52; // st6
  double v53; // st7
  float *v54; // eax
  double v55; // st7
  double v56; // st6
  float *v57; // eax
  double v58; // st7
  float *v59; // eax
  _DWORD *v60; // eax
  _DWORD *v61; // edx
  int v62; // esi
  _DWORD *v63[39]; // [esp+Ch] [ebp-20Ch] BYREF
  int v64; // [esp+A8h] [ebp-170h]
  int v65; // [esp+B0h] [ebp-168h]
  char v66; // [esp+BCh] [ebp-15Ch]
  int v67; // [esp+C0h] [ebp-158h]
  int v68; // [esp+C4h] [ebp-154h]
  char v69; // [esp+C8h] [ebp-150h]
  int v70[3]; // [esp+CCh] [ebp-14Ch] BYREF
  char v71; // [esp+D8h] [ebp-140h]
  int v72; // [esp+DCh] [ebp-13Ch]
  int v73; // [esp+E0h] [ebp-138h]
  int v74; // [esp+E4h] [ebp-134h]
  int v75; // [esp+E8h] [ebp-130h]
  int v76; // [esp+ECh] [ebp-12Ch]
  char v77; // [esp+FCh] [ebp-11Ch]
  _DWORD v78[44]; // [esp+100h] [ebp-118h] BYREF
  int v79; // [esp+1B0h] [ebp-68h]
  float *v80; // [esp+1B8h] [ebp-60h]
  float *v81; // [esp+1C0h] [ebp-58h]
  int *v82; // [esp+1E0h] [ebp-38h]
  int v83; // [esp+1F4h] [ebp-24h] BYREF
  int v84; // [esp+1F8h] [ebp-20h]
  int v85; // [esp+1FCh] [ebp-1Ch]
  int v86; // [esp+200h] [ebp-18h]
  int v87; // [esp+204h] [ebp-14h]
  int v88; // [esp+208h] [ebp-10h] BYREF
  _DWORD *v89; // [esp+20Ch] [ebp-Ch]
  float v90; // [esp+210h] [ebp-8h]
  _DWORD *v91; // [esp+214h] [ebp-4h]
  int v92; // [esp+220h] [ebp+8h]
  int v93; // [esp+224h] [ebp+Ch]
  int v94; // [esp+228h] [ebp+10h]
  int v95; // [esp+22Ch] [ebp+14h]
  int v96; // [esp+230h] [ebp+18h]
  unsigned __int8 v97; // [esp+236h] [ebp+1Eh]
  unsigned __int8 v98; // [esp+237h] [ebp+1Fh]

  v8 = *(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)off_103DCDDC + 28);
  v91 = this;
  v9 = (_DWORD *)v8(off_103DCDDC, a6, 0);
  v89 = v9;
  if ( v9 )
  {
    if ( this[33] == a6 )
    {
      v10 = (float *)a2;
    }
    else
    {
      this[33] = a6;
      v10 = (float *)a2;
      v9[4] = sub_100984B0((int)this, v9, a2, a3, a4, a5);
      v9[5] = 0;
    }
    v11 = v9[4];
    if ( v11 )
    {
      v12 = 0.0;
      v90 = 0.0;
      if ( a7 )
      {
        v13 = *a7 - *v10;
        v14 = v13 * v13;
        v15 = a7[1] - v10[1];
        v16 = a7[2] - v10[2];
        v12 = v16 * v16 + v15 * v15 + v14;
        v90 = v12;
      }
      if ( v12 <= *(float *)(this[35] + 8 * v9[5] + 4) )
      {
        v96 = v11;
        if ( *(_DWORD *)(dword_1043C114 + 48) )
        {
          v17 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
          v18 = v17;
          v84 = v17;
          if ( v17 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v18 + 80))(v18, 10);
          (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 84))(v18);
          (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 124))(v18);
          v19 = this[28];
          if ( (unsigned __int8)sub_100EC2E0() || *(_DWORD *)(dword_1043C114 + 48) == 2 )
            v19 = this[29];
          sub_10016C20((int)v63);
          v20 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v18 + 224))(v18, 1, 0, 0, v19);
          v21 = *(void (__thiscall **)(int, int, _DWORD, int *, int *))(*(_DWORD *)v18 + 512);
          v22 = v20;
          v86 = v20;
          v21(v18, v20, 0, &v88, &v83);
          v23 = v83 / 6;
          if ( v83 / 6 > v88 / 4 )
            v23 = v88 / 4;
          v24 = v96;
          if ( v96 >= v23 )
          {
            v92 = v23;
            v24 = v23;
          }
          else
          {
            v92 = v96;
          }
          v95 = v24;
          v25 = 4 * v24;
          v67 = v22;
          v69 = 1;
          v68 = 7;
          v26 = *(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 40);
          v27 = 6 * v24;
          v87 = v27;
          v26(v22, 2);
          (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v67 + 68))(v67, v25, v27, v63);
          v70[0] = v65;
          v75 = v64;
          v72 = v22 + 4;
          v71 = v66;
          v74 = 0;
          v73 = v27;
          v77 = 0;
          v76 = 0;
          sub_10016990((int)v78, v22, v25, v63);
          v76 = 0;
          sub_10016A00(v78);
          v28 = v91[35] + 8 * v89[5];
          v29 = v96;
          v93 = v28;
          v85 = v91[36];
          do
          {
            if ( v90 > (double)*(float *)(v28 + 4) )
              break;
            v30 = v95;
            if ( !v95 )
            {
              if ( v69 )
              {
                switch ( v68 )
                {
                  case 4:
                    v31 = 2 * v79 - 2;
                    break;
                  case 5:
                    v31 = 2 * v79;
                    break;
                  case 6:
                    v31 = 3 * v79 - 6;
                    break;
                  case 7:
                    v31 = 6 * v79 / 4;
                    break;
                  case 8:
                    v31 = 0;
                    break;
                  default:
                    v31 = v79;
                    break;
                }
                sub_10016B00(v70, v68, v31);
              }
              (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v67 + 80))(v67, v79, v74, v63);
              v72 = 0;
              v73 = 0;
              v78[43] = 0;
              v78[41] = 0;
              v67 = 0;
              v78[19] = -1;
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v22 + 48))(v22, -1, 0);
              v67 = v22;
              v69 = 1;
              v68 = 7;
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 40))(v22, 2);
              (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v67 + 68))(v67, 4 * v92, v27, v63);
              v72 = v22 + 4;
              v74 = 0;
              v77 = 0;
              v76 = 0;
              v70[0] = v65;
              v75 = v64;
              v71 = v66;
              v73 = v27;
              sub_10016990((int)v78, v22, 4 * v92, v63);
              v76 = 0;
              sub_10016A00(v78);
              v29 = v96;
              v30 = v92;
            }
            if ( v29 >= v30 )
              v32 = v30;
            else
              v32 = v29;
            v29 -= v32;
            v96 = v29;
            v95 = v30 - v32;
            if ( v32 )
            {
              while ( 1 )
              {
                v94 = v32 - 1;
                v33 = (*(_DWORD *)v28 & 3) + 60 * (*(int *)v28 >> 2);
                v34 = *(float *)(v85 + 4 * v33 + 16);
                v35 = *(float **)(v85 + 4 * v33 + 224);
                v36 = *(float *)(v85 + 4 * v33 + 32);
                v37 = *(_BYTE *)(v85 + 4 * v33 + 193);
                v38 = *(float *)(v85 + 4 * v33);
                v39 = v85 + 4 * v33;
                v40 = *(_BYTE *)(v39 + 192);
                v97 = *(_BYTE *)(v39 + 194);
                v98 = *(_BYTE *)(v39 + 208);
                v41 = v80;
                *v80 = v38;
                v41[1] = v34;
                v41[2] = v36;
                v42 = v97 | ((v37 | ((v40 | (v98 << 8)) << 8)) << 8);
                *v82 = v42;
                v43 = v81;
                v44 = v35[7];
                *v81 = v35[6];
                v43[1] = v44;
                sub_10016A80(v78);
                v45 = *(float *)(v39 + 64);
                v46 = v80;
                v47 = *(float *)(v39 + 80);
                *v80 = *(float *)(v39 + 48);
                v46[1] = v45;
                v46[2] = v47;
                *v82 = v42;
                v48 = v35[5];
                v49 = v81;
                *v81 = v35[6];
                v49[1] = v48;
                sub_10016A80(v78);
                v50 = *(float *)(v39 + 112);
                v51 = v80;
                v52 = *(float *)(v39 + 128);
                *v80 = *(float *)(v39 + 96);
                v51[1] = v50;
                v51[2] = v52;
                *v82 = v42;
                v53 = v35[5];
                v54 = v81;
                *v81 = v35[4];
                v54[1] = v53;
                sub_10016A80(v78);
                v55 = *(float *)(v39 + 160);
                v56 = *(float *)(v39 + 176);
                v57 = v80;
                *v80 = *(float *)(v39 + 144);
                v57[1] = v55;
                v57[2] = v56;
                *v82 = v42;
                v58 = v35[7];
                v59 = v81;
                *v81 = v35[4];
                v59[1] = v58;
                sub_10016A80(v78);
                v93 += 8;
                v28 = v93;
                if ( !v94 )
                  break;
                v32 = v94;
              }
              v27 = v87;
              v22 = v86;
              v29 = v96;
            }
          }
          while ( v29 );
          v60 = v89;
          v61 = v91;
          v89[4] = v29;
          v60[5] = (v28 - v61[35]) >> 3;
          sub_10016E00((int)v63, 0, 0);
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v22 + 48))(v22, -1, 0);
          v62 = v84;
          (*(void (__thiscall **)(int))(*(_DWORD *)v84 + 88))(v84);
          sub_10016BC0(v63);
          (*(void (__thiscall **)(int))(*(_DWORD *)v62 + 12))(v62);
          (*(void (__thiscall **)(int))(*(_DWORD *)v62 + 4))(v62);
        }
      }
    }
  }
}
