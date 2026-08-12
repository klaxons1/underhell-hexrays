char __thiscall sub_100D1EB0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi
  int v5; // eax

  v2 = this[290];
  if ( !v2 || v2 == -1 )
    return 1;
  if ( this[280] != -1 && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == this[280] >> 12 )
  {
    v3 = off_1061BE18[4 * (this[280] & 0xFFF) + 1];
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 288))(v3);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
        {
          v5 = sub_101E7EA0(this[282]);
          if ( v5 )
            return *(_BYTE *)(v5 + 896);
        }
      }
    }
  }
  return 0;
}
