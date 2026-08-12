void *__thiscall sub_10228BB0(_DWORD *this, int a2)
{
  void *result; // eax

  if ( a2 )
    a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    a2 = -1;
  result = (void *)sub_10319100(&a2);
  if ( result != (void *)-1 )
  {
    if ( this[203] - (int)result - 1 > 0 )
      result = memcpy(
                 (void *)(this[200] + 4 * (_DWORD)result),
                 (const void *)(this[200] + 4 * (_DWORD)result + 4),
                 4 * (this[203] - (_DWORD)result - 1));
    --this[203];
  }
  return result;
}
