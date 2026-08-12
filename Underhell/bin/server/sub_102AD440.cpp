int __thiscall sub_102AD440(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = sub_10319100(&a2);
  v4 = this[254];
  if ( result == -1 )
  {
    this[227] = v4;
  }
  else
  {
    v5 = v4 - result - 1;
    if ( v5 > 0 )
      memcpy((void *)(this[251] + 4 * result), (const void *)(this[251] + 4 * result + 4), 4 * v5);
    result = --this[254];
    this[227] = result;
  }
  return result;
}
