int __thiscall sub_101E3AE0(int *this, float *a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
    return sub_100E10C0(this[2], a2);
  return result;
}
