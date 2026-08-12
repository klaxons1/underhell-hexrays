// bad sp value at call has been detected, the output may be wrong!
_DWORD *__userpurge sub_10200370@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, _DWORD *a5)
{
  int v6; // edx
  double v7; // st5
  double v8; // st6
  double v9; // st7
  int v10; // eax
  _DWORD *result; // eax
  int v12; // edx
  int v13; // ecx
  float v15[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v16[12]; // [esp+74h] [ebp-7Ch] BYREF
  _DWORD v17[19]; // [esp+80h] [ebp-70h] BYREF
  float v18[3]; // [esp+CCh] [ebp-24h] BYREF
  float v19; // [esp+D8h] [ebp-18h] BYREF
  float v20; // [esp+DCh] [ebp-14h]
  float v21; // [esp+E0h] [ebp-10h]
  int v22; // [esp+E4h] [ebp-Ch]
  void *v23; // [esp+E8h] [ebp-8h]
  void *retaddr; // [esp+F0h] [ebp+0h]

  v22 = a2;
  v23 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10422220(a1 + 704, a1 + 828);
  v6 = *(_DWORD *)(a1 + 252) >> 11;
  v7 = *(float *)(a1 + 832) * 2.0;
  v8 = 2.0 * *(float *)(a1 + 836);
  v9 = *(float *)(a1 + 852);
  v19 = *(float *)(a1 + 828) * 2.0 * v9;
  v20 = v7 * v9;
  v21 = v9 * v8;
  if ( (v6 & 1) != 0 )
    sub_100DAE60(a1);
  v10 = *(_DWORD *)(a1 + 252) >> 11;
  v18[0] = *(float *)(a1 + 580) + v19;
  v18[1] = *(float *)(a1 + 584) + v20;
  v18[2] = *(float *)(a1 + 588) + v21;
  if ( (v10 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v15, (float *)(a1 + 580), v18);
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    16395,
    &v19,
    v16,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v16, (int)v17, 255, 0, 0, 1, 5.0);
  result = a5;
  v12 = v17[1];
  *a5 = v17[0];
  v13 = v17[2];
  a5[1] = v12;
  a5[2] = v13;
  return result;
}
