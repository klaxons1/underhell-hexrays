char __thiscall sub_103F5E20(int this)
{
  int v2; // eax

  v2 = sub_100D1940((_DWORD *)this);
  if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    return 0;
  *(_WORD *)(this + 1392) = 0;
  return sub_102B2150(this);
}
