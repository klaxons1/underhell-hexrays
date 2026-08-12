int __userpurge sub_101369C0@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>, int a4@<esi>, float *a5)
{
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  double v11; // rt0
  double v12; // st5
  double v13; // rt1
  double v14; // st5
  double v15; // rt2
  double v16; // st5
  void (__thiscall *v17)(int); // eax
  double v18; // st4
  double v19; // st6
  double v20; // st4
  double v21; // st5
  double v22; // st6
  int result; // eax
  float v24; // [esp+28h] [ebp-F0h]
  int *v27; // [esp+34h] [ebp-E4h] BYREF
  int **v28; // [esp+38h] [ebp-E0h]
  float v29[20]; // [esp+40h] [ebp-D8h] BYREF
  int v30; // [esp+90h] [ebp-88h] BYREF
  float v31[16]; // [esp+9Ch] [ebp-7Ch] BYREF
  char v32; // [esp+DCh] [ebp-3Ch]
  bool v33; // [esp+DDh] [ebp-3Bh]
  float v34; // [esp+F4h] [ebp-24h]
  float v35; // [esp+F8h] [ebp-20h]
  float v36; // [esp+FCh] [ebp-1Ch]
  float v37; // [esp+100h] [ebp-18h]
  float v38; // [esp+104h] [ebp-14h]
  int v39; // [esp+108h] [ebp-10h]
  int v40; // [esp+10Ch] [ebp-Ch]
  void *v41; // [esp+110h] [ebp-8h]
  void *retaddr; // [esp+118h] [ebp+0h]

  v40 = a2;
  v41 = retaddr;
  v39 = 0;
  while ( 1 )
  {
    v35 = ((double (__thiscall *)(int, _DWORD, _DWORD, float *, int, int *, int **))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                              + 4))(
            dword_106B31E4,
            -1.0,
            1.0,
            a3,
            a4,
            v27,
            v28);
    v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -1.0,
            1.0);
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -1.0,
           1.0);
    v36 = v35;
    v37 = v34;
    v38 = v6;
    off_10689714();
    v7 = *(float *)(a1 + 1012);
    v8 = v36 * v7;
    v9 = v37 * v7;
    v10 = v7 * v38 + a5[2];
    v11 = v9 + a5[1];
    v12 = v8 + *a5 - *a5;
    v31[4] = v12;
    v13 = v12;
    v14 = v11 - a5[1];
    v31[5] = v14;
    v15 = v14;
    v16 = v10 - a5[2];
    v31[6] = v16;
    v33 = 0.0 != v16 * v16 + v13 * v13 + v15 * v15;
    v31[14] = 0.0;
    v28 = 0;
    v31[13] = 0.0;
    v27 = (int *)a1;
    v31[12] = 0.0;
    v31[10] = 0.0;
    v32 = 1;
    v31[9] = 0.0;
    v31[8] = 0.0;
    v31[0] = *a5;
    v31[1] = a5[1];
    v31[2] = a5[2];
    sub_10265570(a1, 0);
    v17 = *(void (__thiscall **)(int))(*(_DWORD *)dword_106B31F4 + 16);
    v28 = &v27;
    v27 = &v30;
    a4 = 16395;
    a3 = v31;
    v17(dword_106B31F4);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)&v27, (int)v29, 255, 0, 0, 1, 5.0);
    v18 = v29[1] - a5[1];
    v19 = v18 * v18;
    v20 = v29[0] - *a5;
    v21 = v19;
    v22 = v29[2] - a5[2];
    v24 = v20 * v20 + v21 + v22 * v22;
    if ( *(float *)(a1 + 1012) * 0.1 <= off_10689708(v24) && 1.0 != v29[8] )
      break;
    result = v39 + 1;
    v39 = result;
    if ( result >= 10 )
      return result;
  }
  return sub_10135F10(a1, (int)a5, (int)v29);
}
