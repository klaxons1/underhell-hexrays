int __thiscall sub_102E6F00(int this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)this = &CTriggerRPGFire::`vftable';
  v4 = *(_DWORD *)sub_100380E0((char *)this);
  v2 = sub_10319100(&v4);
  if ( v2 != -1 )
  {
    if ( dword_106C7638 - v2 - 1 > 0 )
      memcpy(
        (void *)(dword_106C762C + 4 * v2),
        (const void *)(dword_106C762C + 4 * v2 + 4),
        4 * (dword_106C7638 - v2 - 1));
    --dword_106C7638;
  }
  sub_1010BB10((_DWORD *)(this + 1092));
  return sub_10116BA0((_DWORD *)this);
}
