void __thiscall sub_103BABC0(int this, int a2)
{
  const char **v3; // ecx
  const char *v4; // eax

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_7:
      v4 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  if ( !v4 || !*v4 )
    goto LABEL_7;
LABEL_8:
  *(_DWORD *)(this + 3896) = v4;
  *(_DWORD *)(this + 2608) = -1;
  if ( !sub_100697A0((_DWORD *)this, 90, 0) && !sub_100697A0((_DWORD *)this, 91, 0) && *(float *)(this + 3868) >= 245.0 )
    sub_103BA5E0((void *)this);
}
