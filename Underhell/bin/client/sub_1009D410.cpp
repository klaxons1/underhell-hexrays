int __thiscall sub_1009D410(_DWORD *this)
{
  int v2; // eax

  v2 = this[4];
  *this = &CFlashlightEffect::`vftable';
  if ( v2 && *(_DWORD *)(v2 + 36) == this[2] )
  {
    *(float *)(v2 + 24) = *((float *)off_103DC81C + 3);
    this[4] = 0;
  }
  sub_1009D300((int)this);
  return sub_10233380(this + 6);
}
