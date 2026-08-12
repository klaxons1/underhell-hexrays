int __thiscall sub_100C5C50(float *this, int a2)
{
  double v2; // st7
  _DWORD *v4; // eax
  int result; // eax
  float v6; // [esp+Ch] [ebp+8h]
  float v7; // [esp+Ch] [ebp+8h]

  v2 = 0.0;
  *((_DWORD *)this + 18) = a2;
  *this = 0.0;
  if ( *((_DWORD *)this + 5) != COERCE_INT(0.0) )
  {
    if ( a2 )
    {
      if ( *(_BYTE *)(a2 + 84) )
      {
        *(_BYTE *)(a2 + 88) |= 1u;
      }
      else
      {
        v4 = *(_DWORD **)(a2 + 24);
        if ( v4 )
        {
          *v4 |= 0x101u;
          v2 = 0.0;
          *(_WORD *)(sub_10153460(v4) + 2) = 0;
        }
      }
    }
    this[5] = v2;
  }
  result = *((_DWORD *)this + 3);
  v6 = v2;
  if ( result != LODWORD(v6) )
  {
    result = *((_DWORD *)this + 18);
    if ( result )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        result = *(_DWORD *)(result + 24);
        if ( result )
        {
          *(_DWORD *)result |= 0x101u;
          result = sub_10153460(result);
          v2 = 0.0;
          *(_WORD *)(result + 2) = 0;
        }
      }
    }
    this[3] = v2;
  }
  v7 = v2;
  if ( *((_DWORD *)this + 4) != LODWORD(v7) )
  {
    result = *((_DWORD *)this + 18);
    if ( result )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        result = *(_DWORD *)(result + 24);
        if ( result )
        {
          *(_DWORD *)result |= 0x101u;
          result = sub_10153460(result);
          v2 = 0.0;
          *(_WORD *)(result + 2) = 0;
        }
      }
    }
    this[4] = v2;
  }
  *((_BYTE *)this + 4) = 0;
  this[13] = NAN;
  if ( *((_DWORD *)this + 2) )
  {
    result = *((_DWORD *)this + 18);
    if ( result )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        result = *(_DWORD *)(result + 24);
        if ( result )
        {
          *(_DWORD *)result |= 0x101u;
          result = sub_10153460(result);
          v2 = 0.0;
          *(_WORD *)(result + 2) = 0;
        }
      }
    }
    this[2] = 0.0;
  }
  this[14] = 0.0;
  if ( *((_DWORD *)this + 15) != 15 )
  {
    result = *((_DWORD *)this + 18);
    if ( result )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        result = *(_DWORD *)(result + 24);
        if ( result )
        {
          *(_DWORD *)result |= 0x101u;
          result = sub_10153460(result);
          v2 = 0.0;
          *(_WORD *)(result + 2) = 0;
        }
      }
    }
    *((_DWORD *)this + 15) = 15;
  }
  this[9] = 100.0;
  this[10] = v2;
  this[6] = 1.0;
  this[17] = *(float *)(dword_106B31C8 + 12);
  this[11] = v2;
  this[12] = v2;
  return result;
}
