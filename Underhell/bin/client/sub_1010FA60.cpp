int __thiscall sub_1010FA60(_DWORD *this)
{
  unsigned int v2; // eax
  char *v3; // ecx
  _DWORD *v4; // edi
  int v5; // esi
  char v7; // [esp+Bh] [ebp-1h] BYREF

  v2 = this[681];
  if ( v2 != -1 )
  {
    v3 = (char *)off_103DCD74 + 16 * (this[681] & 0xFFF) + 4;
    if ( *((_DWORD *)v3 + 1) == v2 >> 12 )
    {
      v4 = *(_DWORD **)v3;
      if ( *(_DWORD *)v3 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(v4[1] + 36))(v4 + 1) )
        {
          v5 = (*(int (__thiscall **)(_DWORD *))(v4[1] + 36))(v4 + 1);
          if ( v5 == (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
          {
            sub_1002E560(&v7, 1, 0);
            sub_1002A9C0(v4, this);
            sub_1002B550();
          }
        }
      }
    }
  }
  return sub_1003BCD0(this);
}
