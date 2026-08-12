float *__thiscall sub_100E9F60(_DWORD *this, int a2, int a3)
{
  float *result; // eax
  int v5; // edi
  float *v6; // esi
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h]

  result = (float *)this[5];
  if ( (int)result > 0 )
  {
    v5 = 0;
    v8 = this[5];
    do
    {
      result = (float *)this[2];
      v6 = &result[v5 + 5];
      if ( a2 == *(_DWORD *)v6 )
      {
        v7 = a3;
        if ( a3 != *(_DWORD *)v6 )
        {
          if ( a3 )
          {
            sub_100F1650(a3);
            v7 = a3;
          }
          if ( *(_DWORD *)v6 )
          {
            sub_100F1860(*(_DWORD *)v6);
            v7 = a3;
          }
          *(_DWORD *)v6 = v7;
        }
        result = sub_100E9B40((_DWORD *)(v5 * 4 + this[2]), 1, -1);
      }
      v5 += 6;
      --v8;
    }
    while ( v8 );
  }
  return result;
}
