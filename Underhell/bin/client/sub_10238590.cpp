int __thiscall sub_10238590(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // eax
  int result; // eax

  v3 = this[44];
  if ( v3 != -1 )
    return (*(int (__thiscall **)(int, int, _DWORD *, _DWORD *))(*(_DWORD *)dword_1047CA6C + 132))(
             dword_1047CA6C,
             v3,
             a2,
             a3);
  result = (int)a3;
  *a3 = 0;
  *a2 = 0;
  return result;
}
