int __userpurge sub_1027A5F0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  int i; // edi
  int v5; // ecx
  int result; // eax

  if ( a3 != a1[74] )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 852))(a1, a2);
    for ( i = 0; i < a1[86]; ++i )
    {
      v5 = *(_DWORD *)(a1[83] + 4 * i);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 24))(v5, 1);
    }
    a1[86] = 0;
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a1 + 244))(a1, 0);
  }
  a1[74] = a3;
  return result;
}
