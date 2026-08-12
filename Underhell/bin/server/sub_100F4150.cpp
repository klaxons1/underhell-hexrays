// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_100F4150(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  double v5; // st6
  double v6; // rt0
  int v7; // edx
  void (__thiscall *v8)(int, _BYTE *); // edx
  double (__thiscall *v9)(int); // eax
  double v10; // st7
  double (__thiscall *v11)(int); // eax
  float v13[20]; // [esp+40h] [ebp-DCh] BYREF
  _BYTE v14[12]; // [esp+90h] [ebp-8Ch] BYREF
  _BYTE v15[80]; // [esp+9Ch] [ebp-80h] BYREF
  int v16; // [esp+ECh] [ebp-30h] BYREF
  float v17; // [esp+F4h] [ebp-28h]
  float v18; // [esp+F8h] [ebp-24h] BYREF
  float v19; // [esp+FCh] [ebp-20h]
  float v20; // [esp+100h] [ebp-1Ch]
  float v21; // [esp+104h] [ebp-18h] BYREF
  float v22; // [esp+108h] [ebp-14h]
  int v23; // [esp+10Ch] [ebp-10h]
  _DWORD v24[3]; // [esp+110h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+11Ch] [ebp+0h]

  v24[0] = a2;
  v24[1] = retaddr;
  sub_100EC3F0((_DWORD *)a1, 0, 0.0, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(float *)(a1 + 584);
  v6 = *(float *)(a1 + 588) + 8.0;
  v21 = *(float *)(a1 + 580);
  v18 = v21;
  v22 = v5;
  v19 = v5;
  *(float *)&v23 = v6;
  v20 = v6 - 32.0;
  sub_1001F180(v13, &v21, &v18);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    100679691,
    &v16,
    v14,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 0, 0, 1, 5.0);
  if ( v15[43] )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v7 = *(_DWORD *)(a1 + 252);
    v21 = *(float *)(a1 + 580);
    v22 = *(float *)(a1 + 584);
    *(float *)&v23 = *(float *)(a1 + 588) - 32.0;
    if ( (v7 & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1002A5F0((int)v24, a1, (float *)(a1 + 580), &v21, 100679691, a1, 0, (int)v14);
  }
  v8 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 1148);
  v23 = 64;
  v8(a1, v14);
  if ( 0.0 != ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 1164))(a1) )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v9 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 1168);
    v22 = 0.0;
    v21 = 0.0;
    v10 = v9(a1);
    v11 = *(double (__thiscall **)(int))(*(_DWORD *)a1 + 1164);
    v20 = v10;
    v19 = 1.0;
    v18 = 150.0;
    v17 = v11(a1);
    sub_10261B70(a1 + 580, v17, v18, v19, v20, SLODWORD(v21), SLOBYTE(v22));
  }
}
