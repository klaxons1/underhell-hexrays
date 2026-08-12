int __usercall sub_1010FCE0@<eax>(int a1@<esi>, float *a2, float a3, float *a4)
{
  float *v4; // edi
  double v5; // st7
  float v6; // edx
  double v7; // st6
  float v8; // eax
  _BYTE v10[84]; // [esp+8h] [ebp-64h] BYREF
  float v11; // [esp+5Ch] [ebp-10h] BYREF
  float v12; // [esp+60h] [ebp-Ch]
  float v13; // [esp+64h] [ebp-8h]
  int v14; // [esp+68h] [ebp-4h]

  v14 = 0;
  v4 = (float *)(a1 + 580);
  while ( 1 )
  {
    v5 = a3;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(a1);
      v5 = a3;
    }
    v6 = *(float *)(a1 + 584);
    v7 = *a2 * v5;
    v8 = *(float *)(a1 + 588);
    v11 = *v4;
    v12 = v6;
    v13 = v8;
    v11 = v7 + v11;
    v12 = a2[1] * v5 + v6;
    v13 = v5 * a2[2] + v8;
    sub_100E0D20(a1, &v11);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_102659D0(a1, a1 + 580, a1 + 580, 33636363, v10);
    if ( !v10[55] )
      break;
    if ( ++v14 >= 100 )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *a4 = *v4;
  a4[1] = *(float *)(a1 + 584);
  a4[2] = *(float *)(a1 + 588);
  return 1;
}
