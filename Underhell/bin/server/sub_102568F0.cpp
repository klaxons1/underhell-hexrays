int __thiscall sub_102568F0(_DWORD *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    sub_102545E0(this[55]);
    this[49] = 0;
    return sub_1025FAC0(this);
  }
  return result;
}
