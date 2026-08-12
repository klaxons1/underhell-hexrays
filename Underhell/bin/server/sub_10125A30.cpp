void __thiscall sub_10125A30(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  float *v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  float *v9; // eax
  double v10; // st4
  double v11; // st7
  double v12; // st4
  double v13; // st5
  float v14; // [esp+0h] [ebp-8h]

  v2 = *(_DWORD *)(this + 876);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
        if ( *v6 != *(float *)(this + 852) || v6[1] != *(float *)(this + 856) || v6[2] != *(float *)(this + 860) )
        {
          v7 = *(_DWORD *)(this + 876);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 876) & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = off_1061BE18[4 * (*(_DWORD *)(this + 876) & 0xFFF) + 1];
          v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
          *(float *)(this + 852) = *v9;
          *(float *)(this + 856) = v9[1];
          *(float *)(this + 860) = v9[2];
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v10 = *(float *)(this + 580) - *(float *)(this + 852);
          v11 = v10 * v10;
          v12 = *(float *)(this + 584) - *(float *)(this + 856);
          v13 = *(float *)(this + 588) - *(float *)(this + 860);
          v14 = v13 * v13 + v12 * v12 + v11;
          *(float *)(this + 864) = off_10689708(v14);
        }
      }
    }
  }
}
