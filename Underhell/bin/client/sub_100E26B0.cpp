int __thiscall sub_100E26B0(_DWORD *this)
{
  int v2; // eax

  v2 = this[4];
  *this = &CNightVisionEffect::`vftable';
  if ( v2 && *(_DWORD *)(v2 + 36) == this[2] )
  {
    *(float *)(v2 + 24) = *((float *)off_103DC81C + 3);
    this[4] = 0;
  }
  sub_100E25F0((int)this);
  return sub_10233380(this + 6);
}
