int __stdcall sub_10074660(int a1)
{
  void (__thiscall **v1)(void *, const char *, int); // esi
  int v2; // eax
  void (__thiscall **v3)(void *, const char *, int); // esi
  int v4; // eax
  double ArgList; // [esp+8h] [ebp-10h]
  float ArgList_4; // [esp+Ch] [ebp-Ch]
  float v8; // [esp+14h] [ebp-4h]

  v8 = *((float *)off_103DC81C + 4);
  sub_1014D240();
  sub_1014CCE0(COERCE_UNSIGNED_INT64(v8), HIDWORD(COERCE_UNSIGNED_INT64(v8)));
  sub_100B3A60(a1);
  sub_1002E560((char *)&a1 + 3, 1, 0);
  sub_100D3290(v8);
  sub_1002B550();
  ArgList_4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 56))(dword_1041315C);
  sub_10248A20();
  sub_10248CA0(ArgList_4);
  v1 = *(void (__thiscall ***)(void *, const char *, int))off_103E0D18;
  v2 = sub_10076640("%d", (int)*((float *)off_103DC81C + 3));
  (*v1)(off_103E0D18, "(time_int)", v2);
  v3 = *(void (__thiscall ***)(void *, const char *, int))off_103E0D18;
  ArgList = *((float *)off_103DC81C + 3);
  v4 = sub_10076640("%.2f", SLOBYTE(ArgList));
  (*v3)(off_103E0D18, "(time_float)", v4);
  return sub_10150630();
}
