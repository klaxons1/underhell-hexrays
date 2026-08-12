int __thiscall sub_100DF1D0(_DWORD *this)
{
  int result; // eax

  *this = &CBaseEntity::`vftable';
  sub_101B54B0(this);
  sub_100E8620(this);
  byte_106C8000 = 0;
  sub_101C5BF0(this);
  sub_101C5EA0(this);
  sub_101C47B0(this);
  byte_106C8000 = 1;
  sub_1012E340(this[185]);
  sub_1010BB10(this + 194);
  sub_1010BB10(this + 170);
  sub_1010BB10(this + 164);
  sub_1010BB10(this + 158);
  sub_1010BB10(this + 152);
  sub_10110FE0(this + 80);
  sub_1018EC70(this + 66);
  if ( (int)this[68] >= 0 )
  {
    if ( this[66] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[66]);
      this[66] = 0;
    }
    this[67] = 0;
  }
  sub_102375F0(this + 41);
  sub_102375F0(this + 36);
  result = sub_102358E0(this + 3);
  *this = &IHandleEntity::`vftable';
  return result;
}
