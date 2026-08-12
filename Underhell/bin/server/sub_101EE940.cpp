int __thiscall sub_101EE940(int this)
{
  _BYTE *v1; // esi
  int result; // eax

  v1 = (_BYTE *)(this + 2329);
  if ( *(_BYTE *)(this + 2329) )
  {
    result = (**(int (__thiscall ***)(int, _BYTE *))(this + 2192))(this + 2192, v1);
    *v1 = 0;
  }
  return result;
}
