void __thiscall sub_1019EBD0(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5[3]; // [esp+Ch] [ebp-84h] BYREF
  int v6[3]; // [esp+18h] [ebp-78h] BYREF
  int v7[3]; // [esp+24h] [ebp-6Ch] BYREF
  int v8[3]; // [esp+30h] [ebp-60h] BYREF
  int v9[3]; // [esp+3Ch] [ebp-54h] BYREF
  int v10[3]; // [esp+48h] [ebp-48h] BYREF
  int v11[3]; // [esp+54h] [ebp-3Ch] BYREF
  int v12[3]; // [esp+60h] [ebp-30h] BYREF
  int v13[3]; // [esp+6Ch] [ebp-24h] BYREF
  int v14; // [esp+78h] [ebp-18h] BYREF
  int v15; // [esp+7Ch] [ebp-14h]
  int v16; // [esp+80h] [ebp-10h]
  float v17; // [esp+84h] [ebp-Ch]
  float v18; // [esp+88h] [ebp-8h]
  float v19; // [esp+8Ch] [ebp-4h]

  if ( *(_DWORD *)(this + 1240) )
  {
    sub_1019B7F0(this, 0.0049999999);
  }
  else
  {
    if ( *(_DWORD *)(dword_106B8394 + 48) )
    {
      if ( !*(_BYTE *)(this + 1072) )
      {
        nullsub_4();
        *(_BYTE *)(this + 1072) = 1;
      }
      sub_10192F90(this);
    }
    else if ( *(_BYTE *)(this + 1072) )
    {
      nullsub_4();
      *(_BYTE *)(this + 1072) = 0;
    }
    if ( *(_DWORD *)(dword_106B846C + 48) )
      sub_1019E820();
    if ( *(_DWORD *)(dword_106B84B4 + 48) )
      sub_1019E970();
    v2 = *(_DWORD *)(this + 1268);
    if ( v2 != -1 )
    {
      v3 = *(_DWORD *)(this + 1256);
      do
      {
        v4 = 32 * v2;
        v14 = *(int *)(v3 + v4);
        v15 = *(int *)(v3 + v4 + 4);
        v16 = *(int *)(v3 + v4 + 8);
        v17 = *(float *)(v3 + v4 + 12);
        v18 = *(float *)(v3 + v4 + 16);
        v19 = *(float *)(v3 + v4 + 20);
        *(float *)v6 = v17 * 50.0 + *(float *)&v14;
        *(float *)&v6[1] = v18 * 50.0 + *(float *)&v15;
        *(float *)&v6[2] = 50.0 * v19 + *(float *)&v16;
        sub_1011BC50((float *)&v14, (float *)v6, 255, 0, 255, 1, 0.1);
        *(float *)v5 = v17 * 50.0 + *(float *)&v14;
        *(float *)&v5[1] = v18 * 50.0 + *(float *)&v15;
        *(float *)&v5[2] = 50.0 * v19 + *(float *)&v16;
        *(float *)v8 = *(float *)&v14 + 25.0;
        v8[1] = v15;
        v8[2] = v16;
        sub_1011BC50((float *)v8, (float *)v5, 255, 0, 255, 1, 0.1);
        *(float *)v10 = v17 * 50.0 + *(float *)&v14;
        *(float *)&v10[1] = v18 * 50.0 + *(float *)&v15;
        *(float *)&v10[2] = 50.0 * v19 + *(float *)&v16;
        *(float *)v13 = *(float *)&v14 - 25.0;
        v13[1] = v15;
        v13[2] = v16;
        sub_1011BC50((float *)v13, (float *)v10, 255, 0, 255, 1, 0.1);
        *(float *)v12 = v17 * 50.0 + *(float *)&v14;
        *(float *)&v12[1] = v18 * 50.0 + *(float *)&v15;
        *(float *)&v12[2] = 50.0 * v19 + *(float *)&v16;
        v11[0] = v14;
        *(float *)&v11[1] = *(float *)&v15 + 25.0;
        v11[2] = v16;
        sub_1011BC50((float *)v11, (float *)v12, 255, 0, 255, 1, 0.1);
        *(float *)v9 = v17 * 50.0 + *(float *)&v14;
        *(float *)&v9[1] = v18 * 50.0 + *(float *)&v15;
        *(float *)&v9[2] = 50.0 * v19 + *(float *)&v16;
        v7[0] = v14;
        *(float *)&v7[1] = *(float *)&v15 - 25.0;
        v7[2] = v16;
        sub_1011BC50((float *)v7, (float *)v9, 255, 0, 255, 1, 0.1);
        v3 = *(_DWORD *)(this + 1256);
        v2 = *(_DWORD *)(v3 + v4 + 28);
      }
      while ( v2 != -1 );
    }
  }
}
