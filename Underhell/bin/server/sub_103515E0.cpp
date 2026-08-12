bool __thiscall sub_103515E0(int this, char **a2)
{
  if ( (*((unsigned __int8 (__thiscall **)(char **))*a2 + 66))(a2)
    && !sub_100D7680((int)a2)
    && (a2[23] == "rpg_missile" || sub_100D6240(a2, "rpg_missile")) )
  {
    return 1;
  }
  if ( !*(_BYTE *)(this + 4142)
    || (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
    && (char **)(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) == a2 )
  {
    return sub_10027D40((_DWORD *)this, (int)a2);
  }
  return 0;
}
