int __cdecl sub_101B0F90(_DWORD *a1, int a2, int a3, int a4, float *a5, char a6)
{
  int v6; // edi
  int result; // eax
  int v8; // esi
  int v9; // ecx
  float v10; // edx
  float v11; // eax
  float *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  _BYTE v15[48]; // [esp+4h] [ebp-E4h] BYREF
  _BYTE v16[48]; // [esp+34h] [ebp-B4h] BYREF
  _BYTE v17[48]; // [esp+64h] [ebp-84h] BYREF
  _BYTE v18[48]; // [esp+94h] [ebp-54h] BYREF
  _BYTE v19[12]; // [esp+C4h] [ebp-24h] BYREF
  _BYTE v20[12]; // [esp+D0h] [ebp-18h] BYREF
  float v21; // [esp+DCh] [ebp-Ch] BYREF
  float v22; // [esp+E0h] [ebp-8h]
  float v23; // [esp+E4h] [ebp-4h]

  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
  if ( v6 && result )
  {
    v8 = result;
    if ( a1 != (_DWORD *)v6 )
    {
      if ( a1 != (_DWORD *)result )
        return Msg("Bogus teleport notification!!\n");
      v8 = v6;
    }
    if ( *(_BYTE *)(v8 + 306) == 6 )
    {
      v9 = *(_DWORD *)(v8 + 424);
      if ( v9 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
        if ( (_BYTE)result )
        {
          v10 = a5[1];
          v11 = a5[2];
          v21 = *a5;
          v22 = v10;
          v23 = v11;
          if ( !a6 )
          {
            v12 = (float *)sub_1001F410(a1);
            v21 = *v12;
            v22 = v12[1];
            v23 = v12[2];
          }
          sub_10425040(&v21, a4, v16);
          sub_10424F80(v16, v17);
          v13 = sub_100BCD00(a1);
          sub_10421E30(v13, v17, v15);
          v14 = sub_100BCD00((_DWORD *)v8);
          sub_10421E30(v15, v14, v18);
          sub_10421A90(v18, v20);
          sub_10421CE0(v18, 3, v19);
          return (*(int (__thiscall **)(int, _BYTE *, _BYTE *, _DWORD))(*(_DWORD *)v8 + 416))(v8, v19, v20, 0);
        }
      }
    }
  }
  return result;
}
