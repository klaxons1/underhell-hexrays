int __cdecl sub_1016B150(int a1, int a2)
{
  _BYTE *v2; // eax
  int v3; // edi
  int v5[3]; // [esp+20h] [ebp-14h] BYREF

  sub_1022A940("originx", 0.0);
  *(float *)v5 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v5[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v5[2] = 0.0;
  v2 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v2 )
    v3 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v2);
  else
    v3 = 0;
  sub_1022A940("duration", 0.0);
  sub_1022A940("size", 0.0);
  sub_1022A940("brightness", 0.0);
  return sub_1016B0A0(a1, a2, (float *)v5, v3, 0.0, 0.0, (int)0.0);
}
