void __thiscall sub_10360390(int this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  v3 = *(_DWORD *)(this + 4184);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 2] == v5 ? *v4 : 0;
        v7 = *(_DWORD *)(v6 + 424);
        if ( v7 )
        {
          if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 4) != 0 )
          {
            v8 = *(_DWORD *)(this + 4184);
            if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 2] != v8 >> 12 )
              v9 = 0;
            else
              v9 = off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 76))(v9, 0);
          }
        }
      }
    }
  }
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4176) )
    *(float *)(this + 4176) = 0.0;
  if ( *(_DWORD *)(this + 2380) == 1
    && *(_DWORD *)(this + 4184) != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 2] == *(_DWORD *)(this + 4184) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 4184) & 0xFFF) + 1]
    && *(_BYTE *)(this + 4288) == 1 )
  {
    sub_10039F40((int *)this, dword_106E7C5C);
  }
}
