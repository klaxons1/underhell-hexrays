int __thiscall sub_1041A5B0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebp
  bool v4; // sf
  int *v5; // esi
  int i; // ebx
  int result; // eax
  int v8; // [esp-4h] [ebp-14h]

  v8 = this[1];
  *this = &CFlexAnimationTrack::`vftable';
  sub_10184660(v8);
  v2 = this + 4;
  v3 = 2;
  do
  {
    v4 = (int)v2[2] < 0;
    v2[3] = 0;
    if ( !v4 )
    {
      if ( *v2 )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v2);
        *v2 = 0;
      }
      v2[1] = 0;
    }
    v2[4] = *v2;
    v2 += 5;
    --v3;
  }
  while ( v3 );
  v5 = this + 14;
  for ( i = 1; i >= 0; --i )
  {
    v5 -= 5;
    v4 = v5[2] < 0;
    v5[3] = 0;
    if ( !v4 )
    {
      if ( *v5 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v5);
        *v5 = 0;
      }
      v5[1] = 0;
    }
    v4 = v5[2] < 0;
    result = *v5;
    v5[4] = *v5;
    if ( !v4 )
    {
      if ( result )
      {
        result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
        *v5 = 0;
      }
      v5[1] = 0;
    }
  }
  return result;
}
