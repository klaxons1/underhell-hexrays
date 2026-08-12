int __cdecl sub_102615C0(int a1, int a2, int a3)
{
  int v4; // ebx
  float *v5; // edi
  int v7; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-60h] BYREF
  float v9[8]; // [esp+18h] [ebp-54h] BYREF
  float v10; // [esp+38h] [ebp-34h]
  char v11; // [esp+42h] [ebp-2Ah]
  int v12; // [esp+58h] [ebp-14h]
  float v13[3]; // [esp+60h] [ebp-Ch] BYREF
  int v14; // [esp+74h] [ebp+8h]

  sub_101C73D0((unsigned int *)a1, 0);
  v4 = *(_DWORD *)(a1 + 420);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v5 = (float *)(a1 + 580);
  sub_10265A60(a1, a1 + 580, a1 + 580, a2, a3, v4, v8);
  if ( 0.0 == v10 )
    return -1;
  v14 = *(_DWORD *)(a1 + 420);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = *(_DWORD *)(a1 + 252);
  v13[0] = *v5;
  v13[1] = *(float *)(a1 + 584);
  v13[2] = *(float *)(a1 + 588) - 256.0;
  if ( (v7 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10265A60(a1, a1 + 580, v13, a2, a3, v14, v8);
  if ( v11 )
    return -1;
  if ( 1.0 == v10 )
    return 0;
  sub_100E0D20(a1, v9);
  sub_101C73D0((unsigned int *)a1, v12);
  return 1;
}
