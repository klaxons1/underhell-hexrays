int __usercall sub_1039FAD0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  float v4[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_106B31F4)(dword_106B31F4, a1 + 580, 0) & 0x4030) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v4[0] = *(float *)(a1 + 580);
    v4[1] = *(float *)(a1 + 584);
    a2 = *(float *)(a1 + 588) + 64.0;
    v4[2] = a2;
    if ( ((**(int (__thiscall ***)(int, float *, _DWORD))dword_106B31F4)(dword_106B31F4, v4, 0) & 0x4030) != 0 )
      return sub_1039F920((_DWORD *)a1);
  }
  sub_1039F420(a1, a2);
  sub_1039E640(a1);
  return sub_10041D00((_DWORD *)a1);
}
