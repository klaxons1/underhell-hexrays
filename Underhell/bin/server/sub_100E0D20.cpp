void __thiscall sub_100E0D20(int this, float *a2)
{
  unsigned int v3; // eax
  _DWORD *v4; // eax
  int *v5; // ecx
  _BYTE v6[48]; // [esp+8h] [ebp-3Ch] BYREF
  float v7; // [esp+38h] [ebp-Ch] BYREF
  float v8; // [esp+3Ch] [ebp-8h]
  float v9; // [esp+40h] [ebp-4h]
  float v10; // [esp+4Ch] [ebp+8h]

  sub_100DAE60(this);
  if ( *(float *)(this + 580) != *a2 || *(float *)(this + 584) != a2[1] || *(float *)(this + 588) != a2[2] )
  {
    sub_100E98A0(1);
    *(_DWORD *)(this + 252) &= ~0x800u;
    *(float *)(this + 580) = *a2;
    *(float *)(this + 584) = a2[1];
    *(float *)(this + 588) = a2[2];
    sub_10421D00(a2, 3, this + 500);
    v3 = *(_DWORD *)(this + 308);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1] )
    {
      v4 = sub_100D8E80(this, v6);
      sub_10421BA0(a2, v4, &v7);
    }
    else
    {
      v7 = *a2;
      v8 = a2[1];
      v9 = a2[2];
    }
    if ( *(float *)(this + 716) != v7 || *(float *)(this + 720) != v8 || *(float *)(this + 724) != v9 )
    {
      sub_100DB570((float *)(this + 716), &v7);
      v10 = *(float *)(dword_106B31C8 + 12);
      if ( *(_DWORD *)(this + 128) != LODWORD(v10) )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(float *)(this + 128) = v10;
        }
        else
        {
          v5 = *(int **)(this + 24);
          if ( v5 )
            sub_100194B0(v5, 128);
          *(float *)(this + 128) = v10;
        }
      }
    }
  }
}
