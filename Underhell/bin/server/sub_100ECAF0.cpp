char __thiscall sub_100ECAF0(void *this, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax

  if ( !a6 )
    return 0;
  v6 = sub_100D7680((int)this);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 1088))(v6) )
      return 0;
  }
  *(_BYTE *)(a2 + 40) = 0;
  return 1;
}
