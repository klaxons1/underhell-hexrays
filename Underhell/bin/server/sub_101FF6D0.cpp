int __thiscall sub_101FF6D0(_DWORD *this, int a2)
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
  this[207] = v4;
  return sub_101FF580((int)this);
}
