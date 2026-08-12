char __thiscall sub_10043B20(void *this, int a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1460))(this, 1048351);
  if ( v3 )
    return (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 1920))(this, v3, a2);
  DevMsg(2, "Attempting to find cover from best sound, but best sound not founc.\n");
  return 0;
}
