void __thiscall sub_1017E050(unsigned int this, int a2)
{
  const char *v3; // eax
  float v4; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 810) )
  {
    v3 = sub_100D6390((_DWORD *)this);
    DevMsg("Math Counter %s ignoring DIVIDE because it is disabled\n", v3);
  }
  else if ( *(_DWORD *)(a2 + 24) != 1 || 0.0 == *(float *)(a2 + 8) )
  {
    DevMsg(1, "LEVEL DESIGN ERROR: Divide by zero in math_value\n");
    sub_1017D2B0(this, *(_DWORD *)a2, *(float *)(this + 812));
  }
  else
  {
    v4 = *(float *)(this + 812) / *(float *)(a2 + 8);
    sub_1017D2B0(this, *(_DWORD *)a2, v4);
  }
}
