int __thiscall sub_1016B860(_DWORD *this)
{
  int result; // eax

  this[20] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/ar2_muzzle1.vmt",
               0);
  this[21] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/muzzleflash4.vmt",
               0);
  this[22] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/muzzleflash4.vmt",
               0);
  this[30] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/ar2_muzzle1b.vmt",
               0);
  this[31] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/ar2_muzzle2b.vmt",
               0);
  this[32] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/ar2_muzzle3b.vmt",
               0);
  this[33] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "sprites/ar2_muzzle4b.vmt",
               0);
  this[37] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "effects/combinemuzzle1.vmt",
               0);
  this[38] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "effects/combinemuzzle2.vmt",
               0);
  this[34] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "models/weapons/shell.mdl",
               0);
  this[35] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
               dword_1041315C,
               "models/weapons/rifleshell.mdl",
               0);
  result = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
             dword_1041315C,
             "models/weapons/shotgun_shell.mdl",
             0);
  this[36] = result;
  return result;
}
