int __userpurge sub_1036C9A0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // ecx
  _BYTE v6[84]; // [esp+8h] [ebp-6Ch] BYREF
  float v7[3]; // [esp+5Ch] [ebp-18h] BYREF
  float v8[3]; // [esp+68h] [ebp-Ch] BYREF
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(a3 + 64) & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v4 = *(_DWORD *)(a1 + 252);
    v8[0] = *(float *)(a1 + 580);
    v8[1] = *(float *)(a1 + 584);
    v8[2] = *(float *)(a1 + 588) - 64.0;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(a1);
    v7[0] = *(float *)(a1 + 580);
    v7[1] = *(float *)(a1 + 584);
    v7[2] = *(float *)(a1 + 588) + 1.0;
    sub_1002A5F0((int)&savedregs, a1, v7, v8, 16395, a1, 0, (int)v6);
    sub_10264E40((int)v6, (int)"YellowBlood");
  }
  return sub_10035690(a1, a2, a3, a3);
}
