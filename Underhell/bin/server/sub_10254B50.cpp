int __thiscall sub_10254B50(int this, int a2)
{
  int v2; // ecx
  int result; // eax

  if ( !*(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 1;
    v2 = *(_DWORD *)(this + 424);
    if ( v2 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 48))(v2, 0);
  }
  return result;
}
