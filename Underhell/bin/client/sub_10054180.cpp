int __thiscall sub_10054180(_DWORD *this, char a2)
{
  int result; // eax
  int v4; // edi

  result = sub_10053AA0(this, a2);
  v4 = result;
  if ( result != -1 )
  {
    sub_10034930(*(_DWORD *)(this[2] + 4 * result));
    result = this[5] - v4 - 1;
    if ( result > 0 )
      result = (int)memcpy((void *)(this[2] + 4 * v4), (const void *)(this[2] + 4 * v4 + 4), 4 * result);
    --this[5];
  }
  return result;
}
