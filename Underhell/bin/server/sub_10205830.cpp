int __thiscall sub_10205830(int this)
{
  unsigned int v2; // eax
  float *v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  char *v7; // eax
  int v8; // eax
  float v10; // [esp+0h] [ebp-80h]
  float v11; // [esp+10h] [ebp-70h]
  float v12; // [esp+10h] [ebp-70h]
  float v13; // [esp+14h] [ebp-6Ch]
  int v14[20]; // [esp+24h] [ebp-5Ch] BYREF
  int v15[3]; // [esp+74h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(this + 816) )
  {
    v2 = *(_DWORD *)(this + 820);
    v3 = 0;
    if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 2] != v2 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 1];
    v11 = (float)*(int *)(this + 800);
    sub_10248110(this, v4, v11, *(_DWORD *)(this + 804), 0);
    while ( 1 )
    {
      v5 = *(_DWORD *)(this + 820);
      if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 2] != v5 >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 820) & 0xFFF) + 1];
      v7 = *(char **)(this + 816);
      if ( !v7 )
        v7 = (char *)String;
      v3 = (float *)sub_1012BF20(&dword_1069E3E0, (int)v3, v7, 0, v6, 0, 0);
      if ( !v3 )
        break;
      if ( ((_DWORD)v3[63] & 0x800) != 0 )
        sub_100DAE60((int)v3);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( ((_DWORD)v3[63] & 0x800) != 0 )
        sub_100DAE60((int)v3);
      *(float *)v15 = v3[145] - *(float *)(this + 580);
      *(float *)&v15[1] = v3[146] - *(float *)(this + 584);
      *(float *)&v15[2] = v3[147] - *(float *)(this + 588);
      sub_10248740((int)v14, (int)v15, (int)(v3 + 145), 1.0);
      sub_100D9E70((int *)v3, this, v14);
    }
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v12 = *(float *)(this + 808);
    v10 = (float)*(int *)(this + 800);
    v8 = sub_10248110(this, this, v10, *(_DWORD *)(this + 804), 0);
    sub_100C9F20(v8, this + 580, v12, 0, 0);
  }
  v13 = *(float *)(this + 812) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v13, 0);
}
