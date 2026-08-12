unsigned int __thiscall sub_100E1460(unsigned int this)
{
  double v1; // st7
  int *v3; // ecx
  double v4; // st7
  unsigned int result; // eax
  char v6; // bl
  int *v7; // ecx
  float v8; // [esp+4h] [ebp-1Ch]
  float v9; // [esp+8h] [ebp-18h]
  float v10; // [esp+1Ch] [ebp-4h]

  v1 = *(float *)(dword_106B31C8 + 16);
  v10 = *(float *)(dword_106B31C8 + 16);
  if ( v1 > 0.1 )
  {
    v1 = 0.1;
    v10 = 0.1;
  }
  if ( *(_BYTE *)(this + 113) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
      {
        sub_100194B0(v3, 113);
        v1 = v10;
      }
    }
    *(_BYTE *)(this + 113) = 2;
  }
  v4 = v1 * 256.0;
  if ( v4 < 1.0 )
    v4 = 1.0;
  v9 = (float)(int)v4;
  v8 = (float)*(unsigned __int8 *)(this + 119);
  sub_10424B10(0.0, v8, v9);
  result = ((unsigned int)(int)v4 >> 16) | 0xC00;
  v6 = (int)0.0;
  if ( *(_BYTE *)(this + 119) != v6 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 119) = v6;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 116);
      *(_BYTE *)(this + 119) = v6;
    }
  }
  return result;
}
