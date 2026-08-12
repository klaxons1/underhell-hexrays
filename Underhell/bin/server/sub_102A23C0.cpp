char __thiscall sub_102A23C0(int this)
{
  _DWORD *v2; // eax

  v2 = (_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4));
  if ( v2 && *v2 == 100011 )
    return 1;
  else
    return sub_1004B6B0((_BYTE *)this);
}
