int __thiscall sub_101470D0(int this, int a2)
{
  int v3; // edi
  unsigned int v4; // eax
  _DWORD *v5; // ecx
  unsigned int v6; // esi
  _DWORD *v7; // ecx
  double ArgList; // [esp+0h] [ebp-22Ch]
  char Buffer[512]; // [esp+2Ch] [ebp-200h] BYREF

  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 8))(*(_DWORD *)(this + 36));
  ArgList = *(float *)v3;
  sub_10429A00(Buffer, 0x200u, "Speed %.1f  T/S/B (%.0f/%.0f/%.1f)", SLOBYTE(ArgList));
  v4 = *(_DWORD *)(this + 4);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  sub_100D5DE0(v5, a2, (int)Buffer, 0.0, 255, 255, 255, 255);
  Msg("%s", Buffer);
  sub_10429A00(Buffer, 0x200u, "Gear: %d, RPM %4d", *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(this + 4);
  if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = (_DWORD *)off_1061BE18[4 * (v6 & 0xFFF) + 1];
  sub_100D5DE0(v7, a2 + 1, (int)Buffer, 0.0, 255, 255, 255, 255);
  Msg(" %s\n", Buffer);
  return a2 + 2;
}
