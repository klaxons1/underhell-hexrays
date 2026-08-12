char __thiscall sub_10335C10(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // ecx
  __int64 v8; // [esp-4h] [ebp-20h]
  int v9; // [esp+14h] [ebp-8h] BYREF
  char v10; // [esp+18h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v5 = sub_10050FC0(this + 1127);
    v6 = this + 1127;
    if ( v5 != a2 )
    {
      sub_100577F0((int)v6, 0, 0);
      v9 = 0;
      v10 = 0;
      sub_10057630((int)(this + 1127), &v9);
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 1544))(this, &flt_10689730);
      this[1121] = 0;
      *((_WORD *)this + 2246) = 0;
      sub_100577F0((int)(this + 1127), a2, 0);
      v9 = 0;
      v10 = 0;
      sub_10057630((int)(this + 1127), &v9);
      sub_10335B60(this, (int)"TLK_STARTFOLLOW", 0);
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80(this + 1459, v8, 0.0);
      return 1;
    }
    if ( sub_10050FC0(v6) == a2 )
    {
      sub_100577F0((int)(this + 1127), 0, 0);
      sub_10335B60(this, (int)"TLK_STOPFOLLOW", 0);
    }
  }
  return 1;
}
