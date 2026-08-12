void __userpurge sub_10034B20(int a1@<ecx>, int a2@<ebp>, float *a3, float a4)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  bool v8; // zf
  double v9; // st6
  float v10; // [esp+14h] [ebp-F0h]
  float v11[20]; // [esp+28h] [ebp-DCh] BYREF
  float v12; // [esp+78h] [ebp-8Ch] BYREF
  float v13; // [esp+7Ch] [ebp-88h]
  float v14; // [esp+80h] [ebp-84h]
  float v15; // [esp+84h] [ebp-80h] BYREF
  float v16; // [esp+88h] [ebp-7Ch]
  float v17; // [esp+8Ch] [ebp-78h]
  int v18; // [esp+D0h] [ebp-34h] BYREF
  float v19[3]; // [esp+E0h] [ebp-24h] BYREF
  float v20; // [esp+ECh] [ebp-18h] BYREF
  float v21; // [esp+F0h] [ebp-14h]
  float v22; // [esp+F4h] [ebp-10h]
  _DWORD v23[3]; // [esp+F8h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+104h] [ebp+0h]

  v23[0] = a2;
  v23[1] = retaddr;
  if ( *a3 == flt_10689730 && a3[1] == flt_10689734 && a3[2] == flt_10689738 )
  {
    v5 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 924))(a1, v19);
    v20 = *v5;
    v21 = v5[1];
    v6 = v5[2];
  }
  else
  {
    v20 = *a3;
    v21 = a3[1];
    v6 = a3[2];
  }
  v22 = v6;
  if ( 3.4028235e38 == a4 )
    a4 = *(float *)((*(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, v19) + 8);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(float *)(a1 + 580);
  v8 = *(_DWORD *)(dword_1069109C + 48) == 0;
  v19[0] = *(float *)(a1 + 580);
  v9 = *(float *)(a1 + 584);
  v19[1] = *(float *)(a1 + 584);
  v19[2] = a4;
  v20 = v7 + v20 * 16384.0;
  v21 = v9 + v21 * 16384.0;
  v22 = 16384.0 * v22 + a4;
  if ( v8 )
  {
    sub_10265790(a1, 0, 0);
    sub_1001F180(v11, v19, &v20);
    (*(void (__thiscall **)(int, float *, int, int *, float *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v11,
      33570881,
      &v18,
      &v12);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)&v12, (int)&v15, 255, 0, 0, 1, -1.0);
  }
  else
  {
    sub_1002A5F0((int)v23, a1, v19, &v20, 16449, a1, 0, (int)&v12);
  }
  v10 = (v12 - v15) * (v12 - v15) + (v13 - v16) * (v13 - v16) + (v14 - v17) * (v14 - v17);
  off_10689708(v10);
}
