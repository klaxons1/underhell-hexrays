void *__thiscall sub_1003BFE0(int this)
{
  void *result; // eax

  *(_DWORD *)(this + 14) = 0;
  result = *(void **)(this + 4);
  if ( result )
  {
    sub_1003ADE0(this, *((float *)off_103DC81C + 3), result, 0);
    sub_1003ADE0(this, *((float *)off_103DC81C + 3), *(void **)(this + 4), 0);
    sub_1003ADE0(this, *((float *)off_103DC81C + 3), *(void **)(this + 4), 0);
    return memcpy_0(*(void **)(this + 20), *(const void **)(this + 4), 12 * *(unsigned __int8 *)(this + 29));
  }
  return result;
}
