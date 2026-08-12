void __thiscall sub_1017E1A0(unsigned int this, int a2)
{
  const char *v2; // eax
  double v3; // st7
  float v4; // [esp+0h] [ebp-4h]

  if ( *(_BYTE *)(this + 810) )
  {
    v2 = sub_100D6390((_DWORD *)this);
    DevMsg("Math Counter %s ignoring SUBTRACT because it is disabled\n", v2);
  }
  else
  {
    v3 = *(float *)(this + 812);
    if ( *(_DWORD *)(a2 + 24) == 1 )
      v4 = v3 - *(float *)(a2 + 8);
    else
      v4 = v3 - 0.0;
    sub_1017D2B0(this, *(_DWORD *)a2, v4);
  }
}
