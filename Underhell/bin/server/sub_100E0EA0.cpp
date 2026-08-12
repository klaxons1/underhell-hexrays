void __thiscall sub_100E0EA0(int this, float *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ebx
  int *v6; // ecx
  _BYTE v7[48]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v8[48]; // [esp+38h] [ebp-3Ch] BYREF
  float v9; // [esp+68h] [ebp-Ch] BYREF
  float v10; // [esp+6Ch] [ebp-8h]
  float v11; // [esp+70h] [ebp-4h]
  float v12; // [esp+7Ch] [ebp+8h]

  sub_100DAE60(this);
  if ( *(float *)(this + 704) != *a2 || *(float *)(this + 708) != a2[1] || *(float *)(this + 712) != a2[2] )
  {
    sub_100E98A0(2);
    *(_DWORD *)(this + 252) &= ~0x800u;
    *(float *)(this + 704) = *a2;
    *(float *)(this + 708) = a2[1];
    *(float *)(this + 712) = a2[2];
    sub_104227F0(a2, this + 500);
    sub_10421D00(this + 580, 3, this + 500);
    v3 = *(_DWORD *)(this + 308);
    if ( v3 != -1
      && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v3 >> 12)
      && (v5 = *v4) != 0 )
    {
      if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
        sub_100DAE60(*v4);
      if ( *(float *)(this + 704) == *(float *)(v5 + 704)
        && *(float *)(this + 708) == *(float *)(v5 + 708)
        && *(float *)(this + 712) == *(float *)(v5 + 712) )
      {
        v9 = 0.0;
        v10 = 0.0;
        v11 = 0.0;
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        sub_10424F80(v5 + 500, v8);
        sub_10421E30(v8, this + 500, v7);
        sub_10421A90(v7, &v9);
      }
    }
    else
    {
      v9 = *a2;
      v10 = a2[1];
      v11 = a2[2];
    }
    if ( *(float *)(this + 728) != v9 || *(float *)(this + 732) != v10 || *(float *)(this + 736) != v11 )
    {
      sub_100DB5E0((float *)(this + 728), &v9);
      v12 = *(float *)(dword_106B31C8 + 12);
      if ( *(_DWORD *)(this + 128) != LODWORD(v12) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(float *)(this + 128) = v12;
        }
        else
        {
          v6 = *(int **)(this + 24);
          if ( v6 )
            sub_100194B0(v6, 128);
          *(float *)(this + 128) = v12;
        }
      }
    }
  }
}
