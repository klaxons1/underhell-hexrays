int __userpurge sub_1027DFF0@<eax>(int a1@<ecx>, int a2@<esi>, int a3, char a4)
{
  char *v5; // esi
  int v8; // [esp+Ch] [ebp-28Ch] BYREF
  char Buffer[124]; // [esp+14h] [ebp-284h] BYREF
  char v10[260]; // [esp+90h] [ebp-208h] BYREF
  char v11[260]; // [esp+194h] [ebp-104h] BYREF

  v8 = 0;
  (*(void (__thiscall **)(int, const char *, int *))(*(_DWORD *)dword_1047CA80 + 60))(
    dword_1047CA80,
    "HKEY_CURRENT_USER\\Software\\Valve\\Steam\\Offline",
    &v8);
  if ( v8 != 1 || a4 )
    return (***(int (__thiscall ****)(_DWORD, int))(a1 + 212))(*(_DWORD *)(a1 + 212), a3);
  v5 = (char *)sub_1028D773("HTML_OFFLINE_DIR");
  if ( !v5 )
    return (***(int (__thiscall ****)(_DWORD, int))(a1 + 212))(*(_DWORD *)(a1 + 212), a3);
  if ( !(*(unsigned __int8 (__thiscall **)(int, char *, _DWORD, int))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
          dword_1047C968 + 4,
          v5,
          0,
          a2) )
  {
    _snprintf(Buffer, 0x80u, "%senglish.html", "Steam\\cached\\offline_");
    v5 = Buffer;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047C968 + 236))(dword_1047C968);
  (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047C968 + 128))(dword_1047C968, v5, v10, 260);
  _snprintf(v11, 0x104u, "file://%s", v10);
  return (***(int (__thiscall ****)(_DWORD, char *))(a1 + 212))(*(_DWORD *)(a1 + 212), v11);
}
