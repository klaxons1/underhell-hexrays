int *__thiscall sub_1011E360(int *this, _DWORD *a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int v10; // [esp+8h] [ebp-8h]
  _DWORD *v11; // [esp+Ch] [ebp-4h]

  v2 = 0;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v10 = a2[3];
  if ( v10 > 0 )
  {
    do
    {
      v4 = this[3];
      v11 = (_DWORD *)(*a2 + 4 * v2);
      v5 = this[1];
      if ( v4 + 1 > v5 )
        sub_102ABFC0(v4 - v5 + 1);
      ++this[3];
      v6 = *this;
      v7 = this[3] - v4 - 1;
      this[4] = *this;
      if ( v7 > 0 )
        memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
      v8 = (_DWORD *)(*this + 4 * v4);
      if ( v8 )
        *v8 = *v11;
      ++v2;
    }
    while ( v2 < v10 );
  }
  return this;
}
