int __thiscall sub_10221BF0(_DWORD *this)
{
  int i; // esi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < this[12]; ++i )
  {
    v3 = *(_DWORD *)(this[9] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  }
  return result;
}
