char __thiscall sub_101BC380(int *this, char *String2, char *a3, int *a4)
{
  int v5; // esi
  int v6; // ebx
  const char *v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // esi
  int v12; // esi
  _BYTE v14[20]; // [esp+Ch] [ebp-20h] BYREF
  int v15; // [esp+20h] [ebp-Ch]
  int v16; // [esp+24h] [ebp-8h]
  char v17; // [esp+2Bh] [ebp-1h]

  v5 = 0;
  v17 = 0;
  v16 = -1;
  if ( this[19] <= 0 )
    goto LABEL_9;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(const char **)(this[16] + v6);
    if ( !v7 )
      v7 = String;
    if ( !_stricmp(v7, String2) )
      break;
    ++v5;
    v6 += 916;
    if ( v5 >= this[19] )
      goto LABEL_9;
  }
  v16 = v5;
  v17 = 1;
  if ( v5 >= 0 )
  {
    v12 = v16;
  }
  else
  {
LABEL_9:
    v15 = sub_1025F7A0(String2, 0);
    if ( v15 )
    {
      v8 = sub_101BB5E0(this + 16, this[19]);
      v9 = this[16];
      v10 = 916 * v8;
      v16 = v8;
      *(_DWORD *)(v9 + v10) = *sub_10162BE0(&String2, String2);
      sub_101B8FB0((float *)(v10 + this[16] + 676));
      v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, v15);
      while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11) )
      {
        String2 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
        if ( !_stricmp(String2, "vehicle") )
        {
          (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v11 + 32))(v11, v10 + this[16] + 4, 0);
        }
        else if ( !_stricmp(String2, "vehicle_sounds") )
        {
          v17 = 1;
          sub_1026A870(v14);
          (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v11 + 28))(v11, v10 + this[16] + 676, v14);
        }
        else
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
        }
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v11);
      sub_1025F7F0(v15);
    }
    v12 = v16;
    if ( v16 < 0 )
      return 0;
  }
  if ( a3 )
    sub_101B6600(a3, 916 * v12 + this[16] + 4);
  if ( a4 )
  {
    if ( !v17 )
      return 0;
    sub_101BBF80(a4, (int *)(916 * v12 + this[16] + 676));
  }
  return 1;
}
