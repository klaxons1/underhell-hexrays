void __thiscall sub_10144530(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // esi

  v3 = *(_DWORD *)(a2 + 8);
  v4 = (_DWORD *)(this + 820);
  if ( *(_DWORD *)(this + 820) != v3 )
  {
    (**(void (__thiscall ***)(int, _DWORD *))(this + 800))(this + 800, v4);
    *v4 = v3;
  }
  sub_10144140(this);
}
