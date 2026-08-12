int __thiscall sub_10144030(int this, int a2)
{
  int result; // eax
  int v3; // edi
  _DWORD *v4; // esi

  *(_DWORD *)(this + 872) |= 1u;
  result = a2;
  v3 = *(_DWORD *)(a2 + 8);
  v4 = (_DWORD *)(this + 824);
  if ( *(_DWORD *)(this + 824) != v3 )
  {
    result = (**(int (__thiscall ***)(int, _DWORD *))(this + 800))(this + 800, v4);
    *v4 = v3;
  }
  return result;
}
