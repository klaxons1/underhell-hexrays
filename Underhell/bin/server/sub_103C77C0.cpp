char __thiscall sub_103C77C0(int this, int *a2)
{
  char *v3; // eax
  _DWORD *v4; // eax
  const char *v5; // eax

  if ( a2[6] == 2 )
  {
    v3 = (char *)a2[2];
    if ( !v3 )
      v3 = (char *)String;
  }
  else
  {
    v3 = (char *)sub_1010D460((int)(a2 + 2));
  }
  v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, *a2, a2[1], 0);
  if ( v4 )
  {
    sub_100218B0((_DWORD *)this, (int)v4);
    *(_BYTE *)(this + 5760) = 1;
    return sub_100457E0((_DWORD *)this, 101);
  }
  else
  {
    if ( a2[6] == 2 )
    {
      if ( a2[2] )
        v5 = (const char *)a2[2];
      else
        v5 = String;
    }
    else
    {
      v5 = sub_1010D460((int)(a2 + 2));
    }
    return DevMsg(1, "Unable to extract bugbait from unknown entity %s!\n", v5);
  }
}
