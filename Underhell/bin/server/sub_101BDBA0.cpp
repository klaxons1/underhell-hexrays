char __thiscall sub_101BDBA0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // ebx
  char result; // al
  int i; // esi

  v4 = this + 1;
  *this = a3;
  if ( this[4] < a3 )
    result = sub_103FB840(this[4], a3 - this[4], 0);
  for ( i = 0; i < a3; ++i )
    result = sub_101BD580(a2, (int *)(*v4 + 8 * i), *(char **)(a4 + 4 * i), 0);
  return result;
}
