void __thiscall sub_100FB4B0(_BYTE *this, int a2)
{
  int v2; // edx
  bool v3; // zf
  double v4; // st7

  v2 = *(_DWORD *)(a2 + 24);
  v3 = v2 == 1;
  if ( v2 == 1 )
  {
    v4 = 255.0;
    if ( *(float *)(a2 + 8) > 255.0 )
      goto LABEL_8;
    v3 = 1;
  }
  v4 = 0.0;
  if ( (!v3 || *(float *)(a2 + 8) >= 0.0) && v2 == 1 )
    v4 = *(float *)(a2 + 8);
LABEL_8:
  sub_1005C620(this + 116, (int)v4, this[117], this[118], HIBYTE(*((_DWORD *)this + 29)));
}
