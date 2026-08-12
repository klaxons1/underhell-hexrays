void __thiscall sub_10239F80(int this, int a2)
{
  int v2; // edx
  int v3; // eax
  const char *v4; // edx
  float v5; // [esp+0h] [ebp-8h]

  if ( *(_BYTE *)(this + 912) )
  {
    sub_10239DF0(this);
    return;
  }
  if ( *(_BYTE *)(this + 913) )
  {
    if ( !*(_BYTE *)(this + 914) )
      return;
  }
  else if ( !*(_BYTE *)(this + 914) )
  {
    v2 = *(_DWORD *)(this + 880);
    if ( v2 || *(_DWORD *)(this + 916) )
    {
      v3 = *(_DWORD *)(this + 916);
      *(_DWORD *)(this + 896) = v3;
      *(_DWORD *)(this + 828) = v2;
      *(_DWORD *)(this + 824) = 0;
      *(_DWORD *)(this + 844) = v3;
      *(_DWORD *)(this + 840) = 0;
      v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v5, 0);
    }
    else
    {
      sub_102386F0(this, 4);
    }
    return;
  }
  v4 = *(const char **)(this + 920);
  if ( !v4 )
    v4 = String;
  sub_1023B860(v4);
}
