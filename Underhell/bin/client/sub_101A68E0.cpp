int __thiscall sub_101A68E0(void *this)
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int result; // eax

  sub_100827D0((int)this);
  v1 = dword_1047CA7C;
  v2 = *(_DWORD *)dword_1047CA7C;
  v3 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
         dword_1041317C,
         2,
         "resource/CombinePanelScheme.res",
         "CombineScheme");
  result = (*(int (__thiscall **)(int, int))(v2 + 48))(v1, v3);
  dword_1044C2C0 = result;
  if ( !result )
    return Warning("Couldn't load combine panel scheme!\n");
  return result;
}
