int __usercall sub_103F0890@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int *v4; // edi
  int v5; // eax
  int v6; // esi
  int result; // eax

  sub_103EB210(a1, a2);
  sub_100E88A0((_DWORD *)a1, 0);
  v3 = sub_10261B20();
  if ( v3 )
  {
    v4 = (int *)(v3 + 2252);
    v5 = *(_DWORD *)(v3 + 2252);
    v6 = v5 | 0x200;
    if ( v5 != (v5 | 0x200) )
    {
      (*(void (__thiscall **)(int *, int *))*(v4 - 15))(v4 - 15, v4);
      *v4 = v6;
    }
  }
  sub_100C1600(a1, 2, *(_BYTE *)(a1 + 2120) != 0);
  sub_103EFAF0((_DWORD *)a1);
  result = sub_100C1600(a1, 3, 1);
  *(_BYTE *)(a1 + 2101) = 0;
  return result;
}
