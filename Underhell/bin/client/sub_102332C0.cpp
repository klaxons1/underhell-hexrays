int __thiscall sub_102332C0(int *this, int a2, int a3)
{
  int v4; // ecx
  int result; // eax

  v4 = *this;
  if ( v4 && dword_1047C96C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 52))(v4);
    *this = 0;
  }
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 276))(dword_1047C96C, a2, a3);
  *this = result;
  return result;
}
