void __thiscall sub_1020A5E0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  BOOL v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // [esp-14h] [ebp-24h]

  v2 = *(_DWORD *)(this + 2052);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        v4 = sub_10206EC0((float *)this);
        if ( (unsigned __int8)sub_10209DD0(v4) )
        {
          v5 = *(_DWORD *)(this + 2052);
          if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != v5 >> 12 )
            v6 = 0;
          else
            v6 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          sub_101129A0((unsigned __int16 *)(v6 + 320), *(_WORD *)(v6 + 356) & 0xFFFB);
        }
        if ( *(_DWORD *)(dword_106C1BB4 + 48) )
        {
          v7 = *(_DWORD *)(this + 2052);
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != *(_DWORD *)(this + 2052) >> 12 )
            v8 = 0;
          else
            v8 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          v9 = v8 + 320;
          if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 2] != *(_DWORD *)(this + 2052) >> 12 )
            v10 = 0;
          else
            v10 = off_1061BE18[4 * (*(_DWORD *)(this + 2052) & 0xFFF) + 1];
          v11 = v10 + 320;
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
          sub_1011BB20(this + 580, v12, v13, 255, 0, 0, 1, 1.0);
        }
      }
    }
  }
  sub_102087C0((float *)this, (float *)(this + 1956), *(float *)(this + 108));
}
