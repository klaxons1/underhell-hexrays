int __thiscall sub_10061870(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int result; // eax
  void **v12; // [esp+Ch] [ebp-420h] BYREF
  _BYTE v13[208]; // [esp+18h] [ebp-414h] BYREF
  int v14; // [esp+E8h] [ebp-344h]
  int v15; // [esp+1B0h] [ebp-27Ch]
  int v16; // [esp+238h] [ebp-1F4h]
  _BYTE v17[180]; // [esp+23Ch] [ebp-1F0h] BYREF
  int v18; // [esp+2F0h] [ebp-13Ch]
  int v19; // [esp+2F4h] [ebp-138h]
  char v20; // [esp+2F8h] [ebp-134h]
  _DWORD v21[4]; // [esp+2FCh] [ebp-130h] BYREF
  int v22; // [esp+30Ch] [ebp-120h]
  int v23; // [esp+310h] [ebp-11Ch]
  int v24; // [esp+314h] [ebp-118h]
  int v25; // [esp+37Ch] [ebp-B0h]
  int v26; // [esp+3D4h] [ebp-58h]
  int v27; // [esp+3DCh] [ebp-50h]
  int v28; // [esp+3E0h] [ebp-4Ch]
  int v29; // [esp+424h] [ebp-8h]
  int v30; // [esp+428h] [ebp-4h]
  int v31; // [esp+43Ch] [ebp+10h]
  int v32; // [esp+440h] [ebp+14h]

  sub_10016C20((int)v17);
  v6 = 0;
  v7 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 224))(a2, 1, 0, 0, a3);
  v29 = v7;
  sub_10061780((int)v17, v7, 2, a4, a5);
  v12 = &CBeamSegDraw::`vftable';
  sub_10016C20((int)v13);
  v16 = 0;
  v32 = 0;
  v31 = 0;
  if ( (int)this[6] > 0 )
  {
    v30 = 0;
    do
    {
      v8 = *(_DWORD *)(v6 + this[7]);
      sub_10233F90(a2, v8, a3, v17, v32);
      if ( v8 > 0 )
      {
        do
        {
          sub_10234090(v6 + this[7] + 4);
          v6 += 36;
          --v8;
        }
        while ( v8 );
        v6 = v30;
      }
      sub_10233EF0(&v12);
      v9 = v32 + 2 * *(_DWORD *)(v6 + this[7]);
      v6 += 3288;
      v32 = v9;
      ++v31;
      v30 = v6;
    }
    while ( v31 < this[6] );
    v7 = v29;
  }
  if ( v20 )
  {
    switch ( v19 )
    {
      case 4:
        v10 = 2 * v28 - 2;
        break;
      case 5:
        v10 = 2 * v28;
        break;
      case 6:
        v10 = 3 * v28 - 6;
        break;
      case 7:
        v10 = 6 * v28 / 4;
        break;
      case 8:
        v10 = 0;
        break;
      default:
        v10 = v28;
        break;
    }
    sub_10016B00(v21, v19, v10);
  }
  (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)v18 + 80))(v18, v28, v24, v17);
  v22 = 0;
  v23 = 0;
  v27 = 0;
  v26 = 0;
  v25 = -1;
  v18 = 0;
  result = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 48))(v7, -1, 0);
  if ( v15 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 16))(v15);
  }
  if ( v14 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 16))(v14);
  }
  if ( v26 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 16))(v26);
  }
  if ( v22 )
  {
    result = (*(int (__thiscall **)(int, void **))(*(_DWORD *)v22 + 8))(v22, v12);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 16))(v22);
  }
  return result;
}
