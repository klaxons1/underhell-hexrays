int __thiscall sub_1014BFF0(void *this)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  sub_1014B630((int)this);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 292))(v2, 0, 0, 0, 255);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 16))(v2, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
