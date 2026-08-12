bool __thiscall sub_101E2490(_DWORD *this, int a2)
{
  int v2; // esi
  double v3; // st7
  bool result; // al
  float v5; // [esp+8h] [ebp+8h]

  result = 0;
  if ( a2 )
  {
    v2 = this[106];
    v5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 116))(a2);
    v3 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v2 + 116))(v2);
    if ( v3 + v3 < v5 )
      return 1;
  }
  return result;
}
