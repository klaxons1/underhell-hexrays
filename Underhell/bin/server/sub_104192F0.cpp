void __thiscall sub_104192F0(int this)
{
  double v2; // st7
  bool v3; // zf
  float v4; // [esp+8h] [ebp-4h]

  if ( -1.0 != *(float *)(this + 76) && (*(_BYTE *)(this + 376) & 1) == 0 )
  {
    v2 = *(float *)(this + 76);
    if ( *(_DWORD *)(this + 296) )
      sub_1041CAB0(*(float *)(this + 76));
    *(float *)(this + 76) = v2;
  }
  v4 = *(float *)(this + 72);
  if ( *(_DWORD *)(this + 296) )
    sub_1041CAB0(*(float *)(this + 72));
  v3 = (*(_BYTE *)(this + 376) & 1) == 0;
  *(float *)(this + 72) = v4;
  if ( !v3 )
    *(float *)(this + 76) = v4 - v4 + *(float *)(this + 76);
}
