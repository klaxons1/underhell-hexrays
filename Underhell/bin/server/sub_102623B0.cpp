_DWORD *__cdecl sub_102623B0(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  int v6; // esi

  result = sub_10262330();
  if ( a1 == result )
  {
    result = (_DWORD *)(a3 / 4);
    byte_106CC0D0 = 0;
    if ( a3 / 4 > 0 )
    {
      v4 = a2;
      v5 = a3 / 4;
      do
      {
        *(_DWORD *)((char *)v4 + byte_106CA0C4 - (_BYTE *)a2) = *v4
                                                              & ~*(_DWORD *)((char *)v4
                                                                           + byte_106CA0C4
                                                                           - (_BYTE *)a2
                                                                           - 0x2000);
        if ( *v4 )
          byte_106CC0D0 = 1;
        ++v4;
        --v5;
      }
      while ( v5 );
    }
    if ( a3 % 4 > 0 )
    {
      result = &a2[(_DWORD)result];
      v6 = a3 % 4;
      do
      {
        *((_BYTE *)result + byte_106CA0C4 - (_BYTE *)a2) = *(_BYTE *)result
                                                         & (*((_BYTE *)result + byte_106CA0C4 - (_BYTE *)a2 - 0x2000) == 0);
        if ( *(_BYTE *)result )
          byte_106CC0D0 = 1;
        result = (_DWORD *)((char *)result + 1);
        --v6;
      }
      while ( v6 );
    }
  }
  return result;
}
