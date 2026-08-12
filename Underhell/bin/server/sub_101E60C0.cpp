char __thiscall sub_101E60C0(unsigned int *this)
{
  int v2; // eax
  __int16 *v3; // esi
  int v4; // ebx
  __int16 **v5; // ecx
  __int16 *v6; // esi
  unsigned int v7; // esi
  int v8; // eax
  int v9; // eax
  __int16 *v11; // [esp+8h] [ebp-8h]
  _DWORD *v12; // [esp+Ch] [ebp-4h]

  v2 = sub_100CF460(this);
  v3 = (__int16 *)v2;
  v11 = 0;
  if ( v2 )
  {
    LOBYTE(v2) = sub_100D0E00((__int16 *)v2);
    if ( !(_BYTE)v2 )
    {
      v2 = sub_100D0CC0(v3);
      if ( !*(_BYTE *)(v2 + 80) )
      {
        v4 = 47;
        v12 = this + 524;
        do
        {
          if ( *v12 != -1 )
          {
            v5 = (__int16 **)&off_1061BE18[4 * (*v12 & 0xFFF) + 1];
            if ( off_1061BE18[4 * (*v12 & 0xFFF) + 2] == *v12 >> 12 )
            {
              v6 = *v5;
              if ( *v5 )
              {
                if ( *(_BYTE *)(sub_100D0CC0(*v5) + 80) )
                {
                  if ( !sub_100D0E00(v6) )
                  {
                    LOBYTE(v2) = (*(int (__thiscall **)(unsigned int *, __int16 *, _DWORD))(*this + 964))(this, v6, 0);
                    return v2;
                  }
                  v11 = v6;
                }
              }
            }
          }
          --v12;
          --v4;
        }
        while ( v4 >= 0 );
        if ( v11 )
        {
          LOBYTE(v2) = (*(int (__thiscall **)(unsigned int *, __int16 *, _DWORD))(*this + 964))(this, v11, 0);
        }
        else
        {
          v7 = *this;
          v8 = sub_100CF460(this);
          (*(void (__thiscall **)(unsigned int *, int))(v7 + 1236))(this, v8);
          v9 = sub_100CF460(this);
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 996))(v9, 0);
          LOBYTE(v2) = sub_100CD300(this, 0);
        }
      }
    }
  }
  return v2;
}
