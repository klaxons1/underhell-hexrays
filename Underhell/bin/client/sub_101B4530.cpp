int __thiscall sub_101B4530(int this)
{
  _BYTE v3[4]; // [esp+8h] [ebp-4h] BYREF

  sub_1012CAB0((int)off_103E6EEC[0], "SquadMemberDied", (int)sub_101B4510);
  *(_DWORD *)(this + 305) = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(this + 44) + 228))(
                                         this + 44,
                                         v3);
  *(_DWORD *)(this + 310) = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(this + 44) + 228))(
                                         this + 44,
                                         v3);
  *(_DWORD *)(this + 315) = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(this + 44) + 228))(
                                         this + 44,
                                         v3);
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 0;
  *(_WORD *)(this + 328) = 1;
  *(_BYTE *)(this + 330) = 0;
  return sub_102366F0(0);
}
