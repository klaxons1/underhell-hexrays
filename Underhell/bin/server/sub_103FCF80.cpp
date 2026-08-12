int __thiscall sub_103FCF80(int this)
{
  int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // eax
  float v6; // [esp+24h] [ebp-24h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 732))(this) )
  {
    if ( sub_101679A0((int)"super_phys_gun") >= 0 )
    {
      v3 = sub_101679A0((int)"super_phys_gun");
      sub_101678B0(v3, 1);
    }
    else
    {
      sub_1017B330("super_phys_gun", *(char **)(dword_106B31C8 + 60), 1);
    }
    if ( *(_BYTE *)(this + 1412) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 1412);
      }
      *(_BYTE *)(this + 1412) = 0;
    }
    sub_103FB4F0((_DWORD *)this);
    v5 = sub_1012BF20(&dword_1069E3E0, 0, "script_physcannon_upgrade", 0, 0, 0, 0);
    if ( v5 )
      (*(void (__thiscall **)(_DWORD *, const char *, int, int, _DWORD))(*v5 + 148))(v5, "Trigger", this, this, 0);
    sub_1023B860((_DWORD *)this, (int)"WeaponDissolve.Charge");
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_10685600);
  }
  else
  {
    v6 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC3F0((_DWORD *)this, (int)sub_103FCF80, v6, off_10685600);
  }
}
