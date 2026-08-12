int __thiscall sub_102DF760(int this, _DWORD *a2)
{
  if ( !sub_100CF460((_DWORD *)this) )
  {
    if ( *(_BYTE *)(this + 5105) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5105);
      *(_BYTE *)(this + 5105) = 0;
    }
    if ( *(_BYTE *)(this + 5106) )
    {
      (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5106);
      *(_BYTE *)(this + 5106) = 0;
    }
  }
  return sub_101E3250(this, a2);
}
