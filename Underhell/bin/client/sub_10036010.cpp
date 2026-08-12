char __thiscall sub_10036010(int this, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  unsigned __int16 v5; // ax
  char result; // al

  if ( a2 )
    v2 = a2 + 4;
  else
    v2 = 0;
  v3 = *(_DWORD *)dword_10413160;
  v4 = this + 4;
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this + 4) + 132))(this + 4, v2);
  result = (*(int (__thiscall **)(int, _DWORD))(v3 + 28))(dword_10413160, v5);
  if ( result )
  {
    if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)(a2 + 4) + 132))(a2 + 4) != 0xFFFF
      && *(_WORD *)(a2 + 300) != 0xFFFF )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 16))(
        dword_10413160,
        *(unsigned __int16 *)(a2 + 300));
      *(_WORD *)(a2 + 300) = -1;
    }
    *(_WORD *)(a2 + 300) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 132))(v4);
    *(_WORD *)(this + 300) = -1;
    return 1;
  }
  return result;
}
