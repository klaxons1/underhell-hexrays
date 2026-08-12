unsigned int __thiscall sub_101AD980(int this)
{
  unsigned int result; // eax
  int v3; // ecx

  result = sub_100E0780(this);
  v3 = *(_DWORD *)(this + 800);
  if ( v3 )
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, this + 824);
  *(_BYTE *)(this + 820) = 1;
  return result;
}
