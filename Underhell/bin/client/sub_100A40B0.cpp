int __thiscall sub_100A40B0(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int result; // eax
  double v6; // st7
  double v7; // st6
  int v8; // eax
  float *v9; // esi
  int v10; // edi
  float v11; // [esp+0h] [ebp-6Ch]
  _BYTE v12[84]; // [esp+14h] [ebp-58h] BYREF
  _DWORD *v13; // [esp+68h] [ebp-4h]

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(v3 + 8);
  result = v3 + 4;
  v13 = this;
  if ( v4 != result )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v4 + 4);
    while ( 1 )
    {
      v6 = *(float *)(v2 + 8);
      v7 = *(float *)(v4 + 48) + v6;
      *(float *)(v4 + 48) = v7;
      if ( v7 < *(float *)(v4 + 44) )
      {
        v8 = v13[65];
        v9 = (float *)(v4 + 40);
        *(float *)(v4 + 36) = *(float *)(v4 + 40) * v6 + *(float *)(v4 + 36);
        v10 = v4 + 24;
        v11 = v6;
        (*(void (__stdcall **)(int, int, int, _DWORD, _BYTE *))(v8 + 20))(v4 + 12, v4 + 24, v4 + 40, LODWORD(v11), v12);
        if ( v12[54] )
        {
          *(float *)v10 = flt_10459240;
          *(_QWORD *)(v10 + 4) = qword_10459244;
          *v9 = 0.0;
        }
        v2 = a2;
      }
      else
      {
        sub_100EB9C0(v4);
      }
      v4 = *(_DWORD *)(v2 + 16);
      result = *(_DWORD *)(v2 + 4) + 4;
      if ( v4 == result )
        break;
      *(_DWORD *)(v2 + 16) = *(_DWORD *)(v4 + 4);
    }
  }
  return result;
}
