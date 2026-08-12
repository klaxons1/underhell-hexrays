int __cdecl sub_10132120(int a1, int a2)
{
  int result; // eax

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, a1, a2);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041317C + 4))(dword_1041317C, 2);
  if ( result )
    return (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, result, a1, a2);
  return result;
}
