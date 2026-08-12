char __stdcall sub_101BB7C0(int a1)
{
  int v1; // edi
  _BYTE *v2; // eax
  int v3; // esi
  double (__thiscall *v5)(int); // edx
  double v6; // st7
  int v7; // eax
  bool v8; // cc
  int v9; // edi
  double v10; // st7
  float v11; // [esp+0h] [ebp-8Ch]
  float v12; // [esp+0h] [ebp-8Ch]
  _DWORD v13[20]; // [esp+18h] [ebp-74h] BYREF
  int v14[3]; // [esp+68h] [ebp-24h] BYREF
  int v15[3]; // [esp+74h] [ebp-18h] BYREF
  int v16; // [esp+80h] [ebp-Ch] BYREF
  _BYTE *v17; // [esp+84h] [ebp-8h] BYREF
  float v18; // [esp+88h] [ebp-4h] BYREF

  v1 = a1;
  v2 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 68))(a1);
  v3 = (int)v2;
  v17 = v2;
  if ( v2
    && (v2[306] == 7
     || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 340))(v2)
     && ((*(int (__thiscall **)(int))(*(_DWORD *)v1 + 92))(v1) & 0x40) == 0) )
  {
    return 0;
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 420) - 1) <= 2
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 284))(v3) )
  {
    v5 = *(double (__thiscall **)(int))(*(_DWORD *)v1 + 116);
    a1 = 0;
    v6 = v5(v1) * 10.0;
    v11 = v6;
    if ( sub_101B5840(v1, v11, &a1, (int)v14, (float *)v15) )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 68))(a1);
      v8 = *(_BYTE *)(v3 + 225) <= 1;
      v9 = v7;
      v16 = v7;
      if ( !v8 )
      {
        sub_100D7A40((float *)v15);
        v10 = v6 * 0.1;
        v12 = v10;
        sub_102487B0(v9, v9, (int)v15, (int)v14, v12, 1, 0, 0);
        sub_101BB4F0(v3, v10, (int *)v3, v13);
        return 1;
      }
      if ( (unsigned __int8)sub_10209490(v3) )
      {
        sub_101BA8E0(v3 + 12);
        return 1;
      }
      v18 = 1.0;
      HIBYTE(a1) = 1;
      sub_101B9400(&dword_106B9EC0, (int)sub_101CA9F0, &v16, &v17, (_BYTE *)&a1 + 3, &v18);
    }
  }
  return 1;
}
