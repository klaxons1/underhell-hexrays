int __usercall sub_1039ECD0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  double v3; // st7
  int v4; // ecx
  int v6[3]; // [esp+8h] [ebp-18h] BYREF
  int v7[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(a1 + 236) & 4) != 0 )
  {
    v3 = *(float *)(*(_DWORD *)(a1 + 2404) + 8);
    v4 = *(_DWORD *)(a1 + 252);
    *(float *)v7 = v3;
    *(float *)&v7[1] = v3;
    *(float *)&v7[2] = 64.0;
    *(float *)v6 = -v3;
    v6[1] = v6[0];
    *(float *)&v6[2] = -64.0;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1011BB20(a1 + 580, (int)v6, (int)v7, 255, 0, 0, 0, 0.0);
  }
  return sub_1002D900((_DWORD *)a1, a2);
}
