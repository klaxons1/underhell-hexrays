int (__cdecl *__thiscall sub_101FD280(int this))(const char *, _DWORD)
{
  int (__cdecl *result)(const char *, _DWORD); // eax

  sub_100E38F0((float *)this);
  result = (int (__cdecl *)(const char *, _DWORD))sub_10430090(&unk_106C0F6C);
  if ( result )
  {
    result = (int (__cdecl *)(const char *, _DWORD))result("GameUI011", 0);
    *(_DWORD *)(this + 808) = result;
  }
  return result;
}
