int __cdecl sub_1016FF90(void (__thiscall *a1)(int))
{
  int i; // edi
  int v2; // esi
  int v3; // ebx
  int result; // eax

  for ( i = dword_1062971C - 1; i >= 0; --i )
  {
    v2 = dword_10700AC8;
    v3 = *(_DWORD *)(dword_10629710 + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    a1(v3);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  }
  return result;
}
