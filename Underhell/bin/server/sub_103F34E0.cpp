void __thiscall sub_103F34E0(int this, int a2)
{
  int *v3; // ecx
  int v4; // ebx
  int *v5; // ecx
  const char *v6; // eax
  int v7; // [esp+14h] [ebp-8h]

  v7 = sub_100BDF40(this, "open");
  if ( v7 <= -1 )
  {
    v6 = sub_100D6390((_DWORD *)this);
    Msg("Prisoner pod %s: missing open sequence\n", v6);
    sub_100C1170(this, 0);
  }
  else
  {
    if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 904);
      }
      *(float *)(this + 904) = 0.0;
    }
    v4 = dword_106B31C8;
    if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 124);
      }
      *(float *)(this + 124) = *(float *)(v4 + 12);
    }
    sub_100C3330(this, v7);
    sub_100C1A10(this);
    sub_1023C380((_DWORD *)this, (int)"d3_citadel.pod_open", 0.0, 0);
  }
}
