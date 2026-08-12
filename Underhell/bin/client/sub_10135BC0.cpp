int __thiscall sub_10135BC0(int this)
{
  _BYTE v3[12]; // [esp+4h] [ebp-Ch] BYREF

  *(_DWORD *)(this + 120) = 0;
  *(_DWORD *)(this + 124) = 0;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 132) = 0;
  *(_DWORD *)(this + 136) = 0;
  *(_DWORD *)(this + 140) = 0;
  *(_BYTE *)(this + 440) = 0;
  *(_DWORD *)(this + 272) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "r_drawentities");
  *(_DWORD *)(this + 276) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "r_drawbrushmodels");
  (**(void (__thiscall ***)(void ***))off_103E773C[0])(off_103E773C[0]);
  ((void (__thiscall *)(void ***))(*off_103E9C2C)[1])(off_103E9C2C);
  sub_102334D0("debug/debugtranslucentsinglecolor", "Other textures", 1);
  sub_102334D0("engine/modulatesinglecolor", "Other textures", 1);
  sub_102334D0("engine/writez", "Other textures", 1);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v3);
  return sub_101EDFB0(v3, this + 296);
}
