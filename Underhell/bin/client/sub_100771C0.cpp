int __thiscall sub_100771C0(int *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *this;
  if ( v2 )
  {
    dword_1047C96C = v2;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 228))(v2, 0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 196))(dword_1041315C, dword_1047C96C);
    *this = 0;
    return (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_1047C96C + 376))(dword_1047C96C, 1, 1, 0);
  }
  return result;
}
