_DWORD *__stdcall sub_101D6B90(_DWORD *a1, _BYTE *a2, unsigned __int8 *a3)
{
  unsigned __int16 v3; // cx
  unsigned __int8 *v4; // esi
  int v5; // ebp
  _DWORD *result; // eax
  int v7; // edx
  int v8; // edi
  int v9; // [esp+14h] [ebp+4h]
  int v10; // [esp+18h] [ebp+8h]

  HIBYTE(v3) = a2[1];
  v4 = a3;
  v5 = 0;
  LOBYTE(v3) = *a2;
  result = a1;
  v7 = 1 - (_DWORD)a3;
  a1[1] = 0;
  v8 = -16;
  *a1 = v3;
  v10 = 2 - (_DWORD)a3;
  v9 = 3 - (_DWORD)a3;
  do
  {
    if ( v5 >= 5 )
    {
      if ( v5 <= 5 )
      {
        *result |= *v4 << 31;
        result[1] |= (*v4 >> 1) & 3;
      }
      else
      {
        result[1] |= (*v4 & 7) << v8;
      }
    }
    else
    {
      *result |= (*v4 & 7) << (v8 + 32);
    }
    if ( (int)&v4[v7] >= 5 )
    {
      if ( (int)&v4[v7] <= 5 )
      {
        *result |= v4[1] << 31;
        result[1] |= (v4[1] >> 1) & 3;
      }
      else
      {
        result[1] |= (v4[1] & 7) << (v8 + 3);
      }
    }
    else
    {
      *result |= (v4[1] & 7) << (v8 + 35);
    }
    if ( (int)&v4[v10] >= 5 )
    {
      if ( (int)&v4[v10] <= 5 )
      {
        *result |= v4[2] << 31;
        result[1] |= (v4[2] >> 1) & 3;
      }
      else
      {
        result[1] |= (v4[2] & 7) << (v8 + 6);
      }
    }
    else
    {
      *result |= (v4[2] & 7) << (v8 + 38);
    }
    if ( (int)&v4[v9] >= 5 )
    {
      if ( (int)&v4[v9] <= 5 )
      {
        *result |= v4[3] << 31;
        result[1] |= (v4[3] >> 1) & 3;
      }
      else
      {
        result[1] |= (v4[3] & 7) << (v8 + 9);
      }
    }
    else
    {
      *result |= (v4[3] & 7) << (v8 + 41);
    }
    v8 += 12;
    v5 += 4;
    v4 += 4;
  }
  while ( v8 < 32 );
  return result;
}
