int *__thiscall sub_103C9A30(int this)
{
  int *v2; // edi

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = (int *)sub_1001FB30((float *)(this + 580), 480.0);
  return sub_103C94D0((_DWORD *)this, v2) ? v2 : 0;
}
