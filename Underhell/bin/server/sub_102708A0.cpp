void __thiscall sub_102708A0(int this, int a2)
{
  int v3; // edi
  const char *v4; // eax

  if ( !*(_BYTE *)(this + 2092) && !*(_BYTE *)(this + 2093) )
  {
    v3 = sub_100BDF40(this, "close");
    if ( v3 <= -1 )
    {
      v4 = sub_100D6390((_DWORD *)this);
      Msg("Choreo Generic Vehicle %s: missing close sequence\n", v4);
      sub_100C1170(this, 0);
    }
    else
    {
      sub_10031B50(this, 0.0);
      sub_100BC090((float *)(this + 124), (float *)(dword_106B31C8 + 12));
      sub_100C3330(this, v3);
      sub_100C1A10(this);
    }
  }
}
