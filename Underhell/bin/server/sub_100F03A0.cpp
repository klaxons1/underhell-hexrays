int __thiscall sub_100F03A0(int this, const char *a2, char a3, int a4, int a5, char a6, int a7, int a8)
{
  _DWORD *v9; // eax
  int result; // eax
  float v11[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( a2 && *a2 )
  {
    sub_100E8220((int)a2, a2);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, a2);
    sub_100EF280(this);
    sub_1025F360(this, &a3, &a6);
    v9 = sub_10001430((_DWORD *)this);
    sub_100BA7D0((int)v9, v11);
    sub_100DC4E0((float *)this, v11);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 800))(this);
    result = sub_100BF790(this);
    if ( result < 5 )
      return Warning("cycler_flex used on model %s without enough flexes.\n", a2);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    Warning(
      "cycler at %.0f %.0f %0.f missing modelname\n",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588));
    return sub_1025FAC0(this);
  }
  return result;
}
