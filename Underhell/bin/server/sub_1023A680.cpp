int __thiscall sub_1023A680(_BYTE *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edx

  v2 = CommandLine_Tier0();
  this[4] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "-makereslists", 0) != 0;
  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "closecaption");
  v4 = *(_DWORD *)dword_106B3204;
  dword_106C4E90 = v3;
  return (*(int (__thiscall **)(int))(v4 + 20))(dword_106B3204);
}
