int __cdecl sub_1009AE20(_DWORD *a1, int a2, int a3)
{
  int result; // eax
  int v4; // eax
  char v5; // cl

  result = *a1;
  if ( *(int *)(*a1 + 12) > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(_BYTE *)(v4 + a1[1]);
      *(_BYTE *)(v4 + a3) = v5;
      if ( !v5 )
        break;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(*a1 + 12) );
    result = *(_DWORD *)(*a1 + 12);
    *(_BYTE *)(result + a3 - 1) = 0;
  }
  return result;
}
