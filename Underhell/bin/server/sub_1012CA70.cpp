int __thiscall sub_1012CA70(_DWORD *this, int a2)
{
  int i; // esi
  int (__thiscall ***v4)(_DWORD, int); // ecx
  int result; // eax

  if ( a2 )
  {
    for ( i = this[16396] - 1; i >= 0; --i )
    {
      v4 = *(int (__thiscall ****)(_DWORD, int))(this[16393] + 4 * i);
      result = (**v4)(v4, a2);
    }
  }
  return result;
}
