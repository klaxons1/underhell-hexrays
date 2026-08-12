int __thiscall sub_101EE910(int this, int a2)
{
  _BYTE *v2; // esi
  int result; // eax

  v2 = (_BYTE *)(this + 2329);
  if ( *(_BYTE *)(this + 2329) != 1 )
  {
    result = (**(int (__thiscall ***)(int, _BYTE *))(this + 2192))(this + 2192, v2);
    *v2 = 1;
  }
  return result;
}
