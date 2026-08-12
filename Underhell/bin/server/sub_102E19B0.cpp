void __thiscall sub_102E19B0(int this)
{
  int v2; // eax
  int v3; // [esp+8h] [ebp-18h]
  int v4; // [esp+14h] [ebp-Ch]
  bool v5; // [esp+1Fh] [ebp-1h] BYREF

  if ( *(_BYTE *)(this + 3370) )
  {
    sub_1023C380((_DWORD *)this, (int)"HL2Player.UseDeny", 0.0, 0);
    return;
  }
  if ( *(_BYTE *)(this + 2138) && *(_BYTE *)(this + 2140) )
  {
    v5 = *(_BYTE *)(this + 3369) == 0;
    sub_101E9D40((_BYTE *)(this + 3369), &v5);
    sub_1042CBA0("r_flashlightscissor");
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v4 + 8))(v4, "0");
    if ( *(_BYTE *)(this + 3369) )
    {
      if ( *(int *)(this + 5044) <= 0 && *(float *)(this + 5128) <= 10.0 )
      {
        sub_1023C380((_DWORD *)this, (int)"HL2Player.UseDeny", 0.0, 0);
        v5 = 0;
        sub_101E9D40((_BYTE *)(this + 3369), &v5);
        return;
      }
      sub_100EAB80((_DWORD *)this, 1024);
      sub_1023C380((_DWORD *)this, (int)"Player.nvon", 0.0, 0);
      v3 = 1;
    }
    else
    {
      sub_10035360((int *)this, 1024);
      sub_1023C380((_DWORD *)this, (int)"Player.nvoff", 0.0, 0);
      v3 = 0;
    }
    v2 = sub_100BF520(this, "NightVision");
    sub_100C1600(this, v2, v3);
  }
}
