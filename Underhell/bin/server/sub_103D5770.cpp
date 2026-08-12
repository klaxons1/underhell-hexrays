void __thiscall sub_103D5770(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // edi
  int *v5; // ecx
  unsigned int v6; // esi
  int *v7; // eax
  unsigned int v8; // esi

  v3 = this[103];
  if ( v3 == -1 || (v5 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1], v5[1] != v3 >> 12) )
  {
    v4 = 0;
  }
  else
  {
    v4 = *v5;
    if ( *v5 )
    {
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 224))(v4, this);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
    }
  }
  if ( __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0) )
  {
    sub_102DAF50((int)this);
  }
  sub_1025FAC0((int)this);
  v6 = this[292];
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (v6 & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( v7[1] == v8 )
    {
      if ( *v7 )
      {
        if ( v7[1] == v8 )
          sub_103D3960(*v7);
        else
          sub_103D3960(0);
      }
    }
  }
}
