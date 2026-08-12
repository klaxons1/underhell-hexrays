int __userpurge sub_10098860@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<edi>,
        unsigned int *a3,
        unsigned int *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int result; // eax
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // eax
  void (__thiscall *v14)(int, int, _DWORD, int *, int *); // edx
  int v15; // ebx
  int v16; // ecx
  int v17; // edi
  void (__thiscall *v18)(int, int); // edx
  int v19; // edi
  _DWORD *v20; // eax
  int v21; // eax
  int *v22; // edx
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  double v30; // st7
  float *v31; // ebx
  double v32; // st6
  unsigned __int8 v33; // dl
  double v34; // st5
  int v35; // esi
  unsigned __int8 v36; // cl
  float *v37; // eax
  int v38; // edi
  int v39; // edi
  float *v40; // eax
  double v41; // st7
  double v42; // st7
  float *v43; // eax
  double v44; // st6
  double v45; // st7
  float *v46; // eax
  double v47; // st7
  float *v48; // eax
  double v49; // st6
  double v50; // st7
  float *v51; // eax
  double v52; // st7
  float *v53; // eax
  double v54; // st6
  double v55; // st7
  float *v56; // eax
  int v57; // eax
  unsigned int v58; // edi
  _DWORD v59[41]; // [esp+8h] [ebp-220h] BYREF
  int v60; // [esp+ACh] [ebp-17Ch]
  char v61; // [esp+B8h] [ebp-170h]
  int v62; // [esp+BCh] [ebp-16Ch]
  int v63; // [esp+C0h] [ebp-168h]
  char v64; // [esp+C4h] [ebp-164h]
  _DWORD v65[3]; // [esp+C8h] [ebp-160h] BYREF
  char v66; // [esp+D4h] [ebp-154h]
  int v67; // [esp+D8h] [ebp-150h]
  int v68; // [esp+DCh] [ebp-14Ch]
  int v69; // [esp+E0h] [ebp-148h]
  int v70; // [esp+E4h] [ebp-144h]
  int v71; // [esp+E8h] [ebp-140h]
  char v72; // [esp+F8h] [ebp-130h]
  _DWORD v73[41]; // [esp+FCh] [ebp-12Ch] BYREF
  int v74; // [esp+1A0h] [ebp-88h]
  char v75; // [esp+1A4h] [ebp-84h]
  int v76; // [esp+1A8h] [ebp-80h]
  int v77; // [esp+1ACh] [ebp-7Ch]
  float *v78; // [esp+1B4h] [ebp-74h]
  float *v79; // [esp+1BCh] [ebp-6Ch]
  int *v80; // [esp+1DCh] [ebp-4Ch]
  int v81; // [esp+1E0h] [ebp-48h]
  int v82; // [esp+1E4h] [ebp-44h]
  int v83; // [esp+1E8h] [ebp-40h]
  int v84; // [esp+1F0h] [ebp-38h]
  int v85; // [esp+1F4h] [ebp-34h] BYREF
  int v86; // [esp+1F8h] [ebp-30h]
  int v87; // [esp+1FCh] [ebp-2Ch] BYREF
  int v88; // [esp+200h] [ebp-28h] BYREF
  unsigned __int8 v89; // [esp+206h] [ebp-22h]
  unsigned __int8 v90; // [esp+207h] [ebp-21h]
  _DWORD *v91; // [esp+208h] [ebp-20h]
  int *v92; // [esp+20Ch] [ebp-1Ch]
  int v93; // [esp+210h] [ebp-18h]
  int v94; // [esp+214h] [ebp-14h]
  int v95; // [esp+218h] [ebp-10h]
  int v96; // [esp+21Ch] [ebp-Ch]
  int i; // [esp+220h] [ebp-8h]
  int v98; // [esp+224h] [ebp-4h]

  v91 = a1;
  result = sub_10095180(a7, a8, (unsigned int *)&v88);
  i = result;
  if ( result )
  {
    result = dword_1043C114;
    if ( *(_DWORD *)(dword_1043C114 + 48) )
    {
      v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
      v11 = v10;
      v88 = v10;
      if ( v10 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 80))(v11, 10);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 84))(v11);
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 124))(v11);
      v12 = a1[28];
      if ( (unsigned __int8)sub_100EC2E0() || *(_DWORD *)(dword_1043C114 + 48) == 2 )
        v12 = v91[29];
      sub_10016C20((int)v59);
      v13 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)v11 + 224))(v11, 1, 0, 0, v12);
      v14 = *(void (__thiscall **)(int, int, _DWORD, int *, int *))(*(_DWORD *)v11 + 512);
      v15 = v13;
      v86 = v13;
      v14(v11, v13, 0, &v85, &v87);
      v16 = v87 / 6;
      if ( v87 / 6 > v85 / 4 )
        v16 = v85 / 4;
      v17 = i;
      if ( i >= v16 )
      {
        v98 = v16;
        v17 = v16;
      }
      else
      {
        v98 = i;
      }
      v94 = v17;
      v62 = v15;
      v64 = 1;
      v63 = 7;
      v18 = *(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 40);
      v19 = 6 * v17;
      v96 = v19;
      v18(v15, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v62 + 68))(v62, 4 * v98, v19, v59);
      v67 = v15 + 4;
      v70 = v59[39];
      v65[0] = v60;
      v69 = 0;
      v68 = v19;
      v72 = 0;
      v66 = v61;
      v71 = 0;
      sub_10016990((int)v73, v15, 4 * v98, v59);
      v71 = 0;
      sub_10016A00(v73);
      for ( i = 0; i < a7; ++i )
      {
        v20 = (_DWORD *)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)off_103DCDDC + 28))(
                          off_103DCDDC,
                          *(unsigned __int16 *)(a8 + 2 * i),
                          0);
        if ( v20 )
        {
          v21 = sub_100984B0((int)v91, v20, a3, a4, a5, a6);
          v22 = (int *)v91[35];
          v23 = v91[36];
          v93 = v21;
          v92 = v22;
          v84 = v23;
          while ( v21 )
          {
            v24 = v94;
            if ( !v94 )
            {
              if ( v64 )
              {
                switch ( v63 )
                {
                  case 4:
                    v25 = 2 * v77 - 2;
                    break;
                  case 5:
                    v25 = 2 * v77;
                    break;
                  case 6:
                    v25 = 3 * v77 - 6;
                    break;
                  case 7:
                    v25 = 6 * v77 / 4;
                    break;
                  case 8:
                    v25 = 0;
                    break;
                  default:
                    v25 = v77;
                    break;
                }
                sub_10016B00(v65, v63, v25);
              }
              (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v62 + 80))(v62, v77, v69, v59);
              v67 = 0;
              v68 = 0;
              v76 = 0;
              v74 = 0;
              v73[19] = -1;
              v62 = 0;
              (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 48))(v15, -1, 0);
              v62 = v15;
              v64 = 1;
              v63 = 7;
              v26 = *(_DWORD *)v15;
              v94 = v98;
              (*(void (__thiscall **)(int, int))(v26 + 40))(v15, 2);
              (*(void (__thiscall **)(int, int, int, _DWORD *))(*(_DWORD *)v62 + 68))(v62, 4 * v98, v19, v59);
              v67 = v15 + 4;
              v70 = v59[39];
              v69 = 0;
              v68 = v19;
              v65[0] = v60;
              v72 = 0;
              v66 = v61;
              v74 = v15;
              qmemcpy(v73, v59, sizeof(v73));
              v76 = 4 * v98;
              v73[20] = v59[20] != 0 ? 2 : 0;
              v77 = 0;
              v75 = 0;
              if ( v82 == -1 )
              {
                v81 = 0;
                v82 = v59[40];
                v83 = v59[39];
              }
              v71 = 0;
              sub_10016A00(v73);
              v19 = v96;
              v21 = v93;
              v24 = v94;
            }
            if ( v21 >= v24 )
            {
              v95 = v24;
              v27 = v24;
            }
            else
            {
              v27 = v21;
            }
            v21 -= v27;
            v93 = v21;
            v94 = v24 - v27;
            if ( v27 )
            {
              while ( 1 )
              {
                v28 = *v92;
                v95 = v27 - 1;
                v29 = (v28 & 3) + 60 * (v28 >> 2);
                v30 = *(float *)(v84 + 4 * v29 + 16);
                v31 = *(float **)(v84 + 4 * v29 + 224);
                v32 = *(float *)(v84 + 4 * v29 + 32);
                v33 = *(_BYTE *)(v84 + 4 * v29 + 193);
                v34 = *(float *)(v84 + 4 * v29);
                v35 = v84 + 4 * v29;
                v36 = *(_BYTE *)(v35 + 192);
                v89 = *(_BYTE *)(v35 + 194);
                v90 = *(_BYTE *)(v35 + 208);
                v37 = v78;
                v38 = v90;
                *v78 = v34;
                v37[1] = v30;
                v37[2] = v32;
                v39 = v89 | ((v33 | ((v36 | (v38 << 8)) << 8)) << 8);
                *v80 = v39;
                v40 = v79;
                v41 = v31[7];
                *v79 = v31[6];
                v40[1] = v41;
                sub_10016A80(v73);
                v42 = *(float *)(v35 + 64);
                v43 = v78;
                v44 = *(float *)(v35 + 80);
                *v78 = *(float *)(v35 + 48);
                v43[1] = v42;
                v43[2] = v44;
                *v80 = v39;
                v45 = v31[5];
                v46 = v79;
                *v79 = v31[6];
                v46[1] = v45;
                sub_10016A80(v73);
                v47 = *(float *)(v35 + 112);
                v48 = v78;
                v49 = *(float *)(v35 + 128);
                *v78 = *(float *)(v35 + 96);
                v48[1] = v47;
                v48[2] = v49;
                *v80 = v39;
                v50 = v31[5];
                v51 = v79;
                *v79 = v31[4];
                v51[1] = v50;
                sub_10016A80(v73);
                v52 = *(float *)(v35 + 160);
                v53 = v78;
                v54 = *(float *)(v35 + 176);
                *v78 = *(float *)(v35 + 144);
                v53[1] = v52;
                v53[2] = v54;
                *v80 = v39;
                v55 = v31[7];
                v56 = v79;
                *v79 = v31[4];
                v56[1] = v55;
                sub_10016A80(v73);
                v92 += 2;
                if ( !v95 )
                  break;
                v27 = v95;
              }
              v15 = v86;
              v19 = v96;
              v21 = v93;
            }
          }
        }
      }
      if ( v64 )
      {
        switch ( v63 )
        {
          case 4:
            v57 = 2 * v77 - 2;
            break;
          case 5:
            v57 = 2 * v77;
            break;
          case 6:
            v57 = 3 * v77 - 6;
            break;
          case 7:
            v57 = 6 * v77 / 4;
            break;
          case 8:
            v57 = 0;
            break;
          default:
            v57 = v77;
            break;
        }
        sub_10016B00(v65, v63, v57);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v62 + 80))(v62, v77, v69);
      v67 = 0;
      v68 = 0;
      v76 = 0;
      v74 = 0;
      v73[19] = -1;
      v62 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v15 + 48))(v15, -1, 0);
      v58 = v88;
      (*(void (__thiscall **)(int))(*(_DWORD *)v88 + 88))(v88);
      if ( v74 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v74 + 8))(v74) )
        (*(void (__thiscall **)(int))(*(_DWORD *)v74 + 16))(v74);
      if ( v67 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v67 + 8))(v67) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v67 + 16))(v67);
      }
      (*(void (__thiscall **)(unsigned int))(*(_DWORD *)v58 + 12))(v58);
      return (*(int (__thiscall **)(unsigned int))(*(_DWORD *)v58 + 4))(v58);
    }
  }
  return result;
}
