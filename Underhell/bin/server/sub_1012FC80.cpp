void __thiscall sub_1012FC80(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  unsigned __int16 *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  double v9; // st7
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // edi
  int v14; // eax
  float v15; // [esp+0h] [ebp-Ch]

  if ( !*(_BYTE *)(a2 + 429) )
  {
    v3 = *(_DWORD *)(a2 + 128);
    if ( v3 == -1
      || off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 2] != v3 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 1] )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v4 = sub_10286F30(a2 + 288, this + 145, 1);
      if ( v4 )
        *(_DWORD *)(a2 + 128) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      else
        *(_DWORD *)(a2 + 128) = -1;
      v5 = *(_DWORD *)(a2 + 128);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = (unsigned __int16 *)off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 1];
      sub_100EACE0(v6, (int)this, 1);
      v7 = *(_DWORD *)(a2 + 128);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 1];
      sub_10128950(
        v8,
        *(_DWORD *)(a2 + 140),
        *(_DWORD *)(a2 + 144),
        *(_DWORD *)(a2 + 148),
        *(_DWORD *)(a2 + 152),
        *(_DWORD *)(a2 + 156),
        0);
      sub_10287300(*(float *)(a2 + 416));
      if ( *(float *)(a2 + 424) >= 0.0 )
        v9 = *(float *)(a2 + 424);
      else
        v9 = 1.0 / (*(float *)(a2 + 416) * 16.0);
      v15 = v9;
      sub_102874E0(LODWORD(v15));
      sub_102872B0(*(float *)(a2 + 420));
      v10 = *(_DWORD *)(a2 + 128);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 1];
      sub_10242BA0(v11);
      v12 = *(_DWORD *)(a2 + 128);
      if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 2] != v12 >> 12 )
        v13 = 0;
      else
        v13 = off_1061BE18[4 * (*(_DWORD *)(a2 + 128) & 0xFFF) + 1];
      v14 = sub_100BEF30((int)this, (char *)(a2 + 160));
      sub_10126B10(v13, (int)this, v14);
      *(_BYTE *)(a2 + 429) = 1;
    }
  }
}
