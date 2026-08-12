int __cdecl sub_102D6E60(int a1, char a2)
{
  if ( !*(_BYTE *)(dword_106B31C8 + 78) && !*(_BYTE *)(dword_106B31C8 + 77) )
    return (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "reload\n");
  if ( a2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1400))(a1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 96))(a1);
}
