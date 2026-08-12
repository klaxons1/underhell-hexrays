int __thiscall sub_103A07B0(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  double v8; // st7
  int *v9; // ecx
  float v10; // [esp+14h] [ebp-1Ch]
  float v11[3]; // [esp+24h] [ebp-Ch] BYREF
  float v12; // [esp+38h] [ebp+8h]

  if ( (*(_BYTE *)(a2 + 64) & 8) == 0 )
  {
    if ( *(_BYTE *)(this + 306) == 6 )
    {
      sub_1001EF40(v11, -400.0, 400.0);
      (*(void (__thiscall **)(_DWORD, _DWORD, float *))(**(_DWORD **)(this + 424) + 208))(
        *(_DWORD *)(this + 424),
        0,
        v11);
      *(float *)(this + 3740) = *(float *)(this + 3740) * 0.80000001;
      *(float *)(this + 3744) = *(float *)(this + 3744) * 0.80000001;
      *(float *)(this + 3748) = 0.80000001 * *(float *)(this + 3748);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 600))(this, a2);
    }
    sub_10023CB0((char *)this, 17);
  }
  if ( (*(_BYTE *)(a2 + 64) & 0x48) != 0 )
  {
    v3 = *(_DWORD *)(a2 + 44);
    if ( v3 != -1 )
    {
      v4 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v5 = v3 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 )
      {
        if ( *v4 )
        {
          v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 ? *v4 : 0;
          if ( *(_DWORD *)(v6 + 92) != *(_DWORD *)(this + 92) )
          {
            sub_100EC3F0((_DWORD *)this, (int)sub_103A0180, 0.0, 0);
            v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                    dword_106B31E4,
                    0.1,
                    0.5)
                + *(float *)(dword_106B31C8 + 12);
            sub_100EC4A0((int *)this, v10, 0);
            return 0;
          }
        }
      }
    }
    *(float *)(this + 3740) = 0.0;
    *(float *)(this + 3744) = 0.0;
    *(float *)(this + 3748) = 0.0;
    if ( *(_BYTE *)(this + 3829) )
      v8 = 0.1;
    else
      v8 = *(float *)(dword_106EA74C + 44);
    v12 = v8 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 3804) != LODWORD(v12) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 3804);
      }
      *(float *)(this + 3804) = v12;
    }
    sub_1039F290(this, 300.0);
  }
  return 0;
}
