int __thiscall sub_101ED560(int this, char a2)
{
  unsigned int *v2; // esi
  int v3; // edi
  unsigned int v4; // edi
  int result; // eax

  v2 = (unsigned int *)(this + 2252);
  v3 = *(_DWORD *)(this + 2252);
  if ( a2 )
    v4 = v3 & 0xFFFFFEFF;
  else
    v4 = v3 | 0x100;
  if ( *v2 != v4 )
  {
    result = (**(int (__thiscall ***)(int, unsigned int *))(this + 2192))(this + 2192, v2);
    *v2 = v4;
  }
  return result;
}
