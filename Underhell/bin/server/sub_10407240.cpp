int __thiscall sub_10407240(void *this)
{
  int v2; // eax
  unsigned int v4; // [esp+4h] [ebp-4h] BYREF

  if ( this )
    v4 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  else
    v4 = -1;
  v2 = sub_10319100(&dword_106F06B8, &v4);
  if ( v2 != -1 )
  {
    if ( dword_106F06C4 - v2 - 1 > 0 )
      memcpy(
        (void *)(dword_106F06B8 + 4 * v2),
        (const void *)(dword_106F06B8 + 4 * v2 + 4),
        4 * (dword_106F06C4 - v2 - 1));
    --dword_106F06C4;
  }
  return sub_100E20F0(this);
}
