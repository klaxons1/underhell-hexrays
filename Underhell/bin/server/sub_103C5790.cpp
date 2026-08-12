bool __fastcall sub_103C5790(unsigned int a1, int a2, unsigned int a3, int a4, int *a5)
{
  float *v7; // edi
  double v8; // st6
  double v9; // st5
  float v10[3]; // [esp+8h] [ebp-Ch] BYREF
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  if ( sub_100CEF80(a1, a2, a3, a4, a5) )
    return 1;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v7 = (float *)(a3 + 580);
  v8 = *(float *)(a3 + 584) - *(float *)(a1 + 584);
  v9 = *(float *)(a3 + 580) - *(float *)(a1 + 580);
  if ( v9 * v9 + v8 * v8 >= 14400.0 )
    return 0;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 872))(a1, a3 + 580) )
    return 0;
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  v10[0] = *v7;
  v10[1] = *(float *)(a3 + 584);
  v10[2] = *(float *)(a3 + 588) + 1.0;
  return sub_100DA7A0(a1, (int)&savedregs, (int)v7, a1, v10, a4, (float *)a5) != 0;
}
