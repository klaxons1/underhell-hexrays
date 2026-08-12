char *__thiscall sub_100A1390(char *this, const char **a2)
{
  const char **v2; // ebx
  _BYTE *v3; // edi
  int *v4; // esi
  void *v5; // eax
  size_t v6; // ebx
  const char *v7; // eax
  void *v8; // eax
  size_t v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  _WORD *v15; // edi
  void *v17; // [esp+Ch] [ebp-Ch]
  const char *v18; // [esp+Ch] [ebp-Ch]
  const char *v19; // [esp+Ch] [ebp-Ch]
  const char *Src; // [esp+10h] [ebp-8h]
  void *Srcb; // [esp+10h] [ebp-8h]
  const char *Srca; // [esp+10h] [ebp-8h]
  char *v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+20h] [ebp+8h]

  v2 = a2;
  *((_DWORD *)this + 5) = -1;
  *(float *)(this + 11) = 0.0;
  this[19] &= 0x80u;
  *(float *)(this + 15) = 0.0;
  v3 = this + 11;
  *((_DWORD *)this + 5) = -1;
  v4 = (int *)(this + 24);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  v23 = this;
  Src = *a2;
  if ( *a2 )
  {
    v6 = strlen(*a2);
    v17 = (void *)sub_10184390(v6 + 1);
    memcpy_0(v17, Src, v6);
    v5 = v17;
    this = v23;
    *((_BYTE *)v17 + v6) = 0;
    v2 = a2;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)this = v5;
  v7 = v2[1];
  v18 = v7;
  if ( v7 )
  {
    v9 = strlen(v7);
    Srcb = (void *)sub_10184390(v9 + 1);
    memcpy_0(Srcb, v18, v9);
    v8 = Srcb;
    this = v23;
    *((_BYTE *)Srcb + v9) = 0;
    v2 = a2;
  }
  else
  {
    v8 = 0;
  }
  *((_DWORD *)this + 1) = v8;
  *((_WORD *)this + 4) = *((_WORD *)v2 + 4);
  this[10] = *((_BYTE *)v2 + 10);
  sub_1009A6F0(v3, (int)v2 + 11);
  v10 = 0;
  Srca = v2[9];
  v24 = 0;
  if ( (int)Srca > 0 )
  {
    do
    {
      v11 = v4[3];
      v19 = &v2[6][2 * v10];
      v12 = v4[1];
      if ( v11 + 1 > v12 )
        sub_1009A780(v4, v11 - v12 + 1);
      ++v4[3];
      v13 = *v4;
      v14 = v4[3] - v11 - 1;
      v4[4] = *v4;
      if ( v14 > 0 )
        memcpy((void *)(v13 + 2 * v11 + 2), (const void *)(v13 + 2 * v11), 2 * v14);
      v15 = (_WORD *)(*v4 + 2 * v11);
      if ( v15 )
        *v15 = *(_WORD *)v19;
      v10 = v24 + 1;
      v24 = v10;
    }
    while ( v10 < (int)Srca );
  }
  return v23;
}
