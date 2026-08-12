int *__cdecl sub_10170230(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int *v5; // eax
  int *result; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // eax

  v1 = dword_1062971C;
  v2 = dword_1062971C;
  if ( dword_1062971C + 1 > dword_10629714 )
  {
    sub_102ABFC0(dword_1062971C - dword_10629714 + 1);
    v1 = dword_1062971C;
  }
  v3 = dword_10629710;
  dword_1062971C = v1 + 1;
  v4 = v1 - v2;
  dword_10629720 = dword_10629710;
  if ( v4 > 0 )
  {
    memcpy((void *)(dword_10629710 + 4 * v2 + 4), (const void *)(dword_10629710 + 4 * v2), 4 * v4);
    v3 = dword_10629710;
  }
  v5 = (int *)(v3 + 4 * v2);
  if ( v5 )
    *v5 = a1;
  result = (int *)__RTDynamicCast(
                    a1,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&IGameSystem `RTTI Type Descriptor',
                    (int)&IGameSystemPerFrame `RTTI Type Descriptor',
                    0);
  if ( result )
  {
    v7 = dword_10629730;
    v8 = dword_10629730;
    if ( dword_10629730 + 1 > dword_10629728 )
    {
      sub_102ABFC0(dword_10629730 - dword_10629728 + 1);
      v7 = dword_10629730;
    }
    v9 = dword_10629724;
    dword_10629730 = v7 + 1;
    v10 = v7 - v8;
    dword_10629734 = dword_10629724;
    if ( v10 > 0 )
    {
      memcpy((void *)(dword_10629724 + 4 * v8 + 4), (const void *)(dword_10629724 + 4 * v8), 4 * v10);
      v9 = dword_10629724;
    }
    result = (int *)(v9 + 4 * v8);
    if ( result )
      *result = a1;
  }
  return result;
}
