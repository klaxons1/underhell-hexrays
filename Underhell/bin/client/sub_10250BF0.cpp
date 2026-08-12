void __cdecl sub_10250BF0(int *a1)
{
  _DWORD *v1; // ebx
  int v2; // edi
  int v3; // eax
  int v4; // ebp
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // eax

  a1[3] = 0;
  v1 = (_DWORD *)dword_1047EDB0;
  if ( dword_1047EDB0 )
  {
    do
    {
      v2 = a1[3];
      v3 = a1[1];
      v4 = v1[3];
      if ( v2 + 1 > v3 )
        sub_1010AFF0(a1, v2 - v3 + 1);
      ++a1[3];
      v5 = *a1;
      v6 = a1[3] - v2 - 1;
      v7 = a1[3] - v2 == 1;
      a1[4] = *a1;
      if ( v6 >= 0 && !v7 )
        memcpy((void *)(v5 + 4 * v2 + 4), (const void *)(v5 + 4 * v2), 4 * v6);
      v8 = (_DWORD *)(*a1 + 4 * v2);
      if ( v8 )
        *v8 = v4;
      v1 = (_DWORD *)*v1;
    }
    while ( v1 );
  }
}
