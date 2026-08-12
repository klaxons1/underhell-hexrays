int __thiscall sub_10221E20(_DWORD *this, int a2, int a3, int a4, int a5)
{
  const char *v6; // eax
  int result; // eax

  v6 = (const char *)(**(int (__thiscall ***)(int))a2)(a2);
  result = sub_10221C80(this, v6);
  if ( result != -1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 4))(a4, a3 + result);
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 28))(a2, a4, a5);
  }
  return result;
}
