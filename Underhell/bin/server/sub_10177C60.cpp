char __thiscall sub_10177C60(int this)
{
  int v2; // edx
  char result; // al
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int *v7; // ecx
  _BYTE v8[52]; // [esp+10h] [ebp-4Ch] BYREF
  float v9; // [esp+44h] [ebp-18h]
  float v10; // [esp+48h] [ebp-14h]
  int v11; // [esp+58h] [ebp-4h]

  if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, this) )
    return sub_1025FAC0(this);
  sub_100E0970(this, v2, 5, 0);
  sub_10112C00(this + 320, 2);
  sub_100E88A0((_DWORD *)this, 0);
  *(_DWORD *)(this + 252) |= 0x200000u;
  sub_100EBE30(this, 11);
  sub_10112D90((unsigned __int16 *)(this + 320), 1, 24.0);
  *(_DWORD *)(this + 196) = sub_10177A20;
  result = sub_101775B0(this);
  if ( result )
  {
    if ( *(_BYTE *)(this + 225) != 1 )
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 1;
    }
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      v4 = dword_106BAFEC;
      v5 = *(_DWORD *)(this + 424);
      if ( dword_106BAFEC )
      {
        if ( v5 )
        {
          sub_100CFA00(v8);
          sub_100CFD60(v8, v4, v5);
          v9 = 4545.4546;
          v10 = 4545.4546;
          v6 = (*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                 dword_106BAFF4,
                 v4,
                 v5,
                 0,
                 v8);
          *(_DWORD *)(this + 1228) = v6;
          result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 12))(v6, this);
        }
      }
    }
    v11 = 1683015930;
    if ( *(_DWORD *)(this + 771) != 1683015930 )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 771) = 1683015930;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          result = sub_100194B0(v7, 771);
        *(_DWORD *)(this + 771) = 1683015930;
      }
    }
  }
  return result;
}
