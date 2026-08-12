int __thiscall sub_100EAE20(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // esi
  int result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st6
  void (__stdcall *v8)(int, int, int, _DWORD, char *); // edx
  double v9; // st5
  long double v10; // st4
  double v11; // st4
  long double v12; // st5
  double v13; // st4
  long double v14; // st6
  float v15; // [esp+0h] [ebp-6Ch]
  char v16[44]; // [esp+14h] [ebp-58h] BYREF
  float v17; // [esp+40h] [ebp-2Ch]
  _DWORD *v18; // [esp+68h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(v2 + 8);
  result = v2 + 4;
  v18 = this;
  if ( v3 != result )
  {
    for ( *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 4); ; *(_DWORD *)(a2 + 16) = *(_DWORD *)(v3 + 4) )
    {
      v5 = *(float *)(a2 + 8);
      v6 = *(float *)(v3 + 52) - v5;
      *(float *)(v3 + 52) = v6;
      if ( v6 < 0.0 )
      {
        sub_100EB9C0(v3);
        goto LABEL_15;
      }
      v7 = *(float *)(v3 + 48) * v5;
      v8 = *(void (__stdcall **)(int, int, int, _DWORD, char *))(v18[65] + 20);
      *(float *)(v3 + 36) = v7 + *(float *)(v3 + 36);
      *(float *)(v3 + 40) = v7 + *(float *)(v3 + 40);
      *(float *)(v3 + 44) = v7 + *(float *)(v3 + 44);
      v15 = v5;
      v8(v3 + 12, v3 + 24, v3 + 48, LODWORD(v15), v16);
      if ( 0.0 == *(float *)(v3 + 48) || 1.0 != v17 )
        break;
LABEL_15:
      v3 = *(_DWORD *)(a2 + 16);
      result = *(_DWORD *)(a2 + 4) + 4;
      if ( v3 == result )
        return result;
    }
    v9 = (double)(unsigned __int16)(int)(*(float *)(v3 + 36) * 182.04445) * 0.0054931641;
    *(float *)(v3 + 36) = v9;
    if ( v9 >= 180.0 )
    {
      v10 = 0.5;
      if ( fabs(v9 - 270.0) > 0.5 )
      {
        v13 = v9 * 0.5;
        v12 = 0.5;
        *(float *)(v3 + 36) = v13 + 135.0;
        goto LABEL_13;
      }
    }
    else
    {
      v10 = 0.5;
      if ( fabs(v9 - 90.0) > 0.5 )
      {
        v11 = v9 * 0.5;
        v12 = 0.5;
        *(float *)(v3 + 36) = v11 + 46.0;
        goto LABEL_13;
      }
    }
    v12 = v10;
LABEL_13:
    v14 = 0.0054931641 * (double)(unsigned __int16)(int)(182.04445 * *(float *)(v3 + 40));
    *(float *)(v3 + 40) = v14;
    if ( fabs(v14) > v12 )
      *(float *)(v3 + 40) = v12 * *(float *)(v3 + 44);
    goto LABEL_15;
  }
  return result;
}
