int *__thiscall sub_100A1500(int *this, int *a2)
{
  int *v2; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _WORD *v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  _WORD *v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  _WORD *v18; // ebx
  const char *v19; // edi
  int v20; // eax
  size_t v21; // edi
  void *v22; // ebx
  char v23; // cl
  char v24; // al
  _WORD *Src; // [esp+8h] [ebp-Ch]
  _WORD *Srca; // [esp+8h] [ebp-Ch]
  const char *Srcb; // [esp+8h] [ebp-Ch]
  int v29; // [esp+Ch] [ebp-8h]
  int v30; // [esp+Ch] [ebp-8h]
  int v31; // [esp+10h] [ebp-4h]
  int v32; // [esp+10h] [ebp-4h]

  v2 = a2;
  if ( this != a2 )
  {
    v4 = 0;
    v29 = a2[3];
    v31 = 0;
    if ( v29 > 0 )
    {
      do
      {
        v5 = this[3];
        v6 = *a2 + 2 * v4;
        v7 = this[1];
        Src = (_WORD *)v6;
        if ( v5 + 1 > v7 )
          sub_1009A780(this, v5 - v7 + 1);
        ++this[3];
        v8 = *this;
        v9 = this[3] - v5 - 1;
        this[4] = *this;
        if ( v9 > 0 )
          memcpy((void *)(v8 + 2 * v5 + 2), (const void *)(v8 + 2 * v5), 2 * v9);
        v10 = (_WORD *)(*this + 2 * v5);
        if ( v10 )
          *v10 = *Src;
        v4 = v31 + 1;
        v31 = v4;
      }
      while ( v4 < v29 );
    }
    v11 = 0;
    v30 = a2[8];
    v32 = 0;
    if ( v30 > 0 )
    {
      do
      {
        v12 = v2[5];
        v13 = this[8];
        v14 = (_WORD *)(v12 + 2 * v11);
        v15 = this[6];
        Srca = v14;
        if ( v13 + 1 > v15 )
          sub_1009A780(this + 5, v13 - v15 + 1);
        ++this[8];
        v16 = this[5];
        v17 = this[8] - v13 - 1;
        this[9] = v16;
        if ( v17 > 0 )
          memcpy((void *)(v16 + 2 * v13 + 2), (const void *)(v16 + 2 * v13), 2 * v17);
        v18 = (_WORD *)(this[5] + 2 * v13);
        if ( v18 )
          *v18 = *Srca;
        v2 = a2;
        v11 = v32 + 1;
        v32 = v11;
      }
      while ( v11 < v30 );
    }
    v19 = (const char *)v2[10];
    Srcb = v19;
    sub_10184660(this[10]);
    if ( v19 )
    {
      v21 = strlen(v19);
      v22 = (void *)sub_10184390(v21 + 1);
      memcpy_0(v22, Srcb, v21);
      *((_BYTE *)v22 + v21) = 0;
      v20 = (int)v22;
      v2 = a2;
    }
    else
    {
      v20 = 0;
    }
    v23 = *((_BYTE *)this + 44);
    this[10] = v20;
    *((_BYTE *)this + 44) ^= (*((_BYTE *)v2 + 44) ^ v23) & 2;
    v24 = *((_BYTE *)this + 44) ^ (*((_BYTE *)this + 44) ^ *((_BYTE *)v2 + 44)) & 4;
    *((_BYTE *)this + 44) = v24;
    *((_BYTE *)this + 44) = v24 ^ (v24 ^ *((_BYTE *)v2 + 44)) & 1;
  }
  return this;
}
