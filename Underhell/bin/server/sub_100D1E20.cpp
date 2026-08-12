void __thiscall sub_100D1E20(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // esi

  if ( a2 >= 0 )
  {
    v3 = this[280];
    if ( v3 != -1 && off_1061BE18[4 * (this[280] & 0xFFF) + 2] == v3 >> 12 )
    {
      v4 = off_1061BE18[4 * (this[280] & 0xFFF) + 1];
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( v5 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
          {
            v6 = sub_101E7EA0(this[282]);
            if ( v6 )
            {
              (*(void (__thiscall **)(_DWORD *))(*this + 952))(this);
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 836))(v6, a2);
            }
          }
        }
      }
    }
  }
}
