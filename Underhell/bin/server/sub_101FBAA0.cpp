int __thiscall sub_101FBAA0(char *this)
{
  int result; // eax
  int v2; // esi
  int *v3; // eax
  int *v4; // edx
  int v5; // ebx
  char *v6; // edi
  int *v7; // ecx
  int v8; // ebx
  char *v9; // edi
  int *v10; // ecx
  char *v11; // edi
  int *v12; // ecx
  int v13; // ebx
  char *v14; // edi
  int *v15; // ecx
  int v16; // ebx
  char *v17; // edi
  int *v18; // ecx
  char *v19; // edi
  int v20; // ebx
  int *v21; // ecx
  int v22; // eax
  char *v23; // edi
  int *v24; // ecx
  char *v25; // edi
  int *v26; // ecx
  char v27[4]; // [esp+4h] [ebp-10h] BYREF
  int v28; // [esp+8h] [ebp-Ch] BYREF
  int *v29; // [esp+Ch] [ebp-8h]
  char *i; // [esp+10h] [ebp-4h]

  result = dword_106B31C8;
  v2 = 1;
  for ( i = this; v2 <= *(_DWORD *)(dword_106B31C8 + 20); ++v2 )
  {
    v3 = (int *)sub_1025FB50(v2);
    v4 = v3;
    v29 = v3;
    if ( !v3 || v3[1001] == 2 )
    {
      v25 = i + 1016;
      if ( *(_DWORD *)&i[4 * v2 + 1016] )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v26 = (int *)*((_DWORD *)i + 6);
          if ( v26 )
            sub_100194B0(v26, 4 * v2 + 1016);
        }
        *(_DWORD *)&v25[4 * v2] = 0;
      }
    }
    else
    {
      v5 = v3[998];
      v6 = i + 872;
      if ( *(_DWORD *)&i[4 * v2 + 872] != v5 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v7 = (int *)*((_DWORD *)i + 6);
          if ( v7 )
          {
            sub_100194B0(v7, 4 * v2 + 872);
            v4 = v29;
          }
        }
        *(_DWORD *)&v6[4 * v2] = v5;
      }
      v8 = v4[999];
      v9 = i + 944;
      if ( *(_DWORD *)&i[4 * v2 + 944] != v8 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v10 = (int *)*((_DWORD *)i + 6);
          if ( v10 )
          {
            sub_100194B0(v10, 4 * v2 + 944);
            v4 = v29;
          }
        }
        *(_DWORD *)&v9[4 * v2] = v8;
      }
      v11 = i + 1016;
      if ( *(_DWORD *)&i[4 * v2 + 1016] != 1 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v12 = (int *)*((_DWORD *)i + 6);
          if ( v12 )
          {
            sub_100194B0(v12, 4 * v2 + 1016);
            v4 = v29;
          }
        }
        *(_DWORD *)&v11[4 * v2] = 1;
      }
      v13 = sub_100D8840(v4);
      v14 = i + 1088;
      if ( *(_DWORD *)&i[4 * v2 + 1088] != v13 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v15 = (int *)*((_DWORD *)i + 6);
          if ( v15 )
            sub_100194B0(v15, 4 * v2 + 1088);
        }
        *(_DWORD *)&v14[4 * v2] = v13;
      }
      v16 = (*(unsigned __int8 (__thiscall **)(int *))(*v29 + 264))(v29) != 0;
      v17 = i + 1160;
      if ( *(_DWORD *)&i[4 * v2 + 1160] != v16 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v18 = (int *)*((_DWORD *)i + 6);
          if ( v18 )
            sub_100194B0(v18, 4 * v2 + 1160);
        }
        *(_DWORD *)&v17[4 * v2] = v16;
      }
      v19 = i + 1232;
      v20 = v29[55] < 0 ? 0 : v29[55];
      if ( *(_DWORD *)&i[4 * v2 + 1232] != v20 )
      {
        if ( i[84] )
        {
          i[88] |= 1u;
        }
        else
        {
          v21 = (int *)*((_DWORD *)i + 6);
          if ( v21 )
            sub_100194B0(v21, 4 * v2 + 1232);
        }
        *(_DWORD *)&v19[4 * v2] = v20;
      }
      if ( !(*((_DWORD *)i + 326) % 20) )
      {
        sub_1025FD40(v2, &v28, v27);
        v29 = *(int **)&i[4 * v2 + 800];
        v22 = (int)((double)(int)v29 * 0.80000001 + (double)v28 * 0.2);
        v28 = v22;
        if ( v29 != (int *)v22 )
        {
          v23 = i + 800;
          if ( i[84] )
          {
            i[88] |= 1u;
            *(_DWORD *)&v23[4 * v2] = v22;
          }
          else
          {
            v24 = (int *)*((_DWORD *)i + 6);
            if ( v24 )
            {
              sub_100194B0(v24, 4 * v2 + 800);
              v22 = v28;
            }
            *(_DWORD *)&v23[4 * v2] = v22;
          }
        }
      }
    }
    result = dword_106B31C8;
  }
  return result;
}
