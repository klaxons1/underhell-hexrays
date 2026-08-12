int __cdecl sub_10174C00(int a1, int a2, float *a3, int a4)
{
  int v4; // eax
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax

  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    v4 = sub_1007A6A0(off_103DCD78, 0);
    v5 = (_DWORD *)v4;
    if ( v4 )
    {
      v6 = *(_DWORD *)dword_10413164;
      v7 = (*(int (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v4 + 40))(v4, a3, 0, 0);
      v8 = (*(int (__thiscall **)(_DWORD *, int))(*v5 + 36))(v5, v7);
      v9 = (*(int (__thiscall **)(_DWORD *, int))(v5[1] + 36))(v5 + 1, v8);
      (*(void (__thiscall **)(int, int, _DWORD, int))(v6 + 4))(dword_10413164, a4, 0, v9);
    }
  }
  return sub_10174A50(a3, a4);
}
