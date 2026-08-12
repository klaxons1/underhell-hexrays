void __thiscall sub_1012FF30(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  unsigned __int16 *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  int v13; // eax

  if ( !*(_BYTE *)(a2 + 429) )
  {
    v3 = *(_DWORD *)(a2 + 132);
    if ( v3 == -1
      || off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 2] != v3 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 1] )
    {
      if ( (this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v4 = sub_10243040(a2 + 288, this + 145, 1);
      if ( v4 )
        *(_DWORD *)(a2 + 132) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      else
        *(_DWORD *)(a2 + 132) = -1;
      v5 = *(_DWORD *)(a2 + 132);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = (unsigned __int16 *)off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 1];
      sub_100EACE0(v6, (int)this, 1);
      v7 = *(_DWORD *)(a2 + 132);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 1];
      sub_10128950(
        v8,
        *(_DWORD *)(a2 + 140),
        *(_DWORD *)(a2 + 144),
        *(_DWORD *)(a2 + 148),
        *(_DWORD *)(a2 + 152),
        *(_DWORD *)(a2 + 156),
        0);
      sub_102428B0(*(float *)(a2 + 416), COERCE_INT(0.0));
      v9 = *(_DWORD *)(a2 + 132);
      if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 1];
      sub_10242BA0(v10);
      v11 = *(_DWORD *)(a2 + 132);
      if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (*(_DWORD *)(a2 + 132) & 0xFFF) + 1];
      v13 = sub_100BEF30((int)this, (char *)(a2 + 160));
      sub_10126B10(v12, (int)this, v13);
      *(_BYTE *)(a2 + 429) = 1;
    }
  }
}
