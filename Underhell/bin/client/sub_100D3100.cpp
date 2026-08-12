int __cdecl sub_100D3100(void (__thiscall *a1)(int))
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int i; // [esp+4h] [ebp-4h]

  result = dword_103E0E64;
  v2 = 0;
  for ( i = dword_103E0E64; v2 < i; ++v2 )
  {
    v3 = dword_1047CA8C;
    v4 = *(_DWORD *)(dword_103E0E58 + 4 * v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
    a1(v4);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  return result;
}
