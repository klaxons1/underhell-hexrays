_DWORD *__thiscall sub_1002D020(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edx
  bool v5; // zf
  void (__thiscall *v6)(_DWORD *); // edx
  _DWORD *result; // eax
  char v8; // cl

  sub_10043CE0();
  if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) )
  {
    v3 = sub_100B4010(a2);
    v4 = this[531];
    v5 = (this[59] & 0x8000000) == 0;
    this[888] = v3;
    this[891] = 0;
    this[890] = v4;
    if ( !v5 )
      sub_10029620(this, 1, (int)"      TaskFail -> %s\n");
  }
  v6 = *(void (__thiscall **)(_DWORD *))(*this + 2160);
  this[537] = a2;
  v6(this);
  result = (_DWORD *)sub_1007DB30(35);
  if ( result != (_DWORD *)-1 )
  {
    v8 = (char)result;
    if ( result != (_DWORD *)999999999 )
    {
      result = &this[((int)(result - 250000000) >> 5) + 548];
      *result |= 1 << (v8 & 0x1F);
    }
  }
  this[679] &= ~0x2000u;
  return result;
}
