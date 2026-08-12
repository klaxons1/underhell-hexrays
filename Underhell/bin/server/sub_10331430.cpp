int __userpurge sub_10331430@<eax>(int *a1@<ecx>, int a2@<ebx>, float a3)
{
  int v3; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  int v10; // edx
  char v11; // bl
  char v12; // al
  int v13; // eax
  float v14; // ecx
  float v15; // edx
  char *v16; // eax
  int v17; // eax
  float v18; // ecx
  float v19; // edx
  void (__thiscall *v20)(int *); // edx
  int v21; // ebx
  int *v22; // eax
  bool v23; // bl
  float v24; // ecx
  float v25; // edx
  int v26; // eax
  void (__thiscall *v27)(int *, float *); // edx
  int v28; // edi
  int v29; // edi
  void (__thiscall *v30)(int *, int *); // edx
  int v31; // edi
  int result; // eax
  float *v33; // [esp+5Ch] [ebp-B4h]
  float v34; // [esp+64h] [ebp-ACh]
  float v35; // [esp+64h] [ebp-ACh]
  float v37; // [esp+68h] [ebp-A8h]
  char v38; // [esp+74h] [ebp-9Ch] BYREF
  char v39; // [esp+80h] [ebp-90h] BYREF
  _BYTE v40[12]; // [esp+8Ch] [ebp-84h] BYREF
  int v41[13]; // [esp+98h] [ebp-78h] BYREF
  float v42; // [esp+CCh] [ebp-44h]
  int v43; // [esp+D8h] [ebp-38h]
  float v44[3]; // [esp+E8h] [ebp-28h] BYREF
  int v45; // [esp+F4h] [ebp-1Ch]
  int v46; // [esp+F8h] [ebp-18h] BYREF
  int v47; // [esp+FCh] [ebp-14h]
  int v48; // [esp+100h] [ebp-10h]
  float v49; // [esp+104h] [ebp-Ch]
  float v50; // [esp+108h] [ebp-8h]
  float v51; // [esp+10Ch] [ebp-4h]

  v3 = LODWORD(a3);
  sub_1001E4E0(v41, SLODWORD(a3));
  v5 = *(_DWORD *)(v3 + 64);
  if ( (v5 & 8) != 0 )
  {
    sub_100C4050(a1, 8, 50);
  }
  else if ( (v5 & 0x40) != 0 )
  {
    v42 = v42 * 5.0;
  }
  if ( !*((_BYTE *)a1 + 3784) && (v43 & 2) != 0 && (v43 & 0x60000000) == 0 )
    v42 = v42 * 0.5;
  if ( sub_1032E100((int)a1, (int)v41) )
    (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(*a1 + 808))(100.0, 1, 0.0, 0);
  v6 = a1[906];
  if ( v6 )
    v7 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v6 + 200))(v6, v41);
  else
    v7 = sub_10035940(a1, v3, (int)v41);
  v8 = (double)a1[54];
  v45 = v7;
  v9 = v42 / v8;
  if ( v9 > 1.0 )
    v9 = 1.0;
  v10 = *a1;
  a3 = v9;
  v11 = (*(int (__thiscall **)(int *, int *))(v10 + 2248))(a1, v41);
  v12 = (*(int (__thiscall **)(int *, int *))(*a1 + 2252))(a1, v41);
  if ( !*((_BYTE *)a1 + 1668) )
  {
    if ( *((_BYTE *)a1 + 3776) || !v11 && !v12 || (v43 & 0x10) != 0 || (v43 & 0x400000) != 0 )
    {
      switch ( (*(int (__thiscall **)(int *, int *, _DWORD, int))(*a1 + 2264))(a1, v41, LODWORD(a3), a2) )
      {
        case 1:
          v13 = (*(int (__thiscall **)(int *, _BYTE *))(*a1 + 504))(a1, v40);
          sub_10330EE0((int)a1, v13, &flt_106F1CA8, 1, 1, 0.0);
          break;
        case 2:
          sub_10023CB0((char *)a1, 74);
          break;
        case 3:
          v20 = *(void (__thiscall **)(int *))(*a1 + 2268);
          *((_BYTE *)a1 + 3777) = 1;
          v20(a1);
          break;
        case 4:
          v14 = *(float *)(v3 + 8);
          v15 = *(float *)(v3 + 12);
          v49 = *(float *)(v3 + 4);
          v50 = v14;
          v51 = v15;
          v44[0] = v49 * 0.25;
          v33 = v44;
          v16 = &v38;
          v44[1] = v14 * 0.25;
          v44[2] = 0.25 * v15;
          goto LABEL_28;
        case 5:
          sub_1023C380(a1, (int)"E3_Phystown.Slicer", 0.0, 0);
          v18 = *(float *)(v3 + 8);
          v19 = *(float *)(v3 + 12);
          v49 = *(float *)(v3 + 4);
          v50 = v18;
          v51 = v19;
          v33 = (float *)&v46;
          v16 = &v39;
          *(float *)&v46 = v49 * 0.1;
          *(float *)&v47 = v18 * 0.1;
          *(float *)&v48 = 0.1 * v19 + 2000.0;
LABEL_28:
          v17 = (*(int (__thiscall **)(int *, char *))(*a1 + 504))(a1, v16);
          sub_10330EE0((int)a1, v17, v33, 1, 0, COERCE_FLOAT(1));
          break;
        default:
          break;
      }
      v37 = a3;
      if ( (*(unsigned __int8 (__thiscall **)(int *, int *))(*a1 + 2260))(a1, v41) )
      {
        v21 = *(_DWORD *)(v3 + 76);
        v22 = sub_102D9B20();
        v23 = v21 == sub_100B9D10(v22, "CombineHeavyCannon");
        if ( (*(unsigned __int8 (__thiscall **)(int *, float))(*a1 + 2276))(a1, COERCE_FLOAT(LODWORD(v37))) )
        {
          v24 = *(float *)(v3 + 8);
          v25 = *(float *)(v3 + 12);
          v49 = *(float *)(v3 + 4);
          v26 = *a1;
          v50 = v24;
          v51 = v25;
          v27 = *(void (__thiscall **)(int *, float *))(v26 + 2272);
          *(float *)&v46 = v49 * 0.5;
          *(float *)&v47 = v24 * 0.5;
          *(float *)&v48 = 0.5 * v51;
          v27(a1, &flt_106F1CA8);
          if ( (v43 & 0x40) != 0
            && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
          {
            v28 = *a1;
            v34 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                              + 4))(
                    dword_106B31E4,
                    0.0,
                    5.0,
                    1,
                    0.0,
                    0)
                + 5.0;
            (*(void (__thiscall **)(int *, _DWORD))(v28 + 808))(a1, LODWORD(v34));
          }
          if ( *(_DWORD *)(dword_10698344 + 48) && v23 )
          {
            v29 = *a1;
            v35 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                              + 4))(
                    dword_106B31E4,
                    0.0,
                    5.0,
                    1,
                    0.0,
                    0)
                + 5.0;
            (*(void (__thiscall **)(int *, _DWORD))(v29 + 808))(a1, LODWORD(v35));
          }
          if ( a3 >= 1.0 )
          {
            a3 = 0.0;
            sub_1002AB00(a1 + 55, &a3);
            v47 = v41[2];
            v30 = *(void (__thiscall **)(int *, int *))(*a1 + 748);
            v48 = v41[3];
            v46 = v41[1];
            v30(a1, &v46);
          }
        }
        else if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1) == 1 )
        {
          (*(void (__thiscall **)(int *, int *))(*a1 + 2256))(a1, v41);
        }
      }
    }
    else
    {
      if ( v11 )
        sub_1023C380(a1, (int)"E3_Phystown.Slicer", 0.0, 0);
      (*(void (__thiscall **)(int *, int *))(*a1 + 2256))(a1, v41);
    }
  }
  v31 = v45;
  if ( v45 > 0 && (v43 & 0x10000008) != 0 && sub_10295590((_BYTE *)a1 + 3652) )
    sub_10023CB0((char *)a1, 17);
  result = v31;
  *((_BYTE *)a1 + 3784) = 0;
  return result;
}
