int __usercall sub_102F63F0@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int v4; // eax

  if ( !sub_100697A0((_DWORD *)a1, 98, 0)
    && !sub_100697A0((_DWORD *)a1, 99, 0)
    && !sub_100697A0((_DWORD *)a1, 100, 0)
    && !sub_100697A0((_DWORD *)a1, 101, 0)
    && !sub_100697A0((_DWORD *)a1, 102, 0) )
  {
    if ( sub_102F40A0(a1, a2) )
    {
      v3 = *(_DWORD *)(a1 + 2324);
      if ( v3 > 0 && v3 < 4 )
      {
        sub_10024230((char *)a1, 79);
        sub_10024230((char *)a1, 81);
      }
    }
  }
  if ( sub_100697A0((_DWORD *)a1, 62, 1) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      if ( *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) + 424) )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 424) + 76))(*(_DWORD *)(v4 + 424)) & 4) != 0 )
          sub_10024230((char *)a1, 26);
      }
    }
  }
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 2124) + 12) & 4) != 0 )
    sub_10024230((char *)a1, 46);
  if ( *(_DWORD *)(a1 + 2324) != 4
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 1088))(a1)
    && !sub_100697A0((_DWORD *)a1, 112, 0) )
  {
    sub_10024230((char *)a1, 62);
  }
  return sub_10393F60(a1);
}
