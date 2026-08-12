int __cdecl sub_100332D0(int *a1, int a2, int a3)
{
  int *v3; // esi
  int v4; // ecx
  _DWORD *v5; // edi
  int result; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+8h] [ebp-8h]
  int v15; // [esp+Ch] [ebp-4h]
  int v16; // [esp+Ch] [ebp-4h]

  v3 = a1;
  v4 = a1[493];
  v5 = a1 + 490;
  result = a3 - v4;
  v13 = a3 - v4;
  if ( a3 != v4 )
  {
    v7 = 0;
    if ( v4 > 0 )
    {
      v15 = 0;
      do
      {
        sub_1003BDA0(v15 + *v5, 1);
        v15 += 32;
        ++v7;
      }
      while ( v7 < a1[493] );
      result = v13;
    }
    if ( result <= 0 )
    {
      v8 = a3;
      v9 = -result;
      v10 = a1[493] + result - a3;
      if ( a1[493] - v9 - a3 > 0 && v9 > 0 )
      {
        memcpy((void *)(*v5 + 32 * a3), (const void *)(*v5 + 32 * (v9 + a3)), 32 * v10);
        v8 = a3;
      }
      a1[493] -= v9;
      sub_10030FF0(a1 + 495, v8, v9);
    }
    else
    {
      sub_10032750(a1 + 490, a1[493], result, 0);
      sub_10032FF0(a1 + 495, a1[498], v13, 0);
    }
    result = 0;
    v11 = 0;
    if ( a3 > 0 )
    {
      v14 = 0;
      v16 = 0;
      while ( 1 )
      {
        v12 = v16 + v3[495];
        (*(void (__thiscall **)(int, char *))(*(_DWORD *)v12 + 44))(v12, off_103D8754[v11]);
        result = sub_1003CF30(v14 + *v5, v12, 1, 1);
        v16 += 44;
        ++v11;
        v14 += 32;
        if ( v11 >= a3 )
          break;
        v3 = a1;
      }
    }
  }
  return result;
}
