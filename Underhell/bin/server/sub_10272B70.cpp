// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10272B70(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  float v5; // edx
  float v6; // eax
  double v7; // st7
  int v8; // ecx
  int v9; // edx
  float v11[20]; // [esp+24h] [ebp-ECh] BYREF
  _BYTE v12[12]; // [esp+74h] [ebp-9Ch] BYREF
  int v13; // [esp+80h] [ebp-90h] BYREF
  float v14[3]; // [esp+D0h] [ebp-40h] BYREF
  float v15[3]; // [esp+DCh] [ebp-34h] BYREF
  float v16; // [esp+E8h] [ebp-28h]
  float v17; // [esp+ECh] [ebp-24h]
  float v18; // [esp+F0h] [ebp-20h]
  float v19; // [esp+F4h] [ebp-1Ch]
  float v20; // [esp+F8h] [ebp-18h]
  float v21; // [esp+FCh] [ebp-14h]
  float v22; // [esp+100h] [ebp-10h]
  int v23; // [esp+104h] [ebp-Ch]
  void *v24; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v23 = a2;
  v24 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v5 = *(float *)(a1 + 480);
  v6 = *(float *)(a1 + 484);
  v17 = *(float *)(a1 + 476);
  v18 = v5;
  v19 = v6;
  v7 = off_10689714();
  v16 = v7;
  v8 = *(_DWORD *)(a1 + 252) >> 11;
  v20 = v17 * 8.0;
  v21 = v18 * 8.0;
  v22 = 8.0 * v19;
  if ( (v8 & 1) != 0 )
  {
    sub_100DAE60(a1);
    v7 = v16;
  }
  v9 = *(_DWORD *)(a1 + 252) >> 11;
  v14[0] = *(float *)(a1 + 580) - v20;
  v14[1] = *(float *)(a1 + 584) - v21;
  v14[2] = *(float *)(a1 + 588) - v22;
  v20 = v17 * v7;
  v21 = v18 * v7;
  v22 = v7 * v19;
  if ( (v9 & 1) != 0 )
    sub_100DAE60(a1);
  v15[0] = *(float *)(a1 + 580) + v20;
  v15[1] = *(float *)(a1 + 584) + v21;
  v15[2] = *(float *)(a1 + 588) + v22;
  sub_1001F180(v11, v14, v15);
  (*(void (__thiscall **)(int, float *, int, _DWORD, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    1174421507,
    0,
    v12,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)&v13, 255, 0, 0, 1, -1.0);
  sub_10262ED0((int)v12, 2, 0);
  sub_1025FAC0(a1);
}
