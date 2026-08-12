char __thiscall sub_10231480(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *i; // esi
  const char *v5; // ebx
  const char *v6; // eax
  const char *v8; // [esp-Ch] [ebp-10h]

  if ( *(_BYTE *)(this + 836) )
  {
    if ( *(_BYTE *)(this + 828) )
    {
      *(_DWORD *)(this + 800) = -1;
      v3 = (_DWORD *)sub_10230400(this, 1);
      for ( i = v3; v3; i = v3 )
      {
        if ( sub_100697A0(i, 2, 1) )
        {
          v5 = *(const char **)(this + 92);
          if ( !v5 )
            v5 = String;
          v8 = sub_100D6390(i);
          v6 = sub_100D6390((_DWORD *)this);
          DevMsg(2, "%s (%s): StopSchedule called on NPC %s.\n", v5, v6, v8);
          sub_10044510((int)i, (int)"Stopping scripted schedule");
        }
        v3 = (_DWORD *)sub_10230400(this, 1);
      }
    }
    else
    {
      v3 = (_DWORD *)sub_10230400(this, (*(_DWORD *)(this + 248) & 0x400) != 0);
      if ( v3 )
        LOBYTE(v3) = sub_10230560((_DWORD *)this, v3);
    }
  }
  else
  {
    LOBYTE(v3) = DevMsg(2, "aiscripted_schedule - StopSchedule called, but schedule's never started.\n");
  }
  return (char)v3;
}
