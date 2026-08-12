int __thiscall sub_1024A9B0(void *this, int a2, int a3)
{
  if ( !a3 )
    return 0;
  if ( a2 && a2 != a3 && (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 408))(this, a2, a3) == 1 )
    return -1;
  return 1;
}
