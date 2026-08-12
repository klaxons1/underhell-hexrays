int __cdecl sub_101C25C0(int a1, int a2, int a3, int a4, unsigned int a5)
{
  int result; // eax
  int v6; // ebx
  float *v8; // esi
  unsigned __int16 *v9; // edi
  int v10; // [esp+0h] [ebp-4h]
  int v11; // [esp+18h] [ebp+14h]

  result = a5 >> 1;
  if ( a4 > 0 )
  {
    v6 = a3;
    v10 = 2 * result;
    result = 16 * a3;
    v11 = a4;
    do
    {
      if ( v6 > 0 )
      {
        v8 = (float *)(a2 + 8);
        v9 = (unsigned __int16 *)(a1 + 4);
        do
        {
          *(v8 - 2) = sub_1001AB20(*(v9 - 2));
          *(v8 - 1) = sub_1001AB20(*(v9 - 1));
          *v8 = sub_1001AB20(*v9);
          v8[1] = sub_1001AB20(v9[1]);
          v8 += 4;
          v9 += 4;
          --v6;
        }
        while ( v6 );
        v6 = a3;
        result = 16 * a3;
      }
      a1 += v10;
      a2 += result;
      --v11;
    }
    while ( v11 );
  }
  return result;
}
