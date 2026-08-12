void __thiscall sub_1040DF10(int this, char a2)
{
  int *v3; // ecx
  _BYTE v4[12]; // [esp+24h] [ebp-Ch] BYREF

  if ( a2 != *(_BYTE *)(this + 1400) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 1400);
    }
    *(_BYTE *)(this + 1400) = a2;
  }
  if ( *(_BYTE *)(this + 1400) )
  {
    sub_100BD6D0((void *)this, 1, (int)v4, 0, 0, 0);
    ((void (__thiscall *)(int (__stdcall ***)(char), _BYTE *, int, int, _DWORD))(*off_1061B7A0)[3])(
      off_1061B7A0,
      v4,
      1,
      1,
      0);
    sub_1023C380((_DWORD *)this, (int)"Weapon_StunStick.Activate", 0.0, 0);
  }
  else
  {
    sub_1023C380((_DWORD *)this, (int)"Weapon_StunStick.Deactivate", 0.0, 0);
  }
}
