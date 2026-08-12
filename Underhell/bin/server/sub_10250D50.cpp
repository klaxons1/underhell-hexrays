int __fastcall sub_10250D50(int a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int result; // eax

  v4 = *(_DWORD *)(a1 + 968);
  if ( v4 && *(_DWORD *)(a1 + 972) )
  {
    if ( a3 )
    {
      sub_10035270(v4, a2, 1);
      if ( a3 == 1 )
        return sub_100352C0(*(_DWORD *)(a1 + 972), v5, 1);
    }
    else
    {
      sub_100352C0(v4, a2, 1);
    }
    return sub_10035270(*(_DWORD *)(a1 + 972), v5, 1);
  }
  return result;
}
