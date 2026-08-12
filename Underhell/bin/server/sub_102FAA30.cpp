char *__thiscall sub_102FAA30(char *this)
{
  int v3; // [esp+8h] [ebp-8h] BYREF
  char v4; // [esp+Ch] [ebp-4h]

  sub_102FA8F0((int)this);
  *(_DWORD *)this = &CNPC_PlayerCompanion::`vftable';
  *((_DWORD *)this + 526) = &CNPC_PlayerCompanion::`vftable';
  *((_DWORD *)this + 905) = &CNPC_PlayerCompanion::`vftable';
  *((_DWORD *)this + 913) = &CNPC_PlayerCompanion::`vftable';
  *((_DWORD *)this + 1107) = 0;
  *((_DWORD *)this + 1108) = 0;
  *((_DWORD *)this + 1109) = 0;
  *((_DWORD *)this + 1110) = 0;
  *((_DWORD *)this + 1111) = 0;
  *((float *)this + 1113) = -1.0;
  sub_1004FB20((_DWORD *)this + 1114);
  v3 = 0;
  v4 = 0;
  sub_10057350((float *)this + 1127, (float *)&v3);
  sub_10060190(this + 4744, 0);
  sub_102F71E0((float *)this + 1237);
  sub_1029B3E0((_DWORD *)this + 1286);
  sub_1029E8E0((float *)this + 1316);
  sub_102A6A20((int)(this + 5312));
  sub_10050B00((float *)this + 1384);
  *((float *)this + 1407) = -1.0;
  *((_DWORD *)this + 1408) = -1;
  *((_DWORD *)this + 1409) = -1;
  *((_DWORD *)this + 1414) = -1;
  *((_DWORD *)this + 1411) = 0;
  *((_DWORD *)this + 1415) = 5;
  *((float *)this + 1417) = -1.0;
  *((float *)this + 1419) = 0.0;
  this[5672] = 0;
  sub_1039B850(this + 5680);
  return this;
}
