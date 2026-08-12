void __thiscall sub_10233D80(int this)
{
  int v2; // eax
  float *v3; // edi
  int v4; // edx
  char *v5; // ebx
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // ebx
  float *v10; // eax
  int v11; // [esp+10h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  int v14; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+20h] [ebp-8h]
  float v16; // [esp+24h] [ebp-4h]

  if ( (*(_BYTE *)(this + 236) & 0x24) != 0 )
  {
    if ( *(_DWORD *)(this + 3632) )
    {
      v2 = *(_DWORD *)(this + 252);
      *(float *)&v14 = 5.0;
      v15 = 5.0;
      v16 = 5.0;
      *(float *)&v11 = -5.0;
      v12 = -5.0;
      v13 = -5.0;
      if ( (v2 & 0x800) != 0 )
        sub_100DAE60(this);
      v3 = (float *)(this + 580);
      sub_1011BB20(this + 580, (int)&v11, (int)&v14, 200, 100, 100, 0, 0.0);
    }
    else
    {
      *(float *)&v11 = 8.0;
      v12 = 8.0;
      v13 = 8.0;
      *(float *)&v14 = -8.0;
      v15 = -8.0;
      v16 = -8.0;
      sub_1011C000((float *)(this + 3620), (float *)&v14, (float *)&v11, 255, 0, 0, 1, 0.1);
      v4 = *(_DWORD *)(this + 252);
      *(float *)&v11 = 5.0;
      v12 = 5.0;
      v13 = 5.0;
      *(float *)&v14 = -5.0;
      v15 = -5.0;
      v16 = -5.0;
      if ( (v4 & 0x800) != 0 )
        sub_100DAE60(this);
      v3 = (float *)(this + 580);
      sub_1011BB20(this + 580, (int)&v14, (int)&v11, 255, 0, 0, 0, 0.0);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BC50((float *)(this + 580), (float *)(this + 3620), 255, 0, 0, 1, 0.0);
    }
    v5 = sub_100D8070((_DWORD *)this);
    if ( v5 )
    {
      if ( (*((_DWORD *)v5 + 63) & 0x800) != 0 )
        sub_100DAE60((int)v5);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BC50(v3, (float *)v5 + 145, 200, 100, 100, 1, 0.0);
    }
    v6 = *(_DWORD *)(this + 2420);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 2420) & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v10 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v9 + 504))(v9, &v11);
          sub_1011BC50(v3, v10, 0, 255, 0, 1, 0.0);
        }
      }
    }
  }
  sub_100DF330((float *)this);
}
