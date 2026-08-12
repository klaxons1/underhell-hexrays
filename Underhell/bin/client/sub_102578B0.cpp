int __stdcall sub_102578B0(LPCWCH lpWideCharStr)
{
  CHAR MultiByteStr[512]; // [esp+0h] [ebp-200h] BYREF

  sub_102285E0(lpWideCharStr, MultiByteStr, 512);
  return (*(int (__thiscall **)(int, const char *, CHAR *))(*(_DWORD *)dword_1047CA80 + 12))(
           dword_1047CA80,
           "open",
           MultiByteStr);
}
