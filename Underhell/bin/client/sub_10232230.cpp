int __usercall sub_10232230@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax

  sub_10232090((_DWORD *)a1);
  sub_10231750(a1);
  result = 0xFFFF;
  *(_WORD *)(a1 + 20) = -1;
  if ( *(int *)(a1 + 12) >= 0 )
  {
    result = *(_DWORD *)(a1 + 4);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(a1 + 4), a2);
      *(_DWORD *)(a1 + 4) = 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_WORD *)(a1 + 22) = -1;
  if ( *(int *)(a1 + 12) >= 0 )
  {
    result = *(_DWORD *)(a1 + 4);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(a1 + 4));
      *(_DWORD *)(a1 + 4) = 0;
    }
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
