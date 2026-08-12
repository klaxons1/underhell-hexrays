void __thiscall sub_1033FF10(int this)
{
  int v2; // edi
  double v3; // st7
  double v4; // st6
  double v5; // st5

  sub_10093FD0((int *)this);
  sub_10023E00((char *)this, 79);
  if ( *(_DWORD *)(this + 2324) == 3 )
  {
    if ( sub_100697A0((_DWORD *)this, 99, 0) && sub_1004AE20((_DWORD *)this, 0, 1) )
      sub_10023CB0((char *)this, 79);
    if ( *(_DWORD *)(this + 4980) == 2
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
      && !sub_10023D10((_DWORD *)this, 13) )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
        sub_100DAE60(v2);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v3 = *(float *)(this + 580) - *(float *)(v2 + 580);
      v4 = *(float *)(this + 584) - *(float *)(v2 + 584);
      v5 = *(float *)(this + 588) - *(float *)(v2 + 588);
      if ( v3 * v3 + v4 * v4 + v5 * v5 < 129600.0 )
        *(_DWORD *)(this + 4980) = 0;
    }
  }
}
