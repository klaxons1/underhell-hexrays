void __thiscall sub_1017C1F0(int this, float a2)
{
  const char *v2; // eax
  double v3; // st6
  double v4; // st7

  if ( *(_BYTE *)(this + 810) )
  {
    v2 = sub_100D6390((_DWORD *)this);
    DevMsg("Math Counter %s ignoring SETVALUENOFIRE because it is disabled\n", v2);
    return;
  }
  if ( *(_DWORD *)(LODWORD(a2) + 24) == 1 )
    v3 = *(float *)(LODWORD(a2) + 8);
  else
    v3 = 0.0;
  if ( 0.0 != *(float *)(this + 800) )
  {
    v4 = v3;
    goto LABEL_10;
  }
  v4 = v3;
  if ( *(float *)(this + 804) != 0.0 )
  {
LABEL_10:
    if ( v4 <= *(float *)(this + 804) )
    {
      if ( v4 < *(float *)(this + 800) )
        v4 = *(float *)(this + 800);
    }
    else
    {
      v4 = *(float *)(this + 804);
    }
  }
  a2 = v4;
  sub_1010C270((float *)(this + 812), 1, (__int16 *)&a2);
}
