// bad sp value at call has been detected, the output may be wrong!
double __userpurge sub_100A2930@<st0>(float a1@<ebp>, int a2@<esi>, float *a3, float *a4, float a5)
{
  double v5; // st6
  double v6; // rt0
  double v7; // st3
  double v8; // st6
  double v9; // st5
  double result; // st7
  float v11[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v12[12]; // [esp+74h] [ebp-7Ch] BYREF
  float v13[19]; // [esp+80h] [ebp-70h] BYREF
  int v14; // [esp+CCh] [ebp-24h] BYREF
  float v15[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v15[3] = a1;
  v15[4] = retaddr;
  v5 = a5 * a4[2];
  v6 = a4[1] * a5;
  v15[0] = *a4 * a5 + *a3;
  v15[1] = v6 + a3[1];
  v15[2] = v5 + a3[2];
  sub_1000E430(v11, a3, v15);
  sub_1012D400(0, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v11,
    1,
    &v14,
    v12,
    a2);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  v7 = 1.0 - v13[8];
  v8 = -a4[1] * v7;
  v9 = -a4[2] * v7;
  result = v7;
  *a4 = -*a4 * v7;
  a4[1] = v8;
  a4[2] = v9;
  return result;
}
