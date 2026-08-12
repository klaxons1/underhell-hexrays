int *__thiscall sub_10003100(int *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  _DWORD *v5; // ebx
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  if ( (int)a2[3] > 0 )
  {
    v11 = 0;
    v10 = a2[3];
    do
    {
      v3 = this[3];
      v4 = this[1];
      v5 = (_DWORD *)(v11 + *a2);
      if ( v3 + 1 > v4 )
        sub_101924C0(v3 - v4 + 1);
      ++this[3];
      v6 = *this;
      v7 = this[3] - v3 - 1;
      this[4] = *this;
      if ( v7 > 0 )
        memcpy((void *)(v6 + 12 * v3 + 12), (const void *)(v6 + 12 * v3), 12 * v7);
      v8 = (_DWORD *)(*this + 12 * v3);
      if ( v8 )
      {
        *v8 = *v5;
        v8[1] = v5[1];
        v8[2] = v5[2];
      }
      v11 += 12;
      --v10;
    }
    while ( v10 );
  }
  return this;
}
