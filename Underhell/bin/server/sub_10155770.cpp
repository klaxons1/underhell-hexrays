int sub_10155770()
{
  int result; // eax

  dword_106B3228 = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "ParticleEffectNames",
                     1024,
                     0,
                     0);
  dword_106B322C = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "EffectDispatch",
                     1024,
                     0,
                     0);
  dword_106B3230 = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "VguiScreen",
                     256,
                     0,
                     0);
  dword_106B3234 = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "Materials",
                     1024,
                     0,
                     0);
  dword_106B3238 = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "InfoPanel",
                     128,
                     0,
                     0);
  dword_106B323C = (*(int (__thiscall **)(int, const char *, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31DC + 4))(
                     dword_106B31DC,
                     "Scenes",
                     4096,
                     0,
                     0);
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_106B3234 + 32))(
    dword_106B3234,
    1,
    "debug/debugempty",
    -1,
    0);
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_106B3228 + 32))(
    dword_106B3228,
    1,
    "error",
    -1,
    0);
  sub_1015EEC0();
  result = dword_106B3230;
  dword_10627D14 = dword_106B3230;
  return result;
}
