_BYTE *__thiscall sub_1009A3E0(_BYTE *this, int a2)
{
  int v3; // ecx
  char v4; // dl
  void *v5; // ebx
  size_t v6; // edi
  char v7; // al
  _BYTE *result; // eax
  const char *Src; // [esp+8h] [ebp-4h]

  v3 = a2;
  v4 = this[7];
  *((_WORD *)this + 2) = *(_WORD *)(a2 + 4);
  this[7] ^= (*(_BYTE *)(a2 + 7) ^ v4) & 0x3F;
  Src = *(const char **)a2;
  if ( *(_DWORD *)a2 )
  {
    v6 = strlen(*(const char **)a2);
    v5 = (void *)sub_10184390(v6 + 1);
    memcpy_0(v5, Src, v6);
    v3 = a2;
    *((_BYTE *)v5 + v6) = 0;
  }
  else
  {
    v5 = 0;
  }
  v7 = this[7];
  *(_DWORD *)this = v5;
  this[6] = *(_BYTE *)(v3 + 6);
  this[7] ^= (*(_BYTE *)(v3 + 7) ^ v7) & 0x40;
  result = this;
  this[7] = *(_BYTE *)(v3 + 7) ^ (this[7] ^ *(_BYTE *)(v3 + 7)) & 0x7F;
  return result;
}
