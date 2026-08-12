unsigned int __thiscall sub_10353C20(int this)
{
  unsigned int result; // eax
  int *v3; // ecx
  int v4; // ecx
  double v5; // st7
  double v6; // st6
  double v7; // st5
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  float v10; // edi

  result = *(_DWORD *)(this + 4228);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 4228) & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        if ( v3[1] == result )
          v4 = *v3;
        else
          v4 = 0;
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
        v5 = *(float *)result;
        v6 = *(float *)(result + 4);
        v7 = *(float *)(result + 8) + 128.0;
LABEL_17:
        *(float *)(this + 3620) = v5;
        *(float *)(this + 3624) = v6;
        *(float *)(this + 3628) = v7;
        return result;
      }
    }
  }
  v8 = *(_DWORD *)(this + 4092);
  if ( v8 != -1 )
  {
    result = (unsigned int)&off_1061BE18[4 * (*(_DWORD *)(this + 4092) & 0xFFF) + 1];
    v9 = v8 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 4092) & 0xFFF) + 2] == v9 )
    {
      if ( *(_DWORD *)result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 4092) & 0xFFF) + 2] == v9 )
          v10 = *(float *)result;
        else
          v10 = 0.0;
        if ( (*(_DWORD *)(LODWORD(v10) + 252) & 0x800) != 0 )
          result = sub_100DAE60(SLODWORD(v10));
        v5 = *(float *)(LODWORD(v10) + 580);
        v6 = *(float *)(LODWORD(v10) + 584);
        v7 = *(float *)(LODWORD(v10) + 588) + 512.0;
        goto LABEL_17;
      }
    }
  }
  return result;
}
