char __thiscall sub_1007FAD0(int this, int a2)
{
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  _BYTE v12[12]; // [esp+8h] [ebp-60h] BYREF
  _BYTE v13[32]; // [esp+14h] [ebp-54h] BYREF
  float v14; // [esp+34h] [ebp-34h]
  float v15[3]; // [esp+5Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a2 + 28);
  if ( v3 )
    v4 = sub_100D7680(v3);
  else
    v4 = 0;
  if ( !*(_BYTE *)(this + 95)
    || ((v5 = *(_DWORD *)(this + 96), v5 == -1) || off_1061BE18[4 * (*(_DWORD *)(this + 96) & 0xFFF) + 2] != v5 >> 12
      ? (v6 = 0)
      : (v6 = off_1061BE18[4 * (*(_DWORD *)(this + 96) & 0xFFF) + 1]),
        v4 != v6) )
  {
    if ( v4 )
    {
      if ( *(_DWORD *)(this + 96) == -1
        || off_1061BE18[4 * (*(_DWORD *)(this + 96) & 0xFFF) + 2] != *(_DWORD *)(this + 96) >> 12 )
      {
        v7 = 0;
      }
      else
      {
        v7 = off_1061BE18[4 * (*(_DWORD *)(this + 96) & 0xFFF) + 1];
      }
      if ( v7 == v4 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 108) <= -0.001 )
      {
        if ( (unsigned __int8)sub_1012B040(v4) && !sub_1001ED60((float *)(this + 100)) )
        {
          *(_BYTE *)(this + 95) = 1;
          return *(_BYTE *)(this + 95);
        }
      }
      else
      {
        *(_BYTE *)(this + 95) = 1;
        *(_DWORD *)(this + 96) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        v9 = dword_106B31C8;
        *(float *)(this + 100) = *(float *)(this + 104) + *(float *)(dword_106B31C8 + 12);
        *(float *)(this + 108) = *(float *)(this + 112) + *(float *)(v9 + 12);
        v10 = *(_DWORD *)(this + 4);
        if ( sub_101C5260(v4) == v10 )
        {
          if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
            sub_100DAE60(v4);
          v11 = *(_DWORD *)(v4 + 252);
          v15[0] = *(float *)(v4 + 580);
          v15[1] = *(float *)(v4 + 584);
          v15[2] = *(float *)(v4 + 588) + 2.0;
          if ( (v11 & 0x800) != 0 )
            sub_100DAE60(v4);
          sub_10079FE0(*(_DWORD *)(v4 + 2600), v4, (float *)(v4 + 580), v15, 33701899, (int)v12);
          if ( 1.0 == v14 )
            sub_1025F370(v4, v13, 1);
        }
      }
    }
  }
  return *(_BYTE *)(this + 95);
}
