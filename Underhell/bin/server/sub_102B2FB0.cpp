int __thiscall sub_102B2FB0(int *this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 320) + 44))(a2 + 320);
  if ( result == 1 )
  {
    this[49] = 0;
    return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
