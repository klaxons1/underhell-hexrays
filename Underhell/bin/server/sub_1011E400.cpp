int *__thiscall sub_1011E400(int *this, int *a2)
{
  int *v2; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v12; // [esp+4h] [ebp-8h]
  _DWORD *v13; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( this != a2 )
  {
    v4 = 0;
    v12 = a2[3];
    if ( v12 > 0 )
    {
      while ( 1 )
      {
        v5 = this[3];
        v6 = *v2 + 4 * v4;
        v7 = this[1];
        v13 = (_DWORD *)v6;
        if ( v5 + 1 > v7 )
          sub_102ABFC0(v5 - v7 + 1);
        ++this[3];
        v8 = *this;
        v9 = this[3] - v5 - 1;
        this[4] = *this;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 4 * v5 + 4), (const void *)(v8 + 4 * v5), 4 * v9);
        v10 = (_DWORD *)(*this + 4 * v5);
        if ( v10 )
          *v10 = *v13;
        if ( ++v4 >= v12 )
          break;
        v2 = a2;
      }
    }
  }
  return this;
}
