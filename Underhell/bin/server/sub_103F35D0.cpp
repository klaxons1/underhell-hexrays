void __thiscall sub_103F35D0(int this, int a2)
{
  int v3; // edi
  const char *v4; // eax

  if ( !*(_BYTE *)(this + 2112) && !*(_BYTE *)(this + 2113) )
  {
    v3 = sub_100BDF40(this, "close");
    if ( v3 <= -1 )
    {
      v4 = sub_100D6390((_DWORD *)this);
      Msg("Prisoner pod %s: missing close sequence\n", v4);
      sub_100C1170(this, 0);
    }
    else
    {
      sub_10031B50(this, 0.0);
      sub_100BC090((float *)(this + 124), (float *)(dword_106B31C8 + 12));
      sub_100C3330(this, v3);
      sub_100C1A10(this);
      sub_1023C380((_DWORD *)this, (int)"d3_citadel.pod_close", 0.0, 0);
    }
  }
}
