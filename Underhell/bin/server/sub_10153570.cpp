int sub_10153570()
{
  int v0; // edi
  int v1; // esi
  int v2; // ebx
  char *v3; // eax
  int result; // eax
  char ArgList[256]; // [esp+8h] [ebp-100h] BYREF

  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31D0 + 204))(dword_106B31D0, ArgList, 256);
  sub_104297E0(ArgList);
  v0 = -1;
  if ( sub_1042A310(32) )
    v1 = sub_1042A330("gameinfo.txt");
  else
    v1 = 0;
  if ( dword_106B31D8 )
    v2 = dword_106B31D8 + 4;
  else
    v2 = 0;
  v3 = (char *)sub_1025F440("%s/gameinfo.txt", (char)ArgList);
  if ( (unsigned __int8)sub_1042A380(v2, v3, "MOD") && sub_1042ACB0("FileSystem", 0) )
    v0 = sub_1042AE10("AdditionalContentId", -1);
  result = sub_1042B1A0(v1);
  if ( v0 != -1 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D8 + 24))(dword_106B31D8, -v0);
    if ( result )
      return Warning("Unable to mount extra content with appId: %i\n", v0);
  }
  return result;
}
