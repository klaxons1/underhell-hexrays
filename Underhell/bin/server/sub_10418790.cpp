int __thiscall sub_10418790(void *this, int a2, int a3, float a4)
{
  int result; // eax

  result = a2;
  if ( a2 )
    return (*(int (__thiscall **)(int, _DWORD, int, void *))(*(_DWORD *)a2 + 8))(a2, LODWORD(a4), a3, this);
  return result;
}
