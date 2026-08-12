int __thiscall sub_10131A20(int this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &CEnvPlayerSurfaceTrigger::`vftable';
  v4 = *(_DWORD *)sub_100380E0((char *)this);
  v2 = sub_10319100(&v4);
  if ( v2 != -1 )
  {
    if ( dword_106AF128 - v2 - 1 > 0 )
      memcpy(
        (void *)(dword_106AF11C + 4 * v2),
        (const void *)(dword_106AF11C + 4 * v2 + 4),
        4 * (dword_106AF128 - v2 - 1));
    --dword_106AF128;
  }
  sub_1010BB10((_DWORD *)(this + 836));
  sub_1010BB10((_DWORD *)(this + 812));
  return sub_100DF1D0((_DWORD *)this);
}
