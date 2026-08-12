int sub_101819E0()
{
  int result; // eax
  int v1; // esi

  result = dword_1044543C;
  v1 = *(_DWORD *)(dword_1044543C + 48);
  if ( v1 > 0 )
  {
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 44))(
      dword_1047CA6C,
      255,
      0,
      0,
      255);
    (*(void (__thiscall **)(int, int, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 60))(dword_1047CA6C, v1, 0, v1, v1);
    return (*(int (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA6C + 60))(
             dword_1047CA6C,
             0,
             v1,
             v1,
             v1);
  }
  return result;
}
