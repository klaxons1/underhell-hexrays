int *__thiscall sub_100A16A0(int *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  _WORD *v7; // ebx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _WORD *v13; // ebx
  const char *v14; // edi
  void *v15; // ebx
  size_t v16; // edi
  char v17; // cl
  char v18; // al
  _WORD *Src; // [esp+Ch] [ebp-Ch]
  _WORD *Srca; // [esp+Ch] [ebp-Ch]
  const char *Srcb; // [esp+Ch] [ebp-Ch]
  int v23; // [esp+10h] [ebp-8h]
  int v24; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int v26; // [esp+14h] [ebp-4h]

  *this = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  v23 = *(_DWORD *)(a2 + 12);
  for ( i = 0; i < v23; ++i )
  {
    v3 = this[3];
    Src = (_WORD *)(*(_DWORD *)a2 + 2 * i);
    v4 = this[1];
    if ( v3 + 1 > v4 )
      sub_1009A780(this, v3 - v4 + 1);
    ++this[3];
    v5 = *this;
    v6 = this[3] - v3 - 1;
    this[4] = *this;
    if ( v6 > 0 )
      memcpy((void *)(v5 + 2 * v3 + 2), (const void *)(v5 + 2 * v3), 2 * v6);
    v7 = (_WORD *)(*this + 2 * v3);
    if ( v7 )
      *v7 = *Src;
  }
  v8 = 0;
  v24 = *(_DWORD *)(a2 + 32);
  v26 = 0;
  if ( v24 > 0 )
  {
    do
    {
      v9 = this[8];
      v10 = this[6];
      Srca = (_WORD *)(*(_DWORD *)(a2 + 20) + 2 * v8);
      if ( v9 + 1 > v10 )
        sub_1009A780(this + 5, v9 - v10 + 1);
      ++this[8];
      v11 = this[5];
      v12 = this[8] - v9 - 1;
      this[9] = v11;
      if ( v12 > 0 )
        memcpy((void *)(v11 + 2 * v9 + 2), (const void *)(v11 + 2 * v9), 2 * v12);
      v13 = (_WORD *)(this[5] + 2 * v9);
      if ( v13 )
        *v13 = *Srca;
      v8 = v26 + 1;
      v26 = v8;
    }
    while ( v8 < v24 );
  }
  v14 = *(const char **)(a2 + 40);
  Srcb = v14;
  sub_10184660(this[10]);
  if ( v14 )
  {
    v16 = strlen(v14);
    v15 = (void *)sub_10184390(v16 + 1);
    memcpy_0(v15, Srcb, v16);
    *((_BYTE *)v15 + v16) = 0;
  }
  else
  {
    v15 = 0;
  }
  v17 = *((_BYTE *)this + 44);
  this[10] = (int)v15;
  *((_BYTE *)this + 44) ^= (*(_BYTE *)(a2 + 44) ^ v17) & 2;
  v18 = *((_BYTE *)this + 44) ^ (*((_BYTE *)this + 44) ^ *(_BYTE *)(a2 + 44)) & 4;
  *((_BYTE *)this + 44) = v18;
  *((_BYTE *)this + 44) = v18 ^ (v18 ^ *(_BYTE *)(a2 + 44)) & 1;
  return this;
}
