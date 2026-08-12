// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10410B50@<eax>(int a1@<ecx>, float a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  int v6; // edx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  float v13[20]; // [esp+24h] [ebp-CCh] BYREF
  _BYTE v14[12]; // [esp+74h] [ebp-7Ch] BYREF
  _BYTE v15[76]; // [esp+80h] [ebp-70h] BYREF
  _DWORD v16[3]; // [esp+CCh] [ebp-24h] BYREF
  float v17[6]; // [esp+D8h] [ebp-18h] BYREF
  float retaddr; // [esp+F0h] [ebp+0h]

  v17[3] = a2;
  v17[4] = retaddr;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v6 = *(_DWORD *)(a1 + 252) >> 11;
  v17[0] = *(float *)(a1 + 580) + *(float *)(a1 + 476);
  v17[1] = *(float *)(a1 + 584) + *(float *)(a1 + 480);
  v17[2] = *(float *)(a1 + 588) + *(float *)(a1 + 484);
  if ( (v6 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v13, (float *)(a1 + 580), v17);
  sub_10265570(v16, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    16395,
    v16,
    v14,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 0, 0, 1, 5.0);
  if ( (v15[54] & 4) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 2144);
    if ( v7 != -1 )
    {
      v8 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 2144) & 0xFFF) + 1];
      v9 = v7 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2144) & 0xFFF) + 2] == v9 )
      {
        if ( *v8 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 2144) & 0xFFF) + 2] == v9 )
            v10 = *v8;
          else
            v10 = 0;
          sub_1025FAC0(v10);
          *(_DWORD *)(a1 + 2144) = -1;
        }
      }
    }
    sub_1025FAC0(a1);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1152))(a1);
}
