int __thiscall sub_10179140(int this, int a2)
{
  const char *v3; // eax
  const char **v4; // edi
  const char *v5; // eax
  int result; // eax
  unsigned int *v7; // edi
  unsigned int v8; // esi
  int *v9; // ecx

  v3 = *(const char **)(this + 808);
  if ( !v3 )
    v3 = String;
  v4 = (const char **)(a2 + 8);
  *(_BYTE *)(this + 812) = *v3;
  if ( v4[4] == (const char *)2 )
  {
    v5 = *v4;
    if ( !*v4 )
      v5 = String;
  }
  else
  {
    v5 = sub_1010D460((int)v4);
  }
  *(_BYTE *)(this + 813) = *v5;
  if ( v4[4] != (const char *)2 )
  {
    a2 = 0;
    v4 = (const char **)&a2;
  }
  *(_DWORD *)(this + 808) = *v4;
  sub_100EC3F0((_DWORD *)this, (int)sub_10178DE0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  result = *(_DWORD *)(this + 248);
  v7 = (unsigned int *)(this + 248);
  v8 = result & 0xFFFFFFFE;
  if ( result != (result & 0xFFFFFFFE) )
  {
    result = (int)(v7 - 62);
    if ( *((_BYTE *)v7 - 164) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v7 = v8;
    }
    else
    {
      v9 = *(int **)(result + 24);
      if ( v9 )
        result = sub_100194B0(v9, 248);
      *v7 = v8;
    }
  }
  return result;
}
