_DWORD *__thiscall sub_100A1130(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE *v10; // ecx
  char v11; // al
  char v12; // dl
  char v13; // al
  char v14; // cl
  int v16; // [esp+8h] [ebp-8h]
  int v17; // [esp+Ch] [ebp-4h]
  int v18; // [esp+18h] [ebp+8h]

  if ( this != a2 )
  {
    v4 = 0;
    v16 = a2[3];
    v18 = 0;
    if ( v16 > 0 )
    {
      do
      {
        v5 = this[3];
        v6 = *a2 + 8 * v4;
        v7 = this[1];
        v17 = v6;
        if ( v5 + 1 > v7 )
          sub_10226330(v5 - v7 + 1);
        ++this[3];
        v8 = *this;
        v9 = this[3] - v5 - 1;
        this[4] = *this;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 8 * v5 + 8), (const void *)(v8 + 8 * v5), 8 * v9);
        v10 = (_BYTE *)(*this + 8 * v5);
        if ( v10 )
          sub_1009A3E0(v10, v17);
        v4 = v18 + 1;
        v18 = v4;
      }
      while ( v4 < v16 );
    }
    this[5] = a2[5];
    this[6] = a2[6];
    this[7] = a2[7];
    this[8] = a2[8];
    v11 = *((_BYTE *)this + 44);
    this[9] = a2[9];
    *((_BYTE *)this + 40) = *((_BYTE *)a2 + 40);
    *((_BYTE *)this + 44) ^= (*((_BYTE *)a2 + 44) ^ v11) & 1;
    v12 = *((_BYTE *)this + 44);
    *((_BYTE *)this + 43) = *((_BYTE *)a2 + 43);
    *((_BYTE *)this + 44) ^= (*((_BYTE *)a2 + 44) ^ v12) & 2;
    v13 = *((_BYTE *)this + 44) ^ (*((_BYTE *)this + 44) ^ *((_BYTE *)a2 + 44)) & 4;
    *((_BYTE *)this + 44) = v13;
    v14 = v13 ^ (v13 ^ *((_BYTE *)a2 + 44)) & 8;
    *((_BYTE *)this + 44) = v14;
    *((_BYTE *)this + 44) = v14 ^ (v14 ^ *((_BYTE *)a2 + 44)) & 0x10;
    *((_BYTE *)this + 41) = *((_BYTE *)a2 + 41);
    *((_BYTE *)this + 42) = *((_BYTE *)a2 + 42);
  }
  return this;
}
