int __usercall sub_1023B1C0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  const char *v3; // eax
  int v4; // esi
  int result; // eax
  char Destination[512]; // [esp+8h] [ebp-300h] BYREF
  char String[256]; // [esp+208h] [ebp-100h] BYREF

  sub_1023A9E0(a1);
  v3 = *(const char **)(dword_106B31C8 + 60);
  if ( !v3 )
    v3 = ::String;
  sub_10429A00(String, 0x100u, "maps/%s", (char)v3);
  sub_10429910(String, 92);
  _strlwr(String);
  sub_10429B70(String, Destination, 0x200u);
  sub_10429750((int)Destination, "_level_sounds.txt", 512, -1);
  if ( (*(unsigned __int8 (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 40))(
         dword_106B31D8 + 4,
         Destination,
         "GAME") )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B3204 + 156))(dword_106B3204, Destination);
  }
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 76))(dword_106B3204);
  for ( result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 84))(dword_106B3204);
        v4 != result;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3204 + 84))(dword_106B3204) )
  {
    if ( (*(_BYTE *)((*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 88))(dword_106B3204, v4) + 26) & 8) != 0 )
      sub_1023AA70(a2, a1, v4);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 80))(dword_106B3204, v4);
  }
  return result;
}
