int __thiscall sub_1025AFC0(void *this, const char *Src)
{
  int v3; // eax
  int v4; // eax

  v3 = sub_10229D00(32);
  if ( !v3 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 1028))(this, 0);
  v4 = sub_1022B0E0(v3, (int)"Command", "command", Src);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1028))(this, v4);
}
