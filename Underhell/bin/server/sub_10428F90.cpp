int __thiscall sub_10428F90(int *this)
{
  int v2; // ebp
  int i; // edi
  int v4; // eax
  int v5; // ebx
  bool v6; // sf
  int v7; // eax
  int result; // eax

  v2 = this[22];
  for ( i = 0; i < v2; ++i )
  {
    v4 = this[19];
    v5 = *(_DWORD *)(v4 + 4 * i);
    if ( v5 )
    {
      sub_10428990(*(_DWORD **)(v4 + 4 * i));
      sub_10184660(v5);
    }
  }
  v6 = this[21] < 0;
  this[22] = 0;
  if ( !v6 )
  {
    if ( this[19] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[19]);
      this[19] = 0;
    }
    this[20] = 0;
  }
  v6 = this[21] < 0;
  v7 = this[19];
  this[23] = v7;
  if ( !v6 )
  {
    if ( v7 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v7);
      this[19] = 0;
    }
    this[20] = 0;
  }
  sub_1042F820(this + 5);
  v6 = this[2] < 0;
  this[3] = 0;
  if ( !v6 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  v6 = this[2] < 0;
  result = *this;
  this[4] = *this;
  if ( !v6 )
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
