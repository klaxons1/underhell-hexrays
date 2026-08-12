int *__thiscall sub_10394BF0(_DWORD *this, int a2)
{
  int *result; // eax
  int v4; // esi

  result = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    result = &a2;
  }
  v4 = *result;
  if ( *result )
  {
    result = (int *)(*(int (__thiscall **)(_DWORD *))(*this + 220))(this);
    if ( result == (int *)3 )
      this[688] = v4;
    else
      return (int *)(*(int (__thiscall **)(_DWORD *, int))(*this + 2016))(this, v4);
  }
  return result;
}
