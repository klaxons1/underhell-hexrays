int __stdcall sub_101F8490(int *a1, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // [esp+14h] [ebp+8h]
  int v13; // [esp+1Ch] [ebp+10h]

  v4 = a1[3] - 1;
  if ( v4 >= 0 )
  {
    v5 = 84 * v4;
    do
    {
      (**(void (__thiscall ***)(int, _DWORD))(*a1 + v5))(v5 + *a1, 0);
      v5 -= 84;
      --v4;
    }
    while ( v4 >= 0 );
  }
  a1[5] = a3;
  a1[6] = a3;
  result = a3 - 1;
  a1[3] = 0;
  a1[7] = 0;
  v13 = result;
  if ( result >= 0 )
  {
    v12 = a2 + 84 * result;
    do
    {
      v7 = a1[3];
      v8 = a1[1];
      if ( v7 + 1 > v8 )
        sub_101E7DF0(a1, v7 - v8 + 1);
      ++a1[3];
      v9 = *a1;
      v10 = a1[3] - v7 - 1;
      a1[4] = *a1;
      if ( v10 > 0 )
        memcpy((void *)(84 * v7 + v9 + 84), (const void *)(84 * v7 + v9), 84 * v10);
      v11 = (_DWORD *)(*a1 + 84 * v7);
      if ( v11 )
      {
        *v11 = &CUserCmd::`vftable';
        v11[16] = 0;
        v11[17] = 0;
        v11[18] = 0;
        v11[19] = 0;
        v11[20] = 0;
        sub_101F7FB0((int)v11, v12);
      }
      v12 -= 84;
      result = v13 - 1;
      v13 = result;
    }
    while ( result >= 0 );
  }
  return result;
}
