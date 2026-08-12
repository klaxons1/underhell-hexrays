int __cdecl sub_10140950(float a1)
{
  int v1; // esi
  void (__thiscall *v2)(int, _DWORD); // edx

  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  v2 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 596);
  dword_1043A88C = 0;
  v2(v1, LODWORD(a1));
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 12))(v1);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
}
