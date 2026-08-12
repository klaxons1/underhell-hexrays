double __thiscall sub_10396770(int this)
{
  int v2; // eax
  int v3; // edi
  double v4; // st7
  float v6; // [esp+0h] [ebp-4h]

  v6 = 1.0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 && *(_BYTE *)(this + 4448) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v2 = sub_1025FB50(1);
    v3 = v2;
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(v2);
    v4 = *(float *)(v3 + 580) - *(float *)(this + 580);
    if ( v4 * v4 + (*(float *)(v3 + 584) - *(float *)(this + 584)) * (*(float *)(v3 + 584) - *(float *)(this + 584)) < 1296.0 )
      v6 = 2.0;
  }
  return sub_100BCBF0((void *)this) * v6;
}
