void __thiscall sub_1031C620(int this)
{
  int v2; // edx
  int v3; // edx
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)(this + 580);
  v5 = *(float *)(this + 584);
  v6 = *(float *)(this + 588);
  sub_101C8D10(this);
  if ( !*(_BYTE *)(this + 2144) && *(_BYTE *)(this + 306) != 6 )
  {
    if ( *(_BYTE *)(this + 447) > 1u )
    {
      sub_100DD660(this, &flt_106F1CA8);
      sub_100E0970(this, v2, 0, 0);
      sub_1031C450(this);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( v4 == *(float *)(this + 580) && v5 == *(float *)(this + 584) && v6 == *(float *)(this + 588) )
    {
      sub_100DD660(this, &flt_106F1CA8);
      sub_100E0970(this, v3, 0, 0);
      sub_1031C450(this);
    }
  }
}
