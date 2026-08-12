int __thiscall sub_100DAE60(int this)
{
  int result; // eax
  unsigned int v3; // eax
  _DWORD *v4; // eax
  float *v5; // edi
  _BYTE v6[48]; // [esp+4h] [ebp-64h] BYREF
  _BYTE v7[48]; // [esp+34h] [ebp-34h] BYREF
  int v8; // [esp+64h] [ebp-4h]

  result = *(_DWORD *)(this + 252);
  if ( (result & 0x800) != 0 )
  {
    *(_DWORD *)(this + 252) = result & 0xFFFFF7FF;
    sub_10425040(this + 728, this + 716, this + 500);
    v3 = *(_DWORD *)(this + 308);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v3 >> 12
      && (v8 = off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1]) != 0 )
    {
      v4 = sub_100D8E80(this, v6);
      sub_10421E30(v4, this + 500, v7);
      sub_10421CC0(v7, this + 500);
      sub_10421CE0(this + 500, 3, this + 580);
      if ( !(unsigned __int8)sub_101110B0(&flt_106F1CB4) || *(_BYTE *)(this + 305) )
      {
        sub_10421A90(this + 500, this + 704);
      }
      else
      {
        v5 = (float *)v8;
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        *(float *)(this + 704) = v5[176];
        *(float *)(this + 708) = v5[177];
        *(float *)(this + 712) = v5[178];
      }
    }
    else
    {
      *(float *)(this + 580) = *(float *)(this + 716);
      *(float *)(this + 584) = *(float *)(this + 720);
      *(float *)(this + 588) = *(float *)(this + 724);
      *(float *)(this + 704) = *(float *)(this + 728);
      *(float *)(this + 708) = *(float *)(this + 732);
      *(float *)(this + 712) = *(float *)(this + 736);
    }
    result = sub_101C4640(4);
    if ( (_BYTE)result )
      return sub_101C7810(this);
  }
  return result;
}
