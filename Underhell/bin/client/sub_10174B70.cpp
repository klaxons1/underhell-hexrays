int __thiscall sub_10174B70(int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(dword_1042D3B4 + 48) )
  {
    v3 = sub_1007A6A0(off_103DCD78, 0);
    v4 = (_DWORD *)v3;
    if ( v3 )
    {
      v9 = *(_DWORD *)dword_10413164;
      v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 40))(v3, this + 12, 0, 0);
      v6 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 36))(v4, v5);
      v7 = (*(int (__thiscall **)(_DWORD *, int))(v4[1] + 36))(v4 + 1, v6);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, int))(v9 + 4))(dword_10413164, *(_DWORD *)(this + 24), 0, v7);
    }
  }
  return sub_10174A50((float *)(this + 12), *(_DWORD *)(this + 24));
}
