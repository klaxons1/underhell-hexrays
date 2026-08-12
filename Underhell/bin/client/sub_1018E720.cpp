double __thiscall sub_1018E720(float *this)
{
  double v2; // st7
  double result; // st7
  int v4; // eax
  double v5; // st6
  float v6; // [esp+4h] [ebp-4h]

  v2 = sub_1018E630(this);
  v6 = v2;
  result = sub_100458F0((int)this, v2) + v6;
  if ( *((_DWORD *)off_103DC81C + 5) == 1 )
    v4 = 5;
  else
    v4 = *(_DWORD *)(dword_1044CC6C + 48);
  v5 = (double)v4;
  if ( v5 > result )
    return v5;
  return result;
}
