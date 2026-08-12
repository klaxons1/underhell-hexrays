// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_100CB300(int a1@<ecx>, int a2@<ebp>, int a3, float *a4, float *a5)
{
  bool v6; // zf
  double v7; // st7
  float *v8; // edi
  double v9; // st5
  double v10; // st7
  double v11; // st5
  double v12; // st6
  double v13; // st3
  double v14; // st4
  double v15; // st7
  double v16; // rt2
  float *v17; // eax
  float v18[22]; // [esp+28h] [ebp-12Ch] BYREF
  _BYTE v19[12]; // [esp+80h] [ebp-D4h] BYREF
  float v20[10]; // [esp+8Ch] [ebp-C8h] BYREF
  char v21; // [esp+B7h] [ebp-9Dh]
  int v22; // [esp+DCh] [ebp-78h] BYREF
  _BYTE v23[16]; // [esp+E8h] [ebp-6Ch] BYREF
  float v24[2]; // [esp+F8h] [ebp-5Ch] BYREF
  float v25[10]; // [esp+100h] [ebp-54h] BYREF
  float v26[3]; // [esp+128h] [ebp-2Ch] BYREF
  float v27; // [esp+134h] [ebp-20h] BYREF
  float v28; // [esp+138h] [ebp-1Ch]
  float v29; // [esp+13Ch] [ebp-18h]
  int v30; // [esp+140h] [ebp-14h]
  int v31; // [esp+144h] [ebp-10h]
  int v32; // [esp+148h] [ebp-Ch]
  void *v33; // [esp+14Ch] [ebp-8h]
  void *retaddr; // [esp+154h] [ebp+0h]

  v32 = a2;
  v33 = retaddr;
  v6 = *(_DWORD *)(a3 + 92) == (_DWORD)"weapon_physcannon";
  v30 = a1;
  if ( v6 || (unsigned __int8)sub_100D6240("weapon_physcannon") )
  {
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, &v27);
      v7 = a4[2];
      v31 = 0;
      v8 = v25;
      v9 = v7 * 0.0;
      v10 = a4[1] - v9;
      v11 = v9 - *a4;
      v12 = *a4 * 0.0 - 0.0 * a4[1];
      v24[0] = *a4;
      v24[1] = a4[1];
      v25[0] = a4[2];
      v13 = -a4[1];
      v14 = -a4[2];
      v25[1] = -*a4;
      v25[2] = v13;
      v25[3] = v14;
      v25[4] = v10;
      v25[5] = v11;
      v25[6] = v12;
      v25[7] = -v10;
      v25[8] = -v11;
      v25[9] = -v12;
      while ( 1 )
      {
        v15 = 48.0 * *v8;
        v16 = *(v8 - 1) * 48.0;
        v26[0] = *(v8 - 2) * 48.0 + v27;
        v26[1] = v16 + v28;
        v26[2] = v15 + v29;
        sub_1001F180(v18, &v27, v26);
        sub_10265570(v30, 0);
        (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v18,
          16395,
          &v22,
          v19);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v19, (int)v20, 255, 0, 0, 1, 5.0);
        if ( !v21 && 1.0 == v20[8] )
          break;
        v8 += 3;
        if ( ++v31 >= 4 )
          goto LABEL_10;
      }
      v17 = &v24[3 * v31];
      *a5 = *v17;
      a5[1] = v17[1];
      a5[2] = v17[2];
    }
    else
    {
LABEL_10:
      *a5 = *a4;
      a5[1] = a4[1];
      a5[2] = a4[2];
    }
  }
  else
  {
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -60.0,
            60.0);
    sub_10425F30((int)v23, v28);
    sub_10425E60(v23, a4, a5);
    a5[2] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -0.5,
              0.5);
    off_10689714();
  }
}
