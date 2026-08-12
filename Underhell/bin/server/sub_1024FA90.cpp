int __usercall sub_1024FA90@<eax>(int a1@<ecx>, int a2@<edi>)
{
  float v4; // [esp+0h] [ebp-Ch]

  sub_1024E650((float *)a1, a2);
  if ( (*(_BYTE *)(a1 + 248) & 0x10) != 0 )
    *(float *)(a1 + 836) = *(float *)(a1 + 724);
  sub_1024E9E0(a1);
  if ( (*(_BYTE *)(a1 + 248) & 8) != 0 )
  {
    sub_1025F370(a1, a1 + 828, 0);
    *(_DWORD *)(a1 + 800) = 1;
    sub_100E11A0(a1, (float *)(a1 + 956));
    *(_DWORD *)(a1 + 996) = 0;
  }
  else
  {
    sub_1025F370(a1, a1 + 816, 0);
    *(_DWORD *)(a1 + 800) = 0;
    sub_100E11A0(a1, (float *)(a1 + 944));
    *(_DWORD *)(a1 + 996) = 1;
  }
  *(_DWORD *)(a1 + 1000) = 1;
  sub_100EC3F0((_DWORD *)a1, (int)sub_1024E430, 0.0, 0);
  v4 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC4A0((int *)a1, v4, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
}
