bool __userpurge sub_10232950@<al>(int a1@<ecx>, double a2@<st0>, int a3)
{
  if ( *(_BYTE *)(a1 + 832) )
  {
    if ( *(_DWORD *)(a1 + 260) )
      sub_1022FB60(a1, 0, *(char **)(a1 + 808), 1);
    else
      sub_10232840(a1, a2, a3, *(char **)(a1 + 808), 1);
    return 0;
  }
  else
  {
    return !*(_BYTE *)(a1 + 833) || *(_DWORD *)(a3 + 2684) == 2;
  }
}
