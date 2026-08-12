char __thiscall sub_101A5390(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax

  v2 = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 1136))(this);
  v3 = this[973];
  if ( !v3 || v3 == 3 || v3 == 4 || v3 == 5 || v3 == 7 )
  {
    if ( v2 < 4 )
      return 1;
  }
  else if ( (v3 == 1 || v3 == 2 || v3 == 6) && v2 < 2 )
  {
    return 1;
  }
  return 0;
}
