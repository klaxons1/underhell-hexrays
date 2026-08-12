unsigned int __thiscall sub_100E0780(int this)
{
  int v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int result; // eax
  int *v6; // edx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // eax

  sub_1012D820(this);
  v2 = *(_DWORD *)(this + 252);
  if ( (v2 & 0x1000000) != 0 )
  {
    ++*(_DWORD *)(this + 140);
    v3 = v2 & 0xFEFFFFFF;
    *(_DWORD *)(this + 252) = v3;
    if ( (v3 & 0x1000000) == 0 )
    {
      *(_DWORD *)(this + 252) = v3 | 0x1000000;
      sub_1012DAC0(this);
    }
  }
  byte_1069727A = *(_DWORD *)(dword_106B31C8 + 72) != 2;
  sub_100DCB50((void *)this, 0);
  byte_1069727A = 0;
  if ( (*(_DWORD *)(this + 256) & 0x20000000) != 0 )
  {
    if ( *(_BYTE *)(this + 112) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 112);
      }
      *(_BYTE *)(this + 112) = 0;
    }
    sub_100EAB80(this, 32);
    sub_100EA9A0(402653184);
  }
  result = *(_DWORD *)(this + 300);
  if ( result != -1 )
  {
    v6 = &off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1];
    v7 = result >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == *(_DWORD *)(this + 300) >> 12 )
    {
      if ( *v6 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v7 )
          v8 = *v6;
        else
          v8 = 0;
        v9 = *(_DWORD *)(v8 + 312);
        if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
          result = 0;
        else
          result = off_1061BE18[4 * (v9 & 0xFFF) + 1];
        if ( result )
        {
          while ( result != this )
          {
            v10 = *(_DWORD *)(result + 316);
            if ( v10 == -1 || off_1061BE18[4 * (v10 & 0xFFF) + 2] != v10 >> 12 )
              result = 0;
            else
              result = off_1061BE18[4 * (v10 & 0xFFF) + 1];
            if ( !result )
              goto LABEL_29;
          }
        }
        else
        {
LABEL_29:
          if ( result != this )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v7 )
              v11 = *v6;
            else
              v11 = 0;
            result = sub_1016B0D0(v11, this);
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(this + 24) )
    **(_DWORD **)(this + 24) |= 0x80u;
  return result;
}
