int __thiscall sub_103C0280(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  char *v5; // eax
  double v6; // st7
  double ArgList; // [esp+0h] [ebp-220h]
  float v8; // [esp+10h] [ebp-210h]
  char Buffer[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_1003B900((int *)this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_DWORD *)(this + 424) )
    {
      v4 = *(_DWORD *)(this + 424);
      v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4);
      v5 = sub_10215420(v8);
      v6 = ((double (__thiscall *)(int, char *))*(_DWORD *)(*(_DWORD *)v4 + 116))(v4, v5);
      ArgList = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)v4 + 116))(
                  v4,
                  COERCE_UNSIGNED_INT64(v6 * 2.2),
                  HIDWORD(COERCE_UNSIGNED_INT64(v6 * 2.2)));
      sub_10429A00(Buffer, 0x200u, "Mass: %.2f kg / %.2f lb (%s)", SLOBYTE(ArgList));
      sub_100D5DE0((_DWORD *)this, v3, (int)Buffer, 0.0, 255, 255, 255, 255);
      return v3 + 1;
    }
  }
  return result;
}
