float *__thiscall sub_10235D70(float *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  float v6[3]; // [esp+4h] [ebp-18h] BYREF
  int v7[3]; // [esp+10h] [ebp-Ch] BYREF

  v3 = (char **)(a2 + 8);
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
  sub_10264F10((int)v7, v4);
  sub_10422220(v7, v6);
  return sub_10235B40(this + 200, v6);
}
