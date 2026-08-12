int *__cdecl sub_100D33F0(int a1)
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

  v1 = dword_103E0E50;
  v2 = dword_103E0E50;
  if ( dword_103E0E50 + 1 > dword_103E0E48 )
  {
    sub_1010AFF0(dword_103E0E50 - dword_103E0E48 + 1);
    v1 = dword_103E0E50;
  }
  v3 = dword_103E0E44;
  dword_103E0E50 = v1 + 1;
  v4 = v1 - v2;
  dword_103E0E54 = dword_103E0E44;
  if ( v4 > 0 )
  {
    memcpy((void *)(dword_103E0E44 + 4 * v2 + 4), (const void *)(dword_103E0E44 + 4 * v2), 4 * v4);
    v3 = dword_103E0E44;
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
    v7 = dword_103E0E64;
    v8 = dword_103E0E64;
    if ( dword_103E0E64 + 1 > dword_103E0E5C )
    {
      sub_1010AFF0(dword_103E0E64 - dword_103E0E5C + 1);
      v7 = dword_103E0E64;
    }
    v9 = dword_103E0E58;
    dword_103E0E64 = v7 + 1;
    v10 = v7 - v8;
    dword_103E0E68 = dword_103E0E58;
    if ( v10 > 0 )
    {
      memcpy((void *)(dword_103E0E58 + 4 * v8 + 4), (const void *)(dword_103E0E58 + 4 * v8), 4 * v10);
      v9 = dword_103E0E58;
    }
    result = (int *)(v9 + 4 * v8);
    if ( result )
      *result = a1;
  }
  return result;
}
