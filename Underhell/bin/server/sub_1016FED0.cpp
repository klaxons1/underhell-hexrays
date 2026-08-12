int __cdecl sub_1016FED0(void (__thiscall *a1)(int))
{
  int result; // eax
  int v2; // edi
  int v3; // esi
  int v4; // ebx
  int i; // [esp+4h] [ebp-4h]

  result = dword_1062971C;
  v2 = 0;
  for ( i = dword_1062971C; v2 < i; ++v2 )
  {
    v3 = dword_10700AC8;
    v4 = *(_DWORD *)(dword_10629710 + 4 * v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    a1(v4);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  }
  return result;
}
