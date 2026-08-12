int __thiscall sub_100489B0(_DWORD *this)
{
  int v1; // eax
  int v2; // eax

  v1 = this[302];
  if ( v1 )
  {
    *(float *)(v1 + 24) = *((float *)off_103DC81C + 3);
    this[302] = 0;
  }
  v2 = this[303];
  if ( v2 )
  {
    *(float *)(v2 + 24) = *((float *)off_103DC81C + 3);
    this[303] = 0;
  }
  return sub_1003C4A0(this);
}
