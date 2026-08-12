_DWORD *__thiscall sub_10027450(_DWORD *this, int *a2, int a3)
{
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // eax
  double v9; // st7
  float *v10; // edi
  float *v11; // esi
  int v12; // ecx
  int v13; // ecx
  _BYTE *v14; // eax
  int v15; // [esp-Ch] [ebp-ACh]
  _BYTE v16[48]; // [esp+4h] [ebp-9Ch] BYREF
  _BYTE v17[48]; // [esp+34h] [ebp-6Ch] BYREF
  _BYTE v18[48]; // [esp+64h] [ebp-3Ch] BYREF
  _DWORD *v19; // [esp+94h] [ebp-Ch]
  int v20; // [esp+98h] [ebp-8h]
  int v21; // [esp+9Ch] [ebp-4h]

  if ( !(unsigned __int8)sub_101BC880() )
    return 0;
  v5 = 0;
  CVProfile::EnterScope(g_VProfCurrentProfile, "C_BaseAnimating::RecordBones", 0, "Tools", 0, 4);
  v15 = (*(int (__thiscall **)(_DWORD *))(this[1] + 4))(this + 1);
  v6 = (*(int (__thiscall **)(_DWORD *))(this[1] + 8))(this + 1);
  sub_101F0B70(v6, v15, v17);
  v7 = (_DWORD *)sub_101B9A50();
  *v7 = *(_DWORD *)(*a2 + 156);
  v8 = *a2;
  v19 = v7;
  if ( *(int *)(v8 + 156) > 0 )
  {
    v9 = 0.0;
    v10 = (float *)(v7 + 1);
    v21 = 0;
    v20 = a3;
    v11 = (float *)(v7 + 387);
    do
    {
      v12 = v21 + *(_DWORD *)(v8 + 160);
      if ( (*(_DWORD *)(v12 + v8 + 160) & 0x7FF00) != 0 )
      {
        v13 = *(_DWORD *)(v12 + v8 + 4);
        if ( v13 == -1 )
          v14 = v17;
        else
          v14 = (_BYTE *)(a3 + 48 * v13);
        sub_101F0AB0(v14, v18);
        sub_101EDC00(v18, v20, v16);
        sub_101F0930(v16, v11 - 2, v10);
        v9 = 0.0;
      }
      else
      {
        *(v11 - 2) = v9;
        *(v11 - 1) = v9;
        *v11 = v9;
        v11[1] = 1.0;
        *v10 = v9;
        v10[1] = v9;
        v10[2] = v9;
      }
      v8 = *a2;
      v21 += 216;
      v20 += 48;
      ++v5;
      v10 += 3;
      v11 += 4;
    }
    while ( v5 < *(_DWORD *)(v8 + 156) );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v19;
}
