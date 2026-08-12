int __thiscall sub_10081890(int *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  void *v13; // ecx
  bool v14; // zf
  int v15; // ecx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // esi
  int v22; // eax
  char *v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // [esp+8h] [ebp-Ch]
  int v27; // [esp+Ch] [ebp-8h]
  unsigned int v28; // [esp+Ch] [ebp-8h]
  int v29; // [esp+10h] [ebp-4h]
  char *v30; // [esp+10h] [ebp-4h]
  int v31; // [esp+20h] [ebp+Ch]
  int v32; // [esp+24h] [ebp+10h]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_102C0070(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 48 * (a2 + a3)), (const void *)(v9 + 48 * a2), 48 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 48 * a2;
      v29 = 48 * a2;
      v27 = a3;
      do
      {
        v13 = (void *)(v12 + *this);
        if ( v13 )
        {
          sub_100B99D0(v13);
          v12 = v29;
        }
        v12 += 48;
        v14 = v27-- == 1;
        v29 = v12;
      }
      while ( !v14 );
    }
  }
  v15 = a4;
  if ( a4 )
  {
    v16 = 0;
    if ( a3 >= 4 )
    {
      v17 = 48 * a2;
      v30 = (char *)(a4 + 96);
      v28 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v26 = 4 * v28;
      do
      {
        v18 = v17 + *this;
        qmemcpy((void *)v18, v30 - 96, 0x30u);
        *(float *)(v18 + 20) = -1.0;
        *(_DWORD *)(v18 + 44) = 0;
        *(_DWORD *)(v18 + 40) = 0;
        v19 = v17 + *this + 48;
        qmemcpy((void *)v19, v30 - 48, 0x30u);
        *(float *)(v19 + 20) = -1.0;
        *(_DWORD *)(v19 + 44) = 0;
        *(_DWORD *)(v19 + 40) = 0;
        v20 = v17 + *this + 96;
        qmemcpy((void *)v20, v30, 0x30u);
        *(float *)(v20 + 20) = -1.0;
        v21 = v30;
        v30 += 192;
        *(_DWORD *)(v20 + 44) = 0;
        *(_DWORD *)(v20 + 40) = 0;
        v22 = v17 + *this + 144;
        qmemcpy((void *)v22, v21 + 48, 0x30u);
        *(float *)(v22 + 20) = -1.0;
        v17 += 192;
        v14 = v28-- == 1;
        *(_DWORD *)(v22 + 44) = 0;
        *(_DWORD *)(v22 + 40) = 0;
      }
      while ( !v14 );
      v10 = a2;
      v4 = a3;
      v16 = v26;
      v15 = a4;
    }
    if ( v16 < v4 )
    {
      v23 = (char *)(v15 + 48 * v16);
      v24 = 48 * (v16 + v10);
      v31 = v24;
      v32 = v4 - v16;
      while ( 1 )
      {
        v31 += 48;
        v25 = v24 + *this;
        qmemcpy((void *)v25, v23, 0x30u);
        *(float *)(v25 + 20) = -1.0;
        v23 += 48;
        v14 = v32-- == 1;
        *(_DWORD *)(v25 + 44) = 0;
        *(_DWORD *)(v25 + 40) = 0;
        if ( v14 )
          break;
        v24 = v31;
      }
      return a2;
    }
  }
  return v10;
}
