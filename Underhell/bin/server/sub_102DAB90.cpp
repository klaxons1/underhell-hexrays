int __thiscall sub_102DAB90(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // ecx

  result = sub_101E7260(this, a2, a3);
  v5 = this[897];
  if ( v5 )
    return (*(int (__thiscall **)(int, int (__stdcall ***)(int, int)))(*(_DWORD *)v5 + 8))(v5, &off_10665E6C);
  return result;
}
