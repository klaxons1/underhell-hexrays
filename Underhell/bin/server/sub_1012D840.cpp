_WORD *__thiscall sub_1012D840(int *this, int a2)
{
  _WORD *v3; // eax
  int v4; // edi
  __int16 v5; // bx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  _WORD *result; // eax

  v3 = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = this[3];
  v5 = *v3 & 0xFFF;
  v6 = this[1];
  if ( v4 + 1 > v6 )
    sub_1009A780(this, v4 - v6 + 1);
  ++this[3];
  v7 = *this;
  v8 = this[3] - v4 - 1;
  this[4] = *this;
  if ( v8 > 0 )
    memcpy((void *)(v7 + 2 * v4 + 2), (const void *)(v7 + 2 * v4), 2 * v8);
  result = (_WORD *)(*this + 2 * v4);
  if ( result )
    *result = v5;
  return result;
}
