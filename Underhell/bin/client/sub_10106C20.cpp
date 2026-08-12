void __thiscall sub_10106C20(_DWORD *this, char *a2, _DWORD *a3)
{
  const char *v3; // edx
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  float *v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float *v17; // edi
  bool v18; // zf
  int v19; // ebx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  char *v23; // ebx
  int v25; // [esp+4h] [ebp-8h]
  int v26; // [esp+8h] [ebp-4h]
  int v27; // [esp+8h] [ebp-4h]

  v3 = a2;
  if ( a2 )
    *(_DWORD *)a2 = *(_DWORD *)a2 & 0xFFFFFFFC | 1;
  v4 = a3;
  if ( a3 )
  {
    v5 = a3[1];
    if ( a2 )
    {
      if ( v5 >= a3[6] )
        goto LABEL_16;
      v6 = 1240 * v5;
      v26 = 1240 * v5;
      while ( 1 )
      {
        v7 = v6 + a3[3];
        if ( (*(_BYTE *)v7 & 1) != 0 )
        {
          if ( !_stricmp(v3 + 16, (const char *)(v7 + 16))
            && !_stricmp(a2 + 116, (const char *)(v7 + 116))
            && *((_DWORD *)a2 + 3) == *(_DWORD *)(v7 + 12) )
          {
            *((float *)a2 + 2) = *(float *)(v7 + 8);
            v3 = a2;
            goto LABEL_16;
          }
          v6 = v26;
          v3 = a2;
        }
        ++v5;
        v6 += 1240;
        v26 = v6;
        if ( v5 >= a3[6] )
          goto LABEL_16;
      }
    }
    v5 = a3[6];
LABEL_16:
    v8 = a3[1];
    if ( v5 == a3[6] )
    {
      if ( v3 )
        v5 = a3[1];
      else
        a3[1] = v5;
    }
    else
    {
      a3[1] = v5 + 1;
      if ( v3 )
      {
        *(_DWORD *)v3 |= 2u;
        *((float *)v3 + 2) = *((float *)off_103DC81C + 4) + *((float *)v3 + 2);
      }
    }
    if ( v8 < v5 )
    {
      v9 = 1240 * v8;
      v27 = 1240 * v8;
      v25 = v5 - v8;
      do
      {
        v10 = v4[3];
        v11 = *(_DWORD *)(v10 + v9);
        v12 = (float *)(v9 + v10);
        if ( (v11 & 1) != 0 )
          *(_DWORD *)v12 = v11 | 2;
        *(_DWORD *)v12 &= ~1u;
        v12[1] = v12[1] - *((float *)off_103DC81C + 4);
        v12[2] = *((float *)off_103DC81C + 4) + v12[2];
        if ( v12[1] >= 0.0 )
        {
          v13 = this[6];
          v14 = this[4];
          if ( v13 + 1 > v14 )
            sub_101056E0(this + 3, v13 - v14 + 1);
          ++this[6];
          v15 = this[3];
          v16 = this[6] - v13 - 1;
          this[7] = v15;
          if ( v16 > 0 )
            memcpy((void *)(1240 * v13 + v15 + 1240), (const void *)(1240 * v13 + v15), 1240 * v16);
          v17 = (float *)(this[3] + 1240 * v13);
          if ( v17 )
            qmemcpy(v17, v12, 0x4D8u);
          v4 = a3;
        }
        v9 = v27 + 1240;
        v18 = v25-- == 1;
        v27 += 1240;
      }
      while ( !v18 );
      v3 = a2;
    }
  }
  if ( v3 )
  {
    *((float *)v3 + 1) = *(float *)(dword_1043676C + 44);
    v19 = this[6];
    v20 = this[4];
    if ( v19 + 1 > v20 )
    {
      sub_101056E0(this + 3, v19 - v20 + 1);
      v3 = a2;
    }
    ++this[6];
    v21 = this[3];
    v22 = this[6] - v19 - 1;
    this[7] = v21;
    if ( v22 > 0 )
    {
      memcpy((void *)(1240 * v19 + v21 + 1240), (const void *)(1240 * v19 + v21), 1240 * v22);
      v3 = a2;
    }
    v23 = (char *)(this[3] + 1240 * v19);
    if ( v23 )
      qmemcpy(v23, v3, 0x4D8u);
  }
}
