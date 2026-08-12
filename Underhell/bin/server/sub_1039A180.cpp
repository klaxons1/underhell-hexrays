int __thiscall sub_1039A180(unsigned int *this, int a2)
{
  int v3; // ebx
  unsigned int *v4; // esi
  const char *v5; // edi
  unsigned int v6; // edi
  unsigned int *v7; // eax
  int *v9; // ecx

  v3 = sub_10164670(this, a2);
  if ( *(_DWORD *)(dword_106B31C8 + 72) == 2 )
    sub_1005D2C0((int)(this + 1186), 0);
  v4 = this + 62;
  if ( (this[62] & 0x1000) != 0 )
  {
    v5 = (const char *)this[65];
    if ( !v5 )
      v5 = String;
    Warning("NPC %s using alternate collision! -- DISABLED\n", v5);
    v6 = *v4 & 0xFFFFEFFF;
    if ( *v4 != v6 )
    {
      v7 = v4 - 62;
      if ( *((_BYTE *)v4 - 164) )
      {
        *((_BYTE *)v7 + 88) |= 1u;
        *v4 = v6;
        return v3;
      }
      v9 = (int *)v7[6];
      if ( v9 )
        sub_100194B0(v9, 248);
      *v4 = v6;
    }
  }
  return v3;
}
