int __cdecl sub_101B5A50(int a1)
{
  int result; // eax
  int v2; // esi
  unsigned __int16 v3; // ax

  result = a1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 424);
    if ( v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 92))(v2);
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 88))(v2, v3 ^ 0x8000);
    }
  }
  return result;
}
