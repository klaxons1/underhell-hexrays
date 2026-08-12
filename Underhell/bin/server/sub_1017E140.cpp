void __thiscall sub_1017E140(unsigned int this, int a2)
{
  const char *v2; // eax

  if ( *(_BYTE *)(this + 810) )
  {
    v2 = sub_100D6390((_DWORD *)this);
    DevMsg("Math Counter %s ignoring SETVALUE because it is disabled\n", v2);
  }
  else if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    sub_1017D2B0(this, *(_DWORD *)a2, *(float *)(a2 + 8));
  }
  else
  {
    sub_1017D2B0(this, *(_DWORD *)a2, 0.0);
  }
}
