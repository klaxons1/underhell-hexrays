int __usercall sub_1009A950@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // edi
  int (__thiscall *v8)(_DWORD, int); // eax
  int v9; // edi
  int v10; // ebx
  double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  double v15; // st6
  float *v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // edx
  int v20; // eax
  int v21; // edi
  _DWORD v22[2]; // [esp+4h] [ebp-40h] BYREF
  int v23; // [esp+Ch] [ebp-38h]
  int v24; // [esp+34h] [ebp-10h]
  int v25; // [esp+38h] [ebp-Ch]
  int v26; // [esp+40h] [ebp-4h]

  sub_102334D0("detail/detailsprites", "Other textures", 1);
  sub_102334D0("debug/debugspritewireframe", "Other textures", 1);
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 152))(dword_1041315C, 1685090928) < 4 )
    return Warning("Map uses old detail prop file format.. ignoring detail props\n");
  v5 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1041315C + 156))(dword_1041315C, 1685090928, a3, a2);
  v6 = 0;
  v7 = v5;
  v24 = 0;
  v25 = 0;
  if ( v5 > 0 )
  {
    v8 = *(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4);
    v25 = v7;
    v24 = v8(g_pMemAlloc, v7);
    v6 = v24;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1041315C + 160))(
         dword_1041315C,
         1685090928,
         v6,
         v7) )
  {
    sub_1022EE70(v6, v7, 8);
    sub_10097DA0(a1, v22);
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 152))(dword_1041315C, 1685090928) == 4 )
    {
      sub_10097EA0(a1, v22);
      sub_1009A350(a1, v22);
    }
    if ( v23 >= 0 && v22[0] )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
  }
  if ( a1[10] || a1[15] )
  {
    sub_10076280("detail/detailsprites");
    v9 = a1[28];
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 16))(v9) / v10;
    v11 = (double)v26;
    if ( v11 > 1.0 )
    {
      v12 = 0;
      if ( a1[15] > 0 )
      {
        v13 = 0;
        do
        {
          ++v12;
          *(float *)(a1[12] + v13 + 20) = *(float *)(a1[12] + v13 + 20) * v11;
          *(float *)(a1[12] + v13 + 28) = *(float *)(a1[12] + v13 + 28) * v11;
          *(float *)(a1[17] + v13 + 20) = *(float *)(a1[17] + v13 + 20) * v11;
          v14 = a1[17];
          v15 = *(float *)(v14 + v13 + 28);
          v16 = (float *)(v14 + v13 + 28);
          v13 += 32;
          *v16 = v15 * v11;
        }
        while ( v12 < a1[15] );
      }
    }
  }
  v17 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) != 0 ? 1685089384 : 1685089396;
  v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 156))(dword_1041315C, v17);
  if ( v25 < v18 )
  {
    v19 = *g_pMemAlloc;
    if ( v24 )
      v20 = (*(int (__stdcall **)(int, int))(v19 + 12))(v24, v18);
    else
      v20 = (*(int (__stdcall **)(int))(v19 + 4))(v18);
    v24 = v20;
  }
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 160))(dword_1041315C, v17);
  v21 = v24;
  if ( (_BYTE)result )
  {
    sub_1022EE70(v24, v18, 8);
    result = sub_10098050(a1, v22);
    if ( v23 >= 0 )
    {
      result = v22[0];
      if ( v22[0] )
        result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v22[0]);
    }
  }
  if ( v21 )
    return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v21);
  return result;
}
