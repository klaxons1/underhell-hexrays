char __thiscall sub_1013E210(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v3)(int, const char *, char *, _DWORD); // edx
  char v6; // [esp+Bh] [ebp-1h] BYREF

  v3 = *(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44);
  v6 = 0;
  this[1] = v3(a2, "$AAInternal1", &v6, 0);
  this[2] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$AAInternal3", &v6, 0);
  this[4] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$AAInternal2", &v6, 0);
  this[3] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(a2, "$bloomEnable", &v6, 0);
  this[5] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
              a2,
              "$colCorrectEnable",
              &v6,
              0);
  this[6] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
              a2,
              "$colCorrect_NumLookups",
              &v6,
              0);
  this[7] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
              a2,
              "$colCorrect_DefaultWeight",
              &v6,
              0);
  this[8] = (*(int (__thiscall **)(int, const char *, char *, _DWORD))(*(_DWORD *)a2 + 44))(
              a2,
              "$colCorrect_LookupWeights",
              &v6,
              0);
  return 1;
}
