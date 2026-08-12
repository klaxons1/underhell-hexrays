int __thiscall sub_1007A460(_DWORD *this)
{
  int i; // esi
  int (__thiscall ***v3)(_DWORD, _DWORD); // ecx
  int result; // eax

  for ( i = 0; i < this[4]; ++i )
  {
    v3 = *(int (__thiscall ****)(_DWORD, _DWORD))(this[1] + 4 * i);
    result = (**v3)(v3, 0);
  }
  return result;
}
