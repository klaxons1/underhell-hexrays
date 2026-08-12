char __thiscall sub_10209220(int *this)
{
  unsigned __int16 *v2; // ebx
  int *v3; // edi
  int i; // esi
  unsigned int v5; // eax
  int v6; // ecx

  v2 = (unsigned __int16 *)(this + 80);
  if ( !(*(int (__thiscall **)(int *))(this[80] + 44))(this + 80)
    || ((*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)v2 + 48))(v2) & 4) != 0 && (this[62] & 0x80) != 0 )
  {
    return 1;
  }
  sub_10206610(this);
  v3 = this + 388;
  if ( !this[388] )
  {
    sub_100EA370((float *)this);
    return 1;
  }
  if ( ((*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)v2 + 48))(v2) & 4) != 0 )
  {
    for ( i = 0; i < *v3; ++i )
    {
      v5 = *(_DWORD *)(sub_101BCB30(v3, i) + 4);
      if ( v5 != -1 && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12 )
      {
        v6 = off_1061BE18[4 * (v5 & 0xFFF) + 1];
        if ( v6 )
          sub_101129A0((unsigned __int16 *)(v6 + 320), *(_WORD *)(v6 + 356) | 4);
      }
    }
  }
  sub_101129A0(v2, v2[18] | 4);
  sub_101129A0(v2, v2[18] | 3);
  return 1;
}
