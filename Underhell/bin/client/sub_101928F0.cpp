int **__stdcall sub_101928F0(int **a1, int a2)
{
  int *v2; // ecx
  int v3; // eax
  int **result; // eax
  int v5; // edx
  int *v6; // ecx
  int *v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h]

  v2 = *(int **)a2;
  if ( *(_DWORD *)a2 && (v3 = *(_DWORD *)(a2 + 4), v3 >= 0) && v3 < v2[1] )
  {
    v5 = v3 + 1;
    if ( v3 + 1 >= v2[1] )
    {
      v6 = (int *)*v2;
      if ( v6 )
      {
        v7 = v6;
        v8 = 0;
      }
      else
      {
        v7 = 0;
        v8 = -1;
      }
      result = a1;
      *a1 = v7;
      a1[1] = (int *)v8;
    }
    else
    {
      result = a1;
      *a1 = v2;
      a1[1] = (int *)v5;
    }
  }
  else
  {
    result = a1;
    *a1 = 0;
    a1[1] = (int *)-1;
  }
  return result;
}
