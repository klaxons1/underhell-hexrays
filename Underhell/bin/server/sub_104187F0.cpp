int __thiscall sub_104187F0(void *this, int a2, int a3, float a4)
{
  if ( a2 )
    return (*(int (__thiscall **)(int, _DWORD, int, void *))(*(_DWORD *)a2 + 12))(a2, LODWORD(a4), a3, this);
  else
    return 1;
}
