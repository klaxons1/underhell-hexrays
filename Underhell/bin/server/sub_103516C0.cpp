bool __thiscall sub_103516C0(void *this)
{
  bool result; // al
  int v3; // eax

  result = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    if ( *(char **)(v3 + 92) == "rpg_missile" || sub_100D6240((_DWORD *)v3, "rpg_missile") )
      return 1;
  }
  return result;
}
