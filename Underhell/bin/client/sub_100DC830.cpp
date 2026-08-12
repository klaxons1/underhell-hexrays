int __thiscall sub_100DC830(int this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int result; // eax
  int v8; // eax
  float v9; // [esp+0h] [ebp-3Ch]
  int v10; // [esp+4h] [ebp-38h]
  float v11[3]; // [esp+Ch] [ebp-30h] BYREF
  float v12[3]; // [esp+18h] [ebp-24h] BYREF
  float v13[3]; // [esp+24h] [ebp-18h] BYREF
  float v14; // [esp+30h] [ebp-Ch]
  int v15; // [esp+34h] [ebp-8h] BYREF
  int v16; // [esp+38h] [ebp-4h] BYREF

  sub_1009EB00((_DWORD *)this, &v15, &v16);
  if ( v15 )
  {
    if ( v15 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), v12, v16);
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 16) + 112))(*(_DWORD *)(this + 16), v13, v16);
      v6 = *(_DWORD *)(this + 4);
      v11[0] = v13[0] * v12[0];
      v11[1] = v13[1] * v12[1];
      v11[2] = v13[2] * v12[2];
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v6 + 48))(v6, v11, v16);
    }
    else if ( v15 == 4 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 104))(*(_DWORD *)(this + 12));
      v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 104))(*(_DWORD *)(this + 16));
      v5 = **(_DWORD **)(this + 4);
      LODWORD(v14) = v3 * v4;
      v9 = (float)(v3 * v4);
      (*(void (__stdcall **)(_DWORD))(v5 + 12))(LODWORD(v9));
    }
  }
  else
  {
    v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    *(float *)&v10 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 16) + 108))(*(_DWORD *)(this + 16))
                   * v14;
    sub_1009E9B0((_DWORD *)this, v10);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v8);
  }
  return result;
}
