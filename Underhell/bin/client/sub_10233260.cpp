int __thiscall sub_10233260(int *this, int *a2)
{
  int result; // eax
  bool v3; // zf

  result = *a2;
  v3 = *a2 == 0;
  *this = *a2;
  if ( !v3 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 40))(result);
  return result;
}
