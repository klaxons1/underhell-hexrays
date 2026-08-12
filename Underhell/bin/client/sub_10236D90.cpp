void __thiscall sub_10236D90(void *this, unsigned __int16 a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  v3 = (_DWORD *)sub_10229D00(32);
  if ( v3 )
  {
    v4 = sub_1022B1A0(v3, (int)"KeyTyped", "unichar", a2);
    sub_10236860(this, v4);
  }
  else
  {
    sub_10236860(this, 0);
  }
}
