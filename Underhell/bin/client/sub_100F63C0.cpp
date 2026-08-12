int __thiscall sub_100F63C0(_DWORD *this)
{
  int v1; // edi
  int result; // eax
  unsigned __int16 *v3; // esi
  int v4; // eax
  __int16 v5; // ax
  int v6; // eax
  __int16 v7; // ax
  int v8; // eax
  __int16 v9; // ax
  int v10; // eax
  __int16 v11; // ax
  int v12; // eax
  __int16 v13; // ax
  int v14; // eax
  __int16 v15; // ax
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  __int16 v19; // ax
  int v20; // eax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax

  this[6] = 0;
  v1 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436258 + 8))(dword_10436258);
  if ( result > 0 )
  {
    do
    {
      v3 = (unsigned __int16 *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 20))(dword_10436258, v1);
      if ( v3[22] )
      {
        v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[22]);
        v5 = sub_10120780(v4);
      }
      else
      {
        v5 = -1;
      }
      v3[38] = v5;
      if ( v3[23] )
      {
        v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[23]);
        v7 = sub_10120780(v6);
      }
      else
      {
        v7 = -1;
      }
      v3[39] = v7;
      if ( v3[24] )
      {
        v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[24]);
        v9 = sub_10120780(v8);
      }
      else
      {
        v9 = -1;
      }
      v3[40] = v9;
      if ( v3[25] )
      {
        v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[25]);
        v11 = sub_10120780(v10);
      }
      else
      {
        v11 = -1;
      }
      v3[41] = v11;
      if ( v3[26] )
      {
        v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[26]);
        v13 = sub_10120780(v12);
      }
      else
      {
        v13 = -1;
      }
      v3[42] = v13;
      if ( v3[27] )
      {
        v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[27]);
        v15 = sub_10120780(v14);
      }
      else
      {
        v15 = -1;
      }
      v3[43] = v15;
      if ( v3[28] )
      {
        v16 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[28]);
        v17 = sub_10120780(v16);
      }
      else
      {
        v17 = -1;
      }
      v3[44] = v17;
      if ( v3[29] )
      {
        v18 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[29]);
        v19 = sub_10120780(v18);
      }
      else
      {
        v19 = -1;
      }
      v3[45] = v19;
      if ( v3[30] )
      {
        v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[30]);
        v21 = sub_10120780(v20);
      }
      else
      {
        v21 = -1;
      }
      v3[46] = v21;
      if ( v3[31] )
      {
        v22 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436258 + 24))(dword_10436258, v3[31]);
        v23 = sub_10120780(v22);
      }
      else
      {
        v23 = -1;
      }
      v3[47] = v23;
      ++v1;
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436258 + 8))(dword_10436258);
    }
    while ( v1 < result );
  }
  return result;
}
