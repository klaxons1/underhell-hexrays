int __thiscall sub_10057280(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int result; // eax
  _DWORD *v6; // [esp-8h] [ebp-14h]
  int i; // [esp+8h] [ebp-4h]

  v2 = 0;
  for ( i = 0; v2 < this[3]; i = v2 )
  {
    v3 = *(_DWORD *)(*this + 4 * v2);
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 50) > 1u )
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v3 + 56));
      *(_DWORD *)(v3 + 56) = 0;
      sub_10055220((_DWORD *)(v3 + 8));
      v4 = *(_DWORD **)(v3 + 8);
      if ( v4 )
      {
        do
        {
          v6 = v4;
          v4 = (_DWORD *)*v4;
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, v6);
        }
        while ( v4 );
        *(_DWORD *)(v3 + 8) = 0;
        *(_DWORD *)(v3 + 12) = 0;
      }
      sub_10184660(v3);
      v2 = i;
    }
    ++v2;
  }
  this[3] = 0;
  if ( this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  result = *this;
  this[4] = *this;
  if ( this[2] >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *this = 0;
    }
    this[1] = 0;
  }
  return result;
}
