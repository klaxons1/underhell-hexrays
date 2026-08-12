int __thiscall sub_100120B0(void *this, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = 0; i < 3; ++i )
  {
    result = sub_10045780(i);
    if ( result )
      result = (*(int (__thiscall **)(int, void *, int, int))(*(_DWORD *)result + 756))(result, this, a2, a3);
  }
  return result;
}
