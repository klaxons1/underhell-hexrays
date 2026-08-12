void __thiscall sub_10382720(_BYTE *this, int a2, float *a3, int a4)
{
  flt_106B4F40 = *a3;
  flt_106B4F44 = a3[1];
  flt_106B4F48 = a3[2];
  if ( (*(_BYTE *)(a2 + 64) & 2) != 0 )
    ((void (__thiscall *)(int (__stdcall ***)(char), int, int))(*off_1061B7A0)[8])(off_1061B7A0, a4 + 12, a4 + 24);
  if ( *(char *)(a2 + 64) < 0 )
    ((void (__thiscall *)(int (__stdcall ***)(char), int, int, int, int))(*off_1061B7A0)[3])(
      off_1061B7A0,
      a4 + 12,
      1,
      1,
      a4 + 24);
  sub_100360A0(this, a2, (int)a3, a4);
}
