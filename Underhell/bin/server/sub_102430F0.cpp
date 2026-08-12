void __thiscall sub_102430F0(_BYTE *this, int a2)
{
  int v3; // ecx
  bool v4; // zf
  double v5; // st7

  v3 = *(_DWORD *)(a2 + 24);
  v4 = v3 == 1;
  if ( v3 == 1 )
  {
    v5 = 255.0;
    if ( *(float *)(a2 + 8) > 255.0 )
      goto LABEL_8;
    v4 = 1;
  }
  v5 = 0.0;
  if ( (!v4 || *(float *)(a2 + 8) >= 0.0) && v3 == 1 )
    v5 = *(float *)(a2 + 8);
LABEL_8:
  sub_1005C620(this + 116, this[116], (int)v5, this[118], HIBYTE(*((_DWORD *)this + 29)));
}
