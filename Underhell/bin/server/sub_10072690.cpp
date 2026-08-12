_DWORD *__thiscall sub_10072690(int *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  _DWORD *result; // eax

  v3 = this[1];
  v4 = this[3];
  if ( v4 + 1 > v3 )
    sub_102ABFC0(v4 - v3 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - v4 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(v5 + 4 * v4 + 4), (const void *)(v5 + 4 * v4), 4 * v6);
  result = (_DWORD *)(*this + 4 * v4);
  if ( result )
    *result = a2;
  return result;
}
