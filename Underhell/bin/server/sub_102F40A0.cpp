char __usercall sub_102F40A0@<al>(int a1@<ecx>, double a2@<st0>)
{
  int v4; // eax
  int v5; // edi

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 5316) + 1364))(*(_DWORD *)(a1 + 5316)) == a1 + 5312
    && *(_DWORD *)(a1 + 5328)
    || *(_BYTE *)(a1 + 2680)
    || sub_100697A0((_DWORD *)a1, 62, 1) )
  {
    return 0;
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    return *(_BYTE *)(a1 + 5700);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  v5 = v4;
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  sub_1004BCD0((float *)(v5 + 580), (float *)(a1 + 580));
  if ( a2 <= 240.0 )
    return 0;
  else
    return *(_BYTE *)(a1 + 5700);
}
