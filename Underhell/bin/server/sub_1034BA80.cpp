int __thiscall sub_1034BA80(float *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  double v10; // st6
  double v11; // st7
  float v13; // [esp+8h] [ebp-Ch]
  float v14; // [esp+Ch] [ebp-8h]
  float v15; // [esp+10h] [ebp-4h]

  v2 = *((_DWORD *)this + 1005);
  if ( v2 != -1 && (v3 = &off_1061BE18[4 * ((_DWORD)this[1005] & 0xFFF) + 1], v3[1] == v2 >> 12) && *v3 )
  {
    sub_1034B920((int)this);
  }
  else
  {
    v4 = *((_DWORD *)this + 1008);
    if ( v4 != -1
      && off_1061BE18[4 * ((_DWORD)this[1008] & 0xFFF) + 2] == v4 >> 12
      && off_1061BE18[4 * ((_DWORD)this[1008] & 0xFFF) + 1] )
    {
      sub_1034BA00((int)this);
    }
    else if ( !*((_DWORD *)this + 990) )
    {
      sub_100B8A70((int)this);
    }
  }
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  v13 = this[905] - this[145];
  v14 = this[906] - this[146];
  v15 = this[907] - this[147];
  off_10689714();
  this[949] = v13;
  this[950] = v14;
  this[951] = v15;
  v5 = *((_DWORD *)this + 990);
  if ( v5 == 2 || v5 == 1 || v5 > 8 && v5 < 12 )
  {
    v6 = *((_DWORD *)this + 1008);
    if ( v6 != -1
      && (v7 = &off_1061BE18[4 * ((_DWORD)this[1008] & 0xFFF) + 1],
          v8 = v6 >> 12,
          off_1061BE18[4 * ((_DWORD)this[1008] & 0xFFF) + 2] == v8)
      && *v7 )
    {
      if ( off_1061BE18[4 * ((_DWORD)this[1008] & 0xFFF) + 2] == v8 )
        v9 = *v7;
      else
        v9 = 0;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      sub_10422220(v9 + 704, this + 949);
    }
    else
    {
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      v10 = this[906] - this[146];
      v11 = this[907] - this[147];
      this[949] = this[905] - this[145];
      this[950] = v10;
      this[951] = v11;
    }
  }
  sub_102B2BB0((int)this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 2264))(this);
  return sub_102B2E00(this);
}
