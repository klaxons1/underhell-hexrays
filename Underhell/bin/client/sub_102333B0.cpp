int __thiscall sub_102333B0(int *this, int a2, int a3, int a4)
{
  int v5; // ecx
  int result; // eax

  v5 = *this;
  if ( v5 && dword_1047C96C )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5);
    *this = 0;
  }
  result = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047C96C + 304))(dword_1047C96C, a2, a3, a4);
  *this = result;
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 40))(result);
  return result;
}
