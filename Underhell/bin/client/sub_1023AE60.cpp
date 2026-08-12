void __thiscall sub_1023AE60(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // esi
  int v4; // edi
  int v5; // eax

  if ( a2 )
  {
    v3 = dword_1047CA74;
    v4 = *(_DWORD *)dword_1047CA74;
    v5 = (**a2)(a2);
    this[13] = (*(int (__thiscall **)(int, int))(v4 + 60))(v3, v5);
  }
  else
  {
    this[13] = -1;
  }
}
