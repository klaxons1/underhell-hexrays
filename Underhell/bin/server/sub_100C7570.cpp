int __thiscall sub_100C7570(volatile signed __int32 *this, int a2, float a3, char a4)
{
  int result; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // esi
  float *v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // edx
  float *v13; // edi
  float v14; // [esp+14h] [ebp+Ch]

  result = sub_100C4E40(this, a2);
  if ( result == -1 )
  {
    if ( LOBYTE(a3) )
      return sub_100C74B0(this, a2, a4);
  }
  else
  {
    v6 = *((_DWORD *)this + 280);
    v7 = 0.0;
    v8 = 76 * result;
    v9 = (float *)(v6 + 76 * result + 12);
    if ( *(_DWORD *)v9 != COERCE_INT(0.0) )
    {
      v10 = *(_DWORD *)(v6 + 76 * result + 72);
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 84) )
        {
          *(_BYTE *)(v10 + 88) |= 1u;
        }
        else
        {
          v11 = *(_DWORD **)(v10 + 24);
          if ( v11 )
          {
            *v11 |= 0x101u;
            v7 = 0.0;
            *(_WORD *)(sub_10153460(v11) + 2) = 0;
          }
        }
      }
      *v9 = v7;
    }
    v12 = *((_DWORD *)this + 280);
    v14 = v7;
    result = *(_DWORD *)(v12 + v8 + 16);
    v13 = (float *)(v12 + v8 + 16);
    if ( result != LODWORD(v14) )
    {
      result = *(_DWORD *)(v12 + v8 + 72);
      if ( result )
      {
        if ( *(_BYTE *)(result + 84) )
        {
          *(_BYTE *)(result + 88) |= 1u;
          *v13 = v7;
          *(float *)(*((_DWORD *)this + 280) + v8 + 64) = v7;
          return result;
        }
        result = *(_DWORD *)(result + 24);
        if ( result )
        {
          *(_DWORD *)result |= 0x101u;
          result = sub_10153460(result);
          v7 = 0.0;
          *(_WORD *)(result + 2) = 0;
        }
      }
      *v13 = v7;
    }
    *(float *)(*((_DWORD *)this + 280) + v8 + 64) = v7;
  }
  return result;
}
