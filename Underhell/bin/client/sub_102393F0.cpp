int (__thiscall ***__thiscall sub_102393F0(_DWORD *this, int (__thiscall ***a2)(_DWORD)))(_DWORD)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int (__thiscall ***result)(_DWORD); // eax

  if ( a2 )
  {
    v3 = dword_1047CA74;
    v4 = *(_DWORD *)dword_1047CA74;
    v5 = (**a2)(a2);
    *this = (*(int (__thiscall **)(int, int))(v4 + 60))(v3, v5);
    return a2;
  }
  else
  {
    result = 0;
    *this = -1;
  }
  return result;
}
