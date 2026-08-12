int __thiscall sub_10144910(int this)
{
  int result; // eax

  nullsub_4(this);
  sub_100EC390((_DWORD *)this, (int)"SkyboxLerpContext");
  result = sub_100EC3F0((_DWORD *)this, (int)sub_10144730, *(float *)(dword_106B31C8 + 12), (int)"SkyboxLerpContext");
  if ( *(_DWORD *)(this + 824) != *(_DWORD *)(this + 816) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 800))(this + 800, this + 824);
    *(_DWORD *)(this + 824) = *(_DWORD *)(this + 816);
  }
  if ( *(_DWORD *)(this + 828) != *(_DWORD *)(this + 820) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 828);
    result = *(_DWORD *)(this + 820);
    *(_DWORD *)(this + 828) = result;
  }
  return result;
}
