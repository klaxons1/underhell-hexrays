int __thiscall sub_102318C0(int this, _DWORD *a2)
{
  if ( !*(_DWORD *)(this + 824) && !*(_DWORD *)(this + 820) )
    DevMsg(2, "aiscripted_schedule - no schedule or state has been set!\n");
  if ( *(_BYTE *)(this + 836) && (*(_BYTE *)(this + 248) & 4) == 0 )
    return DevMsg(2, "aiscripted_schedule - not playing schedule again: not flagged to repeat\n");
  if ( *a2 )
    *(_DWORD *)(this + 804) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  else
    *(_DWORD *)(this + 804) = -1;
  sub_100EC3F0((_DWORD *)this, (int)sub_10231780, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
