int sub_102DE170()
{
  int result; // eax
  int v1; // esi
  int *v2; // ecx

  result = sub_10153490();
  v1 = result;
  if ( *(_DWORD *)(result + 2184) )
  {
    if ( *(_BYTE *)(result + 84) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *(_DWORD *)(result + 2184) = 0;
    }
    else
    {
      v2 = *(int **)(result + 24);
      if ( v2 )
        result = sub_100194B0(v2, 2184);
      *(_DWORD *)(v1 + 2184) = 0;
    }
  }
  return result;
}
