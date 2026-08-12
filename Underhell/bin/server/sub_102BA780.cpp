void __thiscall sub_102BA780(int this, float a2)
{
  int *v3; // ecx
  int *v4; // ecx
  int v5; // edi
  int *v6; // ecx
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  float v11; // [esp+0h] [ebp-10h]

  sub_1023C380((_DWORD *)this, (int)"AlyxEmp.Stop", 0.0, 0);
  if ( *(_DWORD *)(this + 824) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 824);
    }
    *(_DWORD *)(this + 824) = 0;
  }
  if ( *(_DWORD *)(this + 828) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 828);
    }
    *(float *)(this + 828) = a2;
  }
  v5 = dword_106B31C8;
  if ( *(_DWORD *)(this + 832) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 832);
    }
    *(float *)(this + 832) = *(float *)(v5 + 12);
  }
  v7 = *(_DWORD *)(this + 800);
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 800) & 0xFFF) + 2] == v9 )
          v10 = *v8;
        else
          v10 = 0;
        sub_1025FAC0(v10);
        *(_DWORD *)(this + 800) = -1;
      }
    }
  }
  if ( *(_BYTE *)(this + 820) )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    v11 = *(float *)(dword_106B31C8 + 12) + a2 + 1.0;
    sub_100EC4A0((int *)this, v11, 0);
  }
}
