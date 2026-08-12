void __thiscall sub_100A7880(_DWORD *this)
{
  int v1; // edx
  double v2; // st7
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v1 = this[1];
  v2 = *((float *)off_103DC81C + 4) * 1000.0;
  if ( *(float *)(v1 + 3532) > 0.0 )
  {
    *(float *)(v1 + 3532) = *(float *)(v1 + 3532) - v2;
    if ( *(float *)(this[1] + 3532) < 0.0 )
      *(float *)(this[1] + 3532) = 0.0;
  }
  if ( *(float *)(this[1] + 3536) > 0.0 )
  {
    *(float *)(this[1] + 3536) = *(float *)(this[1] + 3536) - v2;
    v3 = this[1];
    if ( *(float *)(v3 + 3536) < 0.0 )
      *(float *)(v3 + 3536) = 0.0;
  }
  v4 = this[1];
  if ( *(float *)(v4 + 3540) > 0.0 )
  {
    *(float *)(v4 + 3540) = *(float *)(v4 + 3540) - v2;
    if ( *(float *)(this[1] + 3540) < 0.0 )
      *(float *)(this[1] + 3540) = 0.0;
  }
  if ( *(float *)(this[1] + 4220) > 0.0 )
  {
    *(float *)(this[1] + 4220) = *(float *)(this[1] + 4220) - v2;
    v5 = this[1];
    if ( *(float *)(v5 + 4220) < 0.0 )
      *(float *)(v5 + 4220) = 0.0;
  }
}
