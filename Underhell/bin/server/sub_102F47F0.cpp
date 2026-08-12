char __thiscall sub_102F47F0(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // ebx
  float v7; // [esp+0h] [ebp-Ch]

  if ( a2 == 2 && sub_103942C0(this) == 1 )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2176))(this);
  v3 = sub_100CF460((_DWORD *)this);
  if ( v3 )
  {
    if ( !a2 && sub_103942C0(this) > 0 )
    {
      v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100B8D50((float *)(this + 2760), v7);
    }
    LOBYTE(v3) = sub_100C5050((_DWORD *)this);
    if ( !(_BYTE)v3 )
    {
      if ( *(_DWORD *)(dword_106E2854 + 48) )
      {
        LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)this + 2168))(this);
        if ( !(_BYTE)v3 )
        {
          v4 = 0;
          while ( 1 )
          {
            if ( *(_DWORD *)(this + 2380) == dword_1066A0E8[v4] )
            {
              v3 = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 936))(this, dword_1066A0EC[v4], 0);
              if ( v3 != -1 && v3 != dword_1066A0EC[v4] )
              {
                v5 = sub_103981B0(v3);
                LOBYTE(v3) = a2;
                if ( a2 == dword_1066A0E0[v4] )
                {
                  v3 = sub_103942C0(this);
                  if ( v3 == dword_1066A0E4[v4] )
                    break;
                }
              }
            }
            v4 += 4;
            if ( v4 >= 16 )
              return v3;
          }
          LOBYTE(v3) = sub_100C7570((volatile signed __int32 *)this, v5, COERCE_FLOAT(1), 1);
        }
      }
    }
  }
  return v3;
}
