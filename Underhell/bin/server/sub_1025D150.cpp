int __userpurge sub_1025D150@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, int a5, int a6)
{
  int result; // eax

  result = sub_100D62E0(a5, *(_DWORD *)(a1 + 848));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 848) )
    {
      return sub_10259E20(a1);
    }
    else
    {
      if ( a3 )
        *(_DWORD *)(a1 + 800) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
      else
        *(_DWORD *)(a1 + 800) = -1;
      return sub_1025C9A0(a1, a2);
    }
  }
  return result;
}
