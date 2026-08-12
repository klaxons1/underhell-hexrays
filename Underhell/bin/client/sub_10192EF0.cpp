_DWORD *__cdecl sub_10192EF0(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v5; // [esp+4h] [ebp-4h] BYREF

  v2 = sub_10034900(0x4B8u);
  v3 = v2;
  if ( !v2 )
    return 0;
  sub_1003D000((int)v2);
  *v3 = &C_InfoTeleporterCountdown::`vftable';
  v3[1] = &C_InfoTeleporterCountdown::`vftable';
  v3[2] = &C_InfoTeleporterCountdown::`vftable';
  v3[3] = &C_InfoTeleporterCountdown::`vftable';
  v5 = v3;
  sub_10192E00((int)&dword_103EADC0, &v5);
  (*(void (__thiscall **)(_DWORD *, int, int))(*v3 + 160))(v3, a1, a2);
  return v3 + 2;
}
