// bad sp value at call has been detected, the output may be wrong!
char *__usercall sub_103761E0@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // ecx
  float v8[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v9[12]; // [esp+74h] [ebp-7Ch] BYREF
  float v10[19]; // [esp+80h] [ebp-70h] BYREF
  _DWORD v11[3]; // [esp+CCh] [ebp-24h] BYREF
  float v12; // [esp+D8h] [ebp-18h] BYREF
  int v13; // [esp+DCh] [ebp-14h]
  float v14; // [esp+E0h] [ebp-10h]
  int v15; // [esp+E4h] [ebp-Ch]
  void *v16; // [esp+E8h] [ebp-8h]
  void *retaddr; // [esp+F0h] [ebp+0h]

  v15 = a2;
  v16 = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = *(_DWORD *)(a1 + 252);
  v12 = *(float *)(a1 + 580);
  v13 = *(int *)(a1 + 584);
  v14 = *(float *)(a1 + 588) + 480.0;
  if ( (v5 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v8, (float *)(a1 + 580), &v12);
  sub_10265570(v11, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v8,
    1174421507,
    v11,
    v9,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v9, (int)v10, 255, 0, 0, 1, 5.0);
  v13 = 79;
  if ( v10[8] >= 1.0 )
    return sub_10023E00((char *)a1, v13);
  else
    return sub_10023CB0((char *)a1, v13);
}
