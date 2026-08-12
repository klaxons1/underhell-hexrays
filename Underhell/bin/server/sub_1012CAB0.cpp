int __thiscall sub_1012CAB0(_DWORD *this, int a2)
{
  int i; // esi
  int v4; // ecx
  int result; // eax

  if ( a2 )
  {
    for ( i = this[16396] - 1; i >= 0; --i )
    {
      v4 = *(_DWORD *)(this[16393] + 4 * i);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(v4, a2);
    }
  }
  return result;
}
