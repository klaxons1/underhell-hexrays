char __thiscall sub_1042C370(int this, int a2)
{
  char result; // al
  int (__cdecl *v3)(int); // ecx
  int (*v4)(void); // ecx

  result = *(_BYTE *)(this + 32);
  if ( (result & 2) != 0 )
  {
    v3 = *(int (__cdecl **)(int))(this + 24);
    if ( v3 )
      return v3(a2);
  }
  else if ( (result & 4) != 0 )
  {
    if ( *(_DWORD *)(this + 24) )
      return (***(int (__thiscall ****)(_DWORD, int))(this + 24))(*(_DWORD *)(this + 24), a2);
  }
  else
  {
    v4 = *(int (**)(void))(this + 24);
    if ( v4 )
      return v4();
  }
  return result;
}
