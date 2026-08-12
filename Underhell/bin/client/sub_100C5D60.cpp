void __thiscall sub_100C5D60(_DWORD *this)
{
  int v2; // ebx
  int v3; // edx
  double v4; // st7
  int v5; // ecx
  double v6; // st6
  int v7; // edx
  double v8; // st5
  double v9; // st5
  double v10; // st5
  int v11; // edx
  double v12; // st5
  double v13; // st5
  double v14; // st5
  int v15; // edx
  double v16; // st5
  double v17; // st5
  double v18; // st5
  int v19; // edx
  double v20; // st5
  double v21; // st5
  double v22; // st5
  int v23; // edx
  double v24; // st5
  double v25; // st5
  double v26; // st5
  int v27; // edi
  int v28; // ebx
  float v29; // [esp+Ch] [ebp-Ch]
  int v30; // [esp+10h] [ebp-8h]
  char v31; // [esp+17h] [ebp-1h]

  sub_100C5230((int)(this - 11));
  v2 = this[71];
  v3 = *this;
  v29 = *((float *)off_103DC81C + 4);
  v30 = v2;
  if ( *((_BYTE *)this + 409) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(v3 + 124))(this, 1);
    if ( !v2 && !*((_WORD *)this + 113) )
      *((_BYTE *)this + 409) = 0;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, bool))(v3 + 124))(this, *(_DWORD *)(dword_1043079C + 48) != 0);
  }
  v4 = 0.0;
  v5 = 0;
  v6 = v29;
  if ( v2 >= 4 )
  {
    do
    {
      v7 = *(_DWORD *)(this[68] + 4 * v5);
      v8 = *(float *)(v7 + 0x2000);
      if ( v8 <= 0.0 )
      {
        v10 = *(float *)(v7 + 8196) - v6;
        if ( v10 < 0.0 )
          v10 = 0.0;
        *(float *)(v7 + 8196) = v10;
      }
      else
      {
        v9 = v8 - v6;
        if ( v9 < 0.0 )
          v9 = 0.0;
        *(float *)(v7 + 0x2000) = v9;
      }
      v11 = *(_DWORD *)(this[68] + 4 * v5 + 4);
      v12 = *(float *)(v11 + 0x2000);
      if ( v12 <= 0.0 )
      {
        v14 = *(float *)(v11 + 8196) - v6;
        if ( v14 < 0.0 )
          v14 = 0.0;
        *(float *)(v11 + 8196) = v14;
      }
      else
      {
        v13 = v12 - v6;
        if ( v13 < 0.0 )
          v13 = 0.0;
        *(float *)(v11 + 0x2000) = v13;
      }
      v15 = *(_DWORD *)(this[68] + 4 * v5 + 8);
      v16 = *(float *)(v15 + 0x2000);
      if ( v16 <= 0.0 )
      {
        v18 = *(float *)(v15 + 8196) - v6;
        if ( v18 < 0.0 )
          v18 = 0.0;
        *(float *)(v15 + 8196) = v18;
      }
      else
      {
        v17 = v16 - v6;
        if ( v17 < 0.0 )
          v17 = 0.0;
        *(float *)(v15 + 0x2000) = v17;
      }
      v19 = *(_DWORD *)(this[68] + 4 * v5 + 12);
      v20 = *(float *)(v19 + 0x2000);
      if ( v20 <= 0.0 )
      {
        v22 = *(float *)(v19 + 8196) - v6;
        if ( v22 < 0.0 )
          v22 = 0.0;
        *(float *)(v19 + 8196) = v22;
      }
      else
      {
        v21 = v20 - v6;
        if ( v21 < 0.0 )
          v21 = 0.0;
        *(float *)(v19 + 0x2000) = v21;
      }
      v5 += 4;
    }
    while ( v5 < v2 - 3 );
  }
  for ( ; v5 < v2; ++v5 )
  {
    v23 = *(_DWORD *)(this[68] + 4 * v5);
    v24 = *(float *)(v23 + 0x2000);
    if ( v24 <= 0.0 )
    {
      v26 = *(float *)(v23 + 8196) - v6;
      if ( v26 < 0.0 )
        v26 = 0.0;
      *(float *)(v23 + 8196) = v26;
    }
    else
    {
      v25 = v24 - v6;
      if ( v25 < 0.0 )
        v25 = 0.0;
      *(float *)(v23 + 0x2000) = v25;
    }
  }
  v27 = 0;
  v31 = 0;
  if ( v2 > 0 )
  {
    do
    {
      v28 = *(_DWORD *)(this[68] + 4 * v27);
      if ( v4 >= *(float *)(v28 + 0x2000) )
      {
        if ( v4 >= *(float *)(v28 + 8196) )
        {
          if ( !v31 )
          {
            sub_100C2BD0(v28);
            sub_10034930(v28);
            if ( this[71] - v27 - 1 > 0 )
              memcpy((void *)(this[68] + 4 * v27), (const void *)(this[68] + 4 * v27 + 4), 4 * (this[71] - v27 - 1));
            --this[71];
            v4 = 0.0;
            --v27;
            --v30;
          }
        }
        else
        {
          v31 = 1;
        }
      }
      ++v27;
    }
    while ( v27 < v30 );
  }
}
