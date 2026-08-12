char __thiscall sub_1014FBA0(void *this)
{
  _BYTE *v2; // eax

  v2 = (_BYTE *)sub_100422D0();
  if ( (v2[732] & 0x20) != 0 || sub_10042850(v2) )
    return 1;
  else
    return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 124))(this);
}
