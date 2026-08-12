int __cdecl sub_1015A5E0(int a1, char *a2)
{
  int result; // eax

  if ( a2 )
  {
    if ( !a2[1428] )
    {
      result = a1;
      if ( *(_DWORD *)(a1 + 4) == 1 )
      {
        if ( a2[2360] )
          return sub_10159BD0(a2);
        else
          a2[1428] = 2;
      }
    }
  }
  return result;
}
