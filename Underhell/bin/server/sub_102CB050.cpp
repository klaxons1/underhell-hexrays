void __userpurge sub_102CB050(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4, float *a5, float *a6, int a7)
{
  double v8; // st7
  double (__thiscall *v9)(int, _DWORD, _DWORD); // eax
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st5
  double v14; // st4
  double v15; // st6
  double v16; // st7
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float v21[23]; // [esp+44h] [ebp-ACh] BYREF
  int v22; // [esp+A0h] [ebp-50h] BYREF
  _DWORD v23[3]; // [esp+ACh] [ebp-44h] BYREF
  float v24[3]; // [esp+B8h] [ebp-38h] BYREF
  float v25[3]; // [esp+C4h] [ebp-2Ch] BYREF
  float v26[3]; // [esp+D0h] [ebp-20h] BYREF
  float v27; // [esp+DCh] [ebp-14h]
  float v28; // [esp+E0h] [ebp-10h]
  int v29; // [esp+E4h] [ebp-Ch]
  void *v30; // [esp+E8h] [ebp-8h]
  void *retaddr; // [esp+F0h] [ebp+0h]

  v29 = a2;
  v30 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_104222B0(a1 + 704, &v22, v26, v25);
  do
  {
    v28 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -0.5,
            0.5);
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -0.5,
           0.5);
    v9 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v27 = v8 + v28;
    v28 = v9(dword_106B31E4, -0.5, 0.5);
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            -0.5,
            0.5);
    v11 = v10 + v28;
  }
  while ( v11 * v11 + v27 * v27 > 1.0 );
  v12 = v11 * a6[1];
  v13 = v25[0] * v12;
  v14 = v25[1] * v12;
  v15 = v27 * *a6;
  v16 = (v12 * v25[2] + v15 * v26[2] + a5[2]) * 56755.84;
  v17 = (v13 + v26[0] * v15 + *a5) * 56755.84 + *a4;
  v18 = (v14 + v26[1] * v15 + a5[1]) * 56755.84 + a4[1];
  v19 = v16 + a4[2];
  v24[0] = v17;
  v24[1] = v18;
  v24[2] = v19;
  sub_1001F180(v21, a4, v24);
  sub_10265570(v23, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v21,
    33570827,
    v23,
    a7,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0(a7, a7 + 12, 255, 0, 0, 1, 5.0);
}
