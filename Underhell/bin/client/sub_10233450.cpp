int __thiscall sub_10233450(int *this, int a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  int v9; // ecx
  int v10; // eax
  int result; // eax

  v9 = *this;
  if ( v9 && dword_1047C96C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 44))(v9);
    *this = 0;
  }
  v10 = 12;
  if ( a6 == 3 )
    v10 = 13;
  result = (*(int (__thiscall **)(int, int, int, int, int, int, int, int, bool))(*(_DWORD *)dword_1047C96C + 328))(
             dword_1047C96C,
             a8,
             a2,
             a3,
             a4,
             a5,
             a6,
             v10,
             a7 != 0);
  *this = result;
  return result;
}
