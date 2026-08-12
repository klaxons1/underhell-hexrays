int sub_10073770()
{
  int v0; // eax
  int result; // eax

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 136))(dword_10412D50);
  sub_1014F430(dword_10413188, v0);
  word_10412D40 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/zerogxplode.vmt");
  word_10412D38 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/WXplo1.vmt");
  word_10412D3C = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/steam1.vmt");
  word_10412D34 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/bubble.vmt");
  word_10412D2C = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/bloodspray.vmt");
  word_10412D30 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
                    dword_10413178,
                    "sprites/blood.vmt");
  word_10412D48 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, off_103DC690);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_10413178 + 8))(
             dword_10413178,
             "sprites/laserdot.vmt");
  word_10412D44 = result;
  return result;
}
