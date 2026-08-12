int __thiscall sub_10184970(void *this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  sub_100E20F0(this);
  if ( this )
    v4 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
  else
    v4 = -1;
  v2 = sub_10319100(&v4);
  if ( v2 != -1 )
  {
    if ( dword_106B6D38 - v2 - 1 > 0 )
      memcpy(
        (void *)(dword_106B6D2C + 4 * v2),
        (const void *)(dword_106B6D2C + 4 * v2 + 4),
        4 * (dword_106B6D38 - v2 - 1));
    --dword_106B6D38;
  }
  return sub_100E20F0(this);
}
