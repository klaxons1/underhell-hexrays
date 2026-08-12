__int16 __cdecl sub_101C26C0(unsigned __int16 *a1, int a2, int a3, int a4)
{
  __int16 result; // ax
  unsigned __int16 *v5; // edi
  unsigned int v6; // ebp
  __int16 *v7; // esi
  float v8; // [esp+0h] [ebp-14h]
  float v9; // [esp+0h] [ebp-14h]
  float v10; // [esp+0h] [ebp-14h]
  float v11; // [esp+0h] [ebp-14h]

  result = a4 * a3;
  v5 = a1;
  v6 = (unsigned int)&a1[4 * a4 * a3];
  if ( (unsigned int)a1 < v6 )
  {
    v7 = (__int16 *)(a2 + 4);
    do
    {
      v8 = (double)*v5 * 0.000015258789;
      *(v7 - 2) = sub_10094C40(v8);
      v9 = (double)v5[1] * 0.000015258789;
      *(v7 - 1) = sub_10094C40(v9);
      v10 = (double)*(unsigned __int16 *)((char *)v7 + (_DWORD)a1 - a2) * 0.000015258789;
      *v7 = sub_10094C40(v10);
      v11 = (double)v5[3] * 0.000015258789;
      result = sub_10094C40(v11);
      v7[1] = result;
      v5 += 4;
      v7 += 4;
    }
    while ( (unsigned int)v5 < v6 );
  }
  return result;
}
