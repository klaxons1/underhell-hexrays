void __thiscall sub_103E2100(int this, int a2)
{
  char v3; // al
  int v4; // eax
  int v5; // esi
  void *v6; // eax

  v3 = 0;
  if ( (*(_BYTE *)(a2 + 36) & 1) != 0 )
  {
    if ( !*(_DWORD *)(this + 1788) )
      *(_DWORD *)(this + 1788) = 1;
    if ( *(int *)(this + 1800) > 0 )
    {
      sub_103E1D40(this, 0.33333334);
      sub_103E1180(this);
      if ( !*(_DWORD *)(this + 1800) )
      {
        sub_1023C380((_DWORD *)this, (int)"Airboat.FireGunRevDown", 0.0, 0);
LABEL_11:
        v4 = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
        v5 = v4;
        if ( v4 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
        {
          v6 = (void *)__RTDynamicCast(
                         v5,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CBasePlayer `RTTI Type Descriptor',
                         0);
          if ( v6 )
            sub_101E3110(v6, 0xAu, 0, 1u);
        }
      }
    }
  }
  else if ( *(_DWORD *)(this + 1788) )
  {
    if ( *(_DWORD *)(this + 1800) )
    {
      sub_1023C380((_DWORD *)this, (int)"Airboat.FireGunRevDown", 0.0, 0);
      v3 = 1;
    }
    *(_DWORD *)(this + 1788) = 0;
    if ( v3 )
      goto LABEL_11;
  }
}
