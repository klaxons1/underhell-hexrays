int __cdecl sub_10109D80(int a1)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // [esp+14h] [ebp+8h]

  do
  {
    result = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 16) = 1;
    if ( result > 0 )
    {
      v3 = 0;
      v5 = result;
      do
      {
        result = *(_DWORD *)(*(_DWORD *)a1 + v3);
        v4 = v3 + *(_DWORD *)a1;
        if ( result )
        {
          if ( result == 10 )
          {
            result = sub_10109D80(*(_DWORD *)(v4 + 32));
          }
          else if ( *(char *)(v4 + 18) < 0 )
          {
            result = *(_DWORD *)(a1 + 12);
            if ( result )
            {
              result = sub_10109D00(*(char **)(v4 + 4), *(_DWORD **)(a1 + 12));
              if ( result )
                *(_DWORD *)(v4 + 40) = result;
            }
          }
        }
        v3 += 52;
        --v5;
      }
      while ( v5 );
    }
    a1 = *(_DWORD *)(a1 + 12);
  }
  while ( a1 && !*(_BYTE *)(a1 + 16) );
  return result;
}
