int __cdecl sub_100D3160(void (__thiscall *a1)(int))
{
  int i; // edi
  int v2; // esi
  int v3; // ebx
  int result; // eax

  for ( i = dword_103E0E50 - 1; i >= 0; --i )
  {
    v2 = dword_1047CA8C;
    v3 = *(_DWORD *)(dword_103E0E44 + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    a1(v3);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  }
  return result;
}
