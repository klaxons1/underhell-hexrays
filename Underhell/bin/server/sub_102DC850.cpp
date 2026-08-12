int __thiscall sub_102DC850(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // esi
  double v6; // st6
  double v7; // st5
  int v8; // [esp+Ch] [ebp+8h]

  result = sub_100D7680(a2);
  v8 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = 0;
    result = sub_1016BFB0(&dword_10690DF8);
    if ( result > 0 )
    {
      do
      {
        v5 = *(_DWORD *)(sub_1002A680(&dword_10690DF8) + 4 * v4);
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 1528))(v5, 0) )
        {
          if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
            sub_100DAE60(v5);
          if ( fabs(*(float *)(v5 + 588) - *(float *)(this + 588)) < 144.0 )
          {
            v6 = *(float *)(v5 + 584) - *(float *)(this + 584);
            v7 = *(float *)(v5 + 580) - *(float *)(this + 580);
            if ( v7 * v7 + v6 * v6 < 360000.0 )
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 1008))(v5, this, v8);
          }
        }
        ++v4;
        result = sub_1016BFB0(&dword_10690DF8);
      }
      while ( v4 < result );
    }
  }
  return result;
}
