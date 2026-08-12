int __thiscall sub_10025E90(void *this, float a2, float a3)
{
  if ( a3 > 64.0 )
    return 39;
  if ( a2 >= 0.7 && (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
    return (*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) + 256) & 1) != 0 ? 0x17 : 0;
  return 0;
}
