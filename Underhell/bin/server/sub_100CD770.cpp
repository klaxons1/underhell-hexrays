// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_100CD770@<al>(
        unsigned int *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        _BYTE *a5,
        float *a6,
        int a7,
        float a8)
{
  double (__thiscall *v9)(int); // edx
  double v10; // st7
  void (__thiscall *v11)(_BYTE *); // edx
  float v14[22]; // [esp+28h] [ebp-ECh] BYREF
  _BYTE v15[12]; // [esp+80h] [ebp-94h] BYREF
  float v16[10]; // [esp+8Ch] [ebp-88h] BYREF
  char v17; // [esp+B6h] [ebp-5Eh]
  char v18; // [esp+B7h] [ebp-5Dh]
  _BYTE *v19; // [esp+CCh] [ebp-48h]
  float v20[3]; // [esp+D8h] [ebp-3Ch] BYREF
  float v21[3]; // [esp+E4h] [ebp-30h] BYREF
  float v22; // [esp+F0h] [ebp-24h] BYREF
  float v23; // [esp+F4h] [ebp-20h]
  int v24; // [esp+F8h] [ebp-1Ch]
  float v25; // [esp+FCh] [ebp-18h] BYREF
  float v26; // [esp+100h] [ebp-14h]
  float v27; // [esp+104h] [ebp-10h]
  _DWORD v28[3]; // [esp+108h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+114h] [ebp+0h]

  v28[0] = a2;
  v28[1] = retaddr;
  v21[0] = 0.5;
  v21[1] = 0.5;
  v21[2] = 1.0;
  v22 = 0.5;
  v23 = 0.5;
  *(float *)&v24 = 0.5;
  sub_10111860(&v22, v21, v20);
  sub_100CB300((int)a1, (int)v28, (int)a5, a6, &v25);
  v22 = v25 * a8 + v20[0];
  v23 = v26 * a8 + v20[1];
  *(float *)&v24 = a8 * v27 + v20[2];
  sub_1001F180(v14, v20, &v22);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v14,
    16395,
    v21,
    v15,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v15, (int)v16, 255, 0, 0, 1, 5.0);
  if ( v18 || v17 || v16[8] < 1.0 && v19 != a5 )
  {
    v25 = -v25;
    v26 = -v26;
    v27 = -v27;
  }
  v9 = *(double (__thiscall **)(int))(*(_DWORD *)dword_106B31E4 + 4);
  v27 = 600.0;
  v26 = 400.0;
  v10 = v9(dword_106B31E4);
  v25 = v25 * v10;
  v26 = v26 * v10;
  v27 = v10 * v27;
  sub_100E0D20(LODWORD(v25));
  sub_100E0EA0(a7);
  v11 = *(void (__thiscall **)(_BYTE *))(*(_DWORD *)a5 + 868);
  v25 = COERCE_FLOAT(&v25);
  v11(a5);
  v24 = (int)a5;
  a5[1172] = 0;
  return sub_100CD650(a1, v24);
}
