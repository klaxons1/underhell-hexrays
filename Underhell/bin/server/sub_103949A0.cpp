char *__thiscall sub_103949A0(_BYTE *this, int a2)
{
  const char **v3; // ecx
  const char *v4; // eax
  int v5; // eax

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = String;
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  v5 = (*(int (__thiscall **)(_BYTE *, const char *, _DWORD))(*(_DWORD *)this + 2000))(this, v4, 0);
  this[5420] = 0;
  return sub_10394910((int)this, v5, 0);
}
