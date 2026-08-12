int __thiscall sub_102675B0(_DWORD *this, int a2)
{
  int result; // eax

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = sub_10319100(&a2);
  if ( result >= 0 && result < this[364] )
  {
    if ( this[364] - result - 1 > 0 )
      result = (int)memcpy(
                      (void *)(this[361] + 4 * result),
                      (const void *)(this[361] + 4 * result + 4),
                      4 * (this[364] - result - 1));
    --this[364];
  }
  return result;
}
