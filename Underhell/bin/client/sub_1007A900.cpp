int __thiscall sub_1007A900(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  result = this[16385];
  if ( result )
  {
    result = (result - (int)this - 4) >> 4;
    v3 = result | (this[4 * result + 2] << 12);
    while ( v3 != -1 )
    {
      v4 = (*(int (__thiscall **)(_DWORD *, int))(this[16389] + 4))(this + 16389, v3);
      if ( v4 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      }
      else
      {
        v5 = (*(int (__thiscall **)(_DWORD *, int))(this[16389] + 8))(this + 16389, v3);
        if ( v5 )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 32))(v5);
          if ( v6 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
        }
      }
      sub_1009C130(v3);
      result = this[16385];
      if ( result )
      {
        result = (result - (int)this - 4) >> 4;
        v3 = result | (this[4 * result + 2] << 12);
      }
      else
      {
        v3 = -1;
      }
    }
  }
  this[16395] = 0;
  this[16396] = 0;
  this[16397] = 0;
  this[16398] = -1;
  return result;
}
