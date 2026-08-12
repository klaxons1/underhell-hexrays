int sub_101DAC80()
{
  int v0; // edi
  int result; // eax
  unsigned __int16 *v2; // esi
  char *v3; // eax
  __int16 v4; // ax
  char *v5; // eax
  __int16 v6; // ax
  char *v7; // eax
  __int16 v8; // ax
  char *v9; // eax
  __int16 v10; // ax
  char *v11; // eax
  __int16 v12; // ax
  char *v13; // eax
  __int16 v14; // ax
  char *v15; // eax
  __int16 v16; // ax
  char *v17; // eax
  __int16 v18; // ax
  char *v19; // eax
  __int16 v20; // ax
  char *v21; // eax
  __int16 v22; // ax

  v0 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF8 + 8))(dword_106BAFF8);
  if ( result > 0 )
  {
    do
    {
      v2 = (unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, v0);
      if ( v2[22] )
      {
        v3 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[22]);
        v4 = sub_1023B8B0(v3);
      }
      else
      {
        v4 = -1;
      }
      v2[38] = v4;
      if ( v2[23] )
      {
        v5 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[23]);
        v6 = sub_1023B8B0(v5);
      }
      else
      {
        v6 = -1;
      }
      v2[39] = v6;
      if ( v2[24] )
      {
        v7 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[24]);
        v8 = sub_1023B8B0(v7);
      }
      else
      {
        v8 = -1;
      }
      v2[40] = v8;
      if ( v2[25] )
      {
        v9 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[25]);
        v10 = sub_1023B8B0(v9);
      }
      else
      {
        v10 = -1;
      }
      v2[41] = v10;
      if ( v2[26] )
      {
        v11 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[26]);
        v12 = sub_1023B8B0(v11);
      }
      else
      {
        v12 = -1;
      }
      v2[42] = v12;
      if ( v2[27] )
      {
        v13 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[27]);
        v14 = sub_1023B8B0(v13);
      }
      else
      {
        v14 = -1;
      }
      v2[43] = v14;
      if ( v2[28] )
      {
        v15 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[28]);
        v16 = sub_1023B8B0(v15);
      }
      else
      {
        v16 = -1;
      }
      v2[44] = v16;
      if ( v2[29] )
      {
        v17 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[29]);
        v18 = sub_1023B8B0(v17);
      }
      else
      {
        v18 = -1;
      }
      v2[45] = v18;
      if ( v2[30] )
      {
        v19 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[30]);
        v20 = sub_1023B8B0(v19);
      }
      else
      {
        v20 = -1;
      }
      v2[46] = v20;
      if ( v2[31] )
      {
        v21 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 24))(dword_106BAFF8, v2[31]);
        v22 = sub_1023B8B0(v21);
      }
      else
      {
        v22 = -1;
      }
      v2[47] = v22;
      ++v0;
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF8 + 8))(dword_106BAFF8);
    }
    while ( v0 < result );
  }
  return result;
}
