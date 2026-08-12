unsigned int __thiscall sub_100D2770(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // esi

  result = *(_DWORD *)(this + 1120);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      v4 = *v3;
      if ( v4 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( result )
        {
          v5 = *(_DWORD *)(this + 1120);
          if ( v5 != -1
            && off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 2] == v5 >> 12
            && (v6 = off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1]) != 0 )
          {
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 288))(v6);
          }
          else
          {
            v7 = 0;
          }
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7);
          if ( (_BYTE)result )
          {
            result = sub_10275D10(*(_WORD *)(this + 1248));
            if ( *(_BYTE *)(result + 80) )
            {
              v8 = sub_100D1940((_DWORD *)this);
              v9 = v8;
              if ( v8 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
                return sub_101E96F0(v9);
              else
                return sub_101E96F0(0);
            }
          }
        }
      }
    }
  }
  return result;
}
