char *__thiscall sub_100A0FD0(char *this, int a2)
{
  __int16 v3; // ax
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE *v10; // ecx
  char v11; // al
  char v12; // dl
  char v13; // al
  char v14; // cl
  int v16; // [esp+10h] [ebp-8h]
  int v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+20h] [ebp+8h]

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 100;
  v3 = sub_10065220(0.0);
  *((_WORD *)this + 10) = v3;
  *((_WORD *)this + 11) = v3;
  *((_WORD *)this + 12) = v3;
  *((_WORD *)this + 13) = v3;
  *((_WORD *)this + 14) = v3;
  *((_WORD *)this + 15) = v3;
  this[36] = 0;
  *(_WORD *)(this + 37) = v3;
  *(_WORD *)(this + 39) = v3;
  v5 = 0;
  v16 = *(_DWORD *)(a2 + 12);
  v18 = 0;
  if ( v16 > 0 )
  {
    do
    {
      v6 = *((_DWORD *)this + 3);
      v17 = *(_DWORD *)a2 + 8 * v5;
      v7 = *((_DWORD *)this + 1);
      if ( v6 + 1 > v7 )
        sub_10226330(v6 - v7 + 1);
      ++*((_DWORD *)this + 3);
      v8 = *(_DWORD *)this;
      v9 = *((_DWORD *)this + 3) - v6 - 1;
      *((_DWORD *)this + 4) = *(_DWORD *)this;
      if ( v9 > 0 )
        memcpy((void *)(v8 + 8 * v6 + 8), (const void *)(v8 + 8 * v6), 8 * v9);
      v10 = (_BYTE *)(*(_DWORD *)this + 8 * v6);
      if ( v10 )
        sub_1009A3E0(v10, v17);
      v5 = v18 + 1;
      v18 = v5;
    }
    while ( v5 < v16 );
  }
  *((_DWORD *)this + 5) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)this + 6) = *(_DWORD *)(a2 + 24);
  *((_DWORD *)this + 7) = *(_DWORD *)(a2 + 28);
  *((_DWORD *)this + 8) = *(_DWORD *)(a2 + 32);
  v11 = this[44];
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36);
  this[40] = *(_BYTE *)(a2 + 40);
  this[44] ^= (*(_BYTE *)(a2 + 44) ^ v11) & 1;
  v12 = this[44];
  this[43] = *(_BYTE *)(a2 + 43);
  this[44] ^= (*(_BYTE *)(a2 + 44) ^ v12) & 2;
  v13 = this[44] ^ (this[44] ^ *(_BYTE *)(a2 + 44)) & 4;
  this[44] = v13;
  v14 = v13 ^ (v13 ^ *(_BYTE *)(a2 + 44)) & 8;
  this[44] = v14;
  this[44] = v14 ^ (v14 ^ *(_BYTE *)(a2 + 44)) & 0x10;
  this[41] = *(_BYTE *)(a2 + 41);
  this[42] = *(_BYTE *)(a2 + 42);
  return this;
}
