int __thiscall sub_101ED530(int this, char a2)
{
  _BYTE *v2; // esi
  int result; // eax

  v2 = (_BYTE *)(this + 2328);
  if ( a2 != *(_BYTE *)(this + 2328) )
  {
    result = (**(int (__thiscall ***)(int, _BYTE *))(this + 2192))(this + 2192, v2);
    *v2 = a2;
  }
  return result;
}
