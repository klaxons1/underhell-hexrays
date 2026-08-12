int __thiscall sub_101E2280(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax

  result = sub_100D87F0(this);
  if ( result )
  {
    v5 = sub_100D87F0(this);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 776))(v5, a2);
  }
  return result;
}
