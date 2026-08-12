int __thiscall sub_10414F20(int *this, int a2)
{
  bool v3; // zf
  int *v4; // edi
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // eax
  int *v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int v16; // esi
  int *v17; // esi
  _DWORD v18[4]; // [esp+10h] [ebp-60h] BYREF
  int v19; // [esp+20h] [ebp-50h]
  int v20; // [esp+24h] [ebp-4Ch]
  int v21; // [esp+28h] [ebp-48h]
  float v22; // [esp+44h] [ebp-2Ch]
  int v23; // [esp+50h] [ebp-20h]
  int v24; // [esp+60h] [ebp-10h] BYREF
  int v25; // [esp+64h] [ebp-Ch]
  int v26; // [esp+68h] [ebp-8h]
  int v27; // [esp+6Ch] [ebp-4h]

  v3 = this[55] == 0;
  v4 = this + 55;
  v27 = (int)this;
  if ( v3 )
    return 0;
  v6 = *(_DWORD *)(a2 + 44);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v6 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  sub_1010DD80(this + 463, __SPAIR64__((unsigned int)this, v7), 0.0);
  v8 = *(_DWORD *)(a2 + 44);
  if ( v8 != -1 )
  {
    v9 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v10 = v8 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v10 )
    {
      if ( *v9 )
      {
        v11 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v10 ? *v9 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) )
        {
          v12 = *(_DWORD *)(a2 + 44);
          if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
          sub_1010DD80(this + 469, __SPAIR64__((unsigned int)this, v13), 0.0);
        }
      }
    }
  }
  sub_1001E4E0(v18, a2);
  if ( (v23 & 0x2000040) == 0 )
    return 1;
  v14 = *v4;
  v15 = (int)v22;
  v16 = *v4 - v15;
  if ( v14 != v14 - v15 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v4 - 55) + 464))(v4 - 55, v4);
    *v4 = v16;
  }
  if ( *v4 > 0 )
  {
    if ( v14 != *v4 )
    {
      v17 = (int *)v27;
      if ( sub_1034A070((int *)v27, (int)v4, v14, 4) )
      {
        v24 = v19;
        v25 = v20;
        v26 = v21;
        sub_10414CB0(v17, (float *)&v24);
      }
      if ( sub_1034A070(v17, (int)v4, v14, 4) )
      {
        v24 = v19;
        v26 = v21;
        v25 = v20;
        sub_104130D0((int)v17, (float *)&v24);
      }
    }
    return 1;
  }
  if ( *v4 )
  {
    (*(void (__thiscall **)(int *, int *))(*(v4 - 55) + 464))(v4 - 55, v4);
    *v4 = 0;
  }
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v27 + 268))(v27, v18);
  return 0;
}
