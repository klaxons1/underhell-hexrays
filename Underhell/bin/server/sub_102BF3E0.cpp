int __thiscall sub_102BF3E0(int this)
{
  const char *v2; // eax
  int v4; // edx
  float v5; // [esp+10h] [ebp-Ch]

  v2 = *(const char **)(this + 808);
  if ( !v2 )
    v2 = String;
  if ( (int)strlen(v2) >= 1 )
  {
    sub_10112C00(this + 320, 0);
    sub_100E0970(this, v4, 0, 0);
    sub_100EC3F0((_DWORD *)this, (int)sub_102BF210, 0.0, 0);
    sub_100EC4A0((int *)this, -1.0, 0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
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
      "'speaker' entity with no Level/Sentence! at: %f, %f, %f\n",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588));
    v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v5, 0);
    return sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
  }
}
