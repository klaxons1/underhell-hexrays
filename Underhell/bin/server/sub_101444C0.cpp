void __thiscall sub_101444C0(int this, int a2)
{
  _BYTE *v3; // esi

  v3 = (_BYTE *)(this + 864);
  if ( *(_BYTE *)(this + 864) )
  {
    (**(void (__thiscall ***)(int, _BYTE *))(this + 800))(this + 800, v3);
    *v3 = 0;
  }
  sub_10144140(this);
}
