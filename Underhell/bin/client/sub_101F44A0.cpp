char __thiscall sub_101F44A0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // edi
  int v6; // eax
  int v7; // [esp-4h] [ebp-Ch]

  v4 = this + 267;
  if ( (unsigned __int16)sub_102356B0(this + 267) == 0xFFFF )
    return 0;
  v7 = this[271];
  v6 = sub_102356B0(v4);
  sub_10235460(a2, a3, v6, v7);
  return 1;
}
