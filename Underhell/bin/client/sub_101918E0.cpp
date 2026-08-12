int __thiscall sub_101918E0(_DWORD *this, int a2)
{
  int v4; // eax
  _DWORD *v5; // edi
  int v6; // ecx
  float *v7; // eax
  float *v8; // eax
  int v9; // ecx
  float v11[3]; // [esp+34h] [ebp-18h] BYREF
  float v12; // [esp+40h] [ebp-Ch]
  float v13; // [esp+44h] [ebp-8h]
  float v14; // [esp+48h] [ebp-4h]
  float v15; // [esp+54h] [ebp+8h]

  if ( !a2 )
  {
    v4 = sub_100DDA40(384);
    if ( v4 )
      v5 = (_DWORD *)sub_1017A770(v4, (int)"EnvStarfield");
    else
      v5 = 0;
    if ( v5 != (_DWORD *)this[296] )
    {
      if ( v5 )
        sub_100F2950(v5);
      v6 = this[296];
      if ( v6 )
        sub_100F2FF0(v6);
      this[296] = v5;
    }
    v15 = *(float *)(dword_10446D64 + 44);
    v7 = (float *)sub_101356F0();
    v12 = *v7 * v15;
    v13 = v7[1] * v15;
    v14 = v15 * v7[2];
    v8 = sub_101356D0();
    v9 = this[296];
    v11[0] = *v8 + v12;
    v11[1] = v8[1] + v13;
    v11[2] = v8[2] + v14;
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v9 + 72))(
      v9,
      v11,
      0,
      0.0,
      0.0,
      64.0,
      0.0,
      0.0,
      13,
      0);
    (*(void (__stdcall **)(_DWORD))(*(this - 2) + 408))(-1293.0);
  }
  return sub_1003CD40(this, a2);
}
