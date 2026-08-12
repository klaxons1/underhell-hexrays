int __thiscall sub_10169E20(int *this, int a2)
{
  int result; // eax

  result = sub_1007A6A0(off_103DCD78, this[3]);
  if ( result )
    return ((int (__thiscall *)(void ***, int, int, int, int))(*off_103E9C2C)[17])(
             off_103E9C2C,
             result,
             this[4],
             this[5],
             this[6]);
  return result;
}
