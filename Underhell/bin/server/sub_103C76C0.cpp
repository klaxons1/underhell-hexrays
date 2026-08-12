char __thiscall sub_103C76C0(float *this, int a2)
{
  int v3; // eax

  if ( *(char **)(a2 + 92) == "npc_rollermine" || sub_100D6240((_DWORD *)a2, "npc_rollermine") )
  {
    v3 = sub_100D7680(a2);
    return v3 && (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 368))(v3);
  }
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    && *(float *)(dword_106B31C8 + 12) < (double)this[1462] )
  {
    return 0;
  }
  return sub_10395DE0(this, (_DWORD *)a2);
}
