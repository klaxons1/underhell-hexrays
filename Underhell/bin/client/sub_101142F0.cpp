int __cdecl sub_101142F0(int *a1)
{
  int result; // eax
  int v2; // ebx
  _DWORD *v3; // esi
  int v4; // ebx
  _DWORD *v5; // esi

  result = *a1;
  if ( *a1 )
  {
    v2 = 0;
    if ( result > 0 )
    {
      v3 = a1 + 7;
      do
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436254 + 88))(dword_10436254, *v3);
        *v3 = 0;
        ++v2;
        v3 += 6;
      }
      while ( v2 < *a1 );
    }
    v4 = 0;
    if ( *a1 > 0 )
    {
      v5 = a1 + 6;
      do
      {
        if ( *v5 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436254 + 40))(dword_10436254, *v5);
        *v5 = 0;
        ++v4;
        v5 += 6;
      }
      while ( v4 < *a1 );
    }
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436254 + 96))(dword_10436254, a1[2]);
    a1[2] = 0;
    *a1 = 0;
  }
  return result;
}
