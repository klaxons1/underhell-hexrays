int __thiscall sub_10254CC0(float *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  int result; // eax
  int v6[2]; // [esp+4h] [ebp-8h] BYREF

  this[215] = sub_10254BD0(this);
  v3 = (char **)(a2 + 8);
  this[216] = *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  result = sub_10264E70((int)v6, 2, v4);
  this[212] = *(float *)v6;
  this[214] = *(float *)&v6[1];
  return result;
}
