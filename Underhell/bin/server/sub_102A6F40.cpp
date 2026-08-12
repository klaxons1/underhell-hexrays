void __thiscall sub_102A6F40(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  char v6; // al
  int v7; // ebx
  double v8; // st4
  double v9; // st7
  double v10; // st4
  double v11; // st5
  double v12; // st7
  int v13; // esi
  bool v14; // [esp+7h] [ebp-1h]

  sub_1029EC10(this);
  sub_10023E00(*(char **)(this + 4), 23);
  if ( !*(_DWORD *)(this + 16) )
  {
    if ( sub_102A6CD0((_DWORD **)this) && sub_102A6C00(this) )
      sub_10023CB0(*(char **)(this + 4), 21);
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
    v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100011);
    sub_10023E00(*(char **)(this + 4), v3);
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v4 = sub_10261B20();
      if ( v4 )
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) == v4 )
        {
          v5 = *(_DWORD *)(this + 68) == -1
            || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != *(_DWORD *)(this + 68) >> 12
             ? 0
             : off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1096))(v4) == v5 )
          {
            v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 876))(v4, *(_DWORD *)(this + 4));
            v7 = *(_DWORD *)(this + 4);
            v14 = v6 == 0;
            if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
              sub_100DAE60(v7);
            if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
              sub_100DAE60(v4);
            v8 = *(float *)(v4 + 580) - *(float *)(v7 + 580);
            v9 = v8 * v8;
            v10 = *(float *)(v4 + 584) - *(float *)(v7 + 584);
            v11 = *(float *)(v4 + 588) - *(float *)(v7 + 588);
            v12 = v11 * v11 + v10 * v10 + v9;
            if ( v14 )
            {
              if ( v12 < 62500.0 )
                sub_1004C1E0((char **)this, 100011);
            }
            else if ( v12 < 16384.0 )
            {
              sub_1004C1E0((char **)this, 23);
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 16) == 2 )
  {
    v13 = *(_DWORD *)(this + 4);
    if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(v13 + 1672) )
      sub_10023CB0((char *)v13, 23);
  }
}
