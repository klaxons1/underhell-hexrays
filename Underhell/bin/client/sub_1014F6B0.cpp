char __thiscall sub_1014F6B0(int this, int ArgList)
{
  _BYTE *v3; // eax
  int v4; // esi
  char result; // al
  int v6; // edx

  v3 = (_BYTE *)sub_100B4090(&dword_1042FB78, "CHudMenu");
  v4 = (int)v3;
  if ( v3 && sub_100DDBC0(v3) )
    return sub_100DDC60(v4, ArgList);
  result = sub_100B68D0((int *)this);
  if ( result )
  {
    v6 = *(_DWORD *)this;
    *(float *)(this + 44) = *((float *)off_103DC81C + 3);
    return (*(int (__thiscall **)(int, int))(v6 + 88))(this, ArgList);
  }
  return result;
}
