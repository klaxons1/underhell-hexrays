int __thiscall sub_10238D90(_DWORD *this, int a2, int a3, int a4, int a5, int a6, float a7)
{
  int result; // eax

  if ( this[44] != -1 )
  {
    HIBYTE(a6) = (int)((double)HIBYTE(a6) * a7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, a6);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, this[44]);
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
             dword_1047CA6C,
             a2,
             a3,
             a2 + a4,
             a3 + a5);
  }
  return result;
}
