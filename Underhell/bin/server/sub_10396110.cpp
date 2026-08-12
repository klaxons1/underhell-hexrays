int __thiscall sub_10396110(int this, int a2)
{
  int v2; // esi
  unsigned int v3; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // ecx
  char v8; // bl
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // esi
  double v15; // st7
  int v16; // esi
  double v17; // st6
  double v18; // st5

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 44);
  if ( v3 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v6 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v6 )
    {
      if ( *v5 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        if ( *(char **)(v7 + 92) == "env_fire" )
        {
          v8 = 1;
        }
        else
        {
          v8 = sub_100D6240((_DWORD *)v7, "env_fire");
          if ( !v8 )
          {
            v9 = *(_DWORD *)(a2 + 44);
            if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v9 >> 12 )
              v10 = 0;
            else
              v10 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
            if ( *(char **)(v10 + 92) != "entityflame" && !sub_100D6240((_DWORD *)v10, "entityflame") )
            {
              v11 = *(_DWORD *)(a2 + 44);
              if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v11 >> 12 )
                v12 = 0;
              else
                v12 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
              if ( *(char **)(v12 + 92) != "env_entity_igniter" && !sub_100D6240((_DWORD *)v12, "env_entity_igniter") )
                return sub_10093250((int *)this, this, v2);
            }
          }
        }
        v13 = *(_DWORD *)(a2 + 44);
        if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v13 >> 12 )
          v14 = 0;
        else
          v14 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
        if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
          sub_100DAE60(v14);
        sub_10078690(*(_DWORD *)(this + 2604), v14 + 580, 0.0, 0.0);
        sub_10023CB0((char *)this, 76);
        if ( v8 )
        {
          v15 = sub_100737B0(*(_DWORD *)(this + 1676));
          if ( *(_DWORD *)(a2 + 44) == -1
            || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != *(_DWORD *)(a2 + 44) >> 12 )
          {
            v16 = 0;
          }
          else
          {
            v16 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
          }
          if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
            sub_100DAE60(v16);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v17 = *(float *)(this + 584) - *(float *)(v16 + 584);
          v18 = *(float *)(this + 580) - *(float *)(v16 + 580);
          if ( (v15 * 0.5 + 12.0) * (v15 * 0.5 + 12.0) < v18 * v18 + v17 * v17 )
            return 0;
        }
        v2 = a2;
      }
    }
  }
  return sub_10093250((int *)this, this, v2);
}
