_DWORD *__thiscall sub_10077210(_DWORD *this)
{
  if ( *(_DWORD *)(dword_1041381C + 48) )
  {
    *this = dword_1047C96C;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413170 + 468))(dword_10413170, dword_1047C96C);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 228))(dword_1047C96C, 1);
    dword_1047C96C = dword_10413170;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 196))(dword_1041315C, dword_10413170);
    return this;
  }
  else
  {
    *this = 0;
    return this;
  }
}
