int __thiscall sub_1026ACB0(void *this, const char *Src)
{
  int v3; // eax
  int v4; // eax

  v3 = sub_10229D00(32);
  if ( v3 )
    v4 = sub_1022B0E0(v3, (int)"Command", "command", Src);
  else
    v4 = 0;
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 180))(this, v4);
  return sub_10237610(this, (int)Src);
}
