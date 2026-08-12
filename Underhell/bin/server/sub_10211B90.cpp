int __usercall sub_10211B90@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int (__thiscall *v3)(int); // eax
  float *v4; // eax
  int v5; // edx
  double v6; // st7
  int (__thiscall *v7)(int); // eax
  float *v8; // eax

  sub_10211600(a1, a2);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  *(float *)(a1 + 1688) = *(float *)(a1 + 580);
  *(float *)(a1 + 1692) = *(float *)(a1 + 584);
  *(float *)(a1 + 1696) = *(float *)(a1 + 588);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v3 = *(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4);
  *(float *)(a1 + 1700) = *(float *)(a1 + 704);
  *(float *)(a1 + 1704) = *(float *)(a1 + 708);
  *(float *)(a1 + 1708) = *(float *)(a1 + 712);
  v4 = (float *)v3(a1 + 320);
  v5 = *(_DWORD *)(a1 + 320);
  *(float *)(a1 + 1712) = *v4;
  *(float *)(a1 + 1716) = v4[1];
  v6 = v4[2];
  v7 = *(int (__thiscall **)(int))(v5 + 8);
  *(float *)(a1 + 1720) = v6;
  v8 = (float *)v7(a1 + 320);
  *(float *)(a1 + 1724) = *v8;
  *(float *)(a1 + 1728) = v8[1];
  *(float *)(a1 + 1732) = v8[2];
  if ( 0.0 == *(float *)(a1 + 1736) )
    *(float *)(a1 + 1736) = 60.0;
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 76))(a1, 0);
}
