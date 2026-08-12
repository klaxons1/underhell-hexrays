int __thiscall sub_10189950(void *this, int a2, int a3)
{
  unsigned int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int result; // eax

  (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)this + 304))(this, a2, a3);
  v4 = *(_DWORD *)(a3 + 40);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1];
  if ( *(_DWORD *)(a3 + 44) == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != *(_DWORD *)(a3 + 44) >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
  v7 = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 508))(this, v6, v5, a2);
  sub_101E2220(1);
  sub_102467B0("game_playerdie", a2, a2, 3, 0.0);
  if ( a2 == v7 || !v7 )
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 528))(this);
    if ( (_BYTE)result )
      return sub_101E21F0(-1);
  }
  else
  {
    v8 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 296))(this, v7, a2);
    sub_101E21F0(v8);
    sub_101E2890(v7);
    return sub_102467B0("game_playerkill", v7, v7, 3, 0.0);
  }
  return result;
}
