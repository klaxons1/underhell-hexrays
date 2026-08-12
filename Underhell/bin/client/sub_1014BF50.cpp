int __thiscall sub_1014BF50(void *this)
{
  int v2; // esi
  int v3; // edi

  byte_10407398 = 1;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
  v3 = *(_DWORD *)(dword_1043BDB4 + 48);
  sub_10229140(&unk_1043BDB0, 0);
  sub_1014B630((int)this);
  byte_10407398 = 0;
  sub_10229140(&unk_1043BDB0, v3 != 0);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v2 + 292))(v2, 0, 0, 0, 255);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 16))(v2, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
}
