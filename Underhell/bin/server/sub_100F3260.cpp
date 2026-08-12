// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100F3260@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  float v5; // edx
  float v6; // eax
  int v7; // ecx
  double v8; // st6
  double v9; // st5
  double v10; // st7
  float v13[22]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v14[12]; // [esp+7Ch] [ebp-94h] BYREF
  int v15; // [esp+88h] [ebp-88h] BYREF
  int v16; // [esp+D4h] [ebp-3Ch] BYREF
  float v17[3]; // [esp+E0h] [ebp-30h] BYREF
  float v18; // [esp+ECh] [ebp-24h] BYREF
  float v19; // [esp+F0h] [ebp-20h]
  float v20; // [esp+F4h] [ebp-1Ch]
  float v21; // [esp+F8h] [ebp-18h]
  float v22; // [esp+FCh] [ebp-14h]
  float v23; // [esp+100h] [ebp-10h]
  int v24; // [esp+104h] [ebp-Ch]
  void *v25; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v5 = *(float *)(a1 + 480);
  v6 = *(float *)(a1 + 484);
  v21 = *(float *)(a1 + 476);
  v22 = v5;
  v23 = v6;
  off_10689714();
  v7 = *(_DWORD *)(a1 + 252) >> 11;
  v18 = v21 * 32.0;
  v19 = v22 * 32.0;
  v20 = 32.0 * v23;
  if ( (v7 & 1) != 0 )
    sub_100DAE60(a1);
  v8 = *(float *)(a1 + 584) - v19;
  v9 = *(float *)(a1 + 580) - v18;
  v10 = *(float *)(a1 + 588) - v20;
  v17[0] = v9;
  v17[1] = v8;
  v17[2] = v10;
  v18 = v9 + v21 * 64.0;
  v19 = v8 + v22 * 64.0;
  v20 = v10 + 64.0 * v23;
  sub_1001F180(v13, v17, &v18);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    16395,
    &v16,
    v14,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)&v15, 255, 0, 0, 1, 5.0);
  return (*(int (__thiscall **)(int, _BYTE *, int, int, void *))(*(_DWORD *)a1 + 1148))(a1, v14, 64, v24, v25);
}
