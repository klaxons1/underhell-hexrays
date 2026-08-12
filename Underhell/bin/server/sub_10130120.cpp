void __thiscall sub_10130120(_DWORD *this, int a2)
{
  const char *v3; // eax
  int v4; // ecx
  const char *v5; // eax
  const char *v6; // edi
  int v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // esi
  int *v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // eax
  int v17; // esi
  int *v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  float v22; // [esp+0h] [ebp-1Ch]
  float v23; // [esp+0h] [ebp-1Ch]
  float v24[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(_DWORD *)a2 == 18 )
  {
    v3 = sub_1012F410(this, *(char **)(a2 + 4));
    if ( v3 )
    {
      v4 = *((_DWORD *)v3 + 34);
      if ( v4 == 1 )
      {
        sub_1012FC80(this, (int)v3);
      }
      else if ( v4 == 2 )
      {
        sub_1012FF30(this, (int)v3);
      }
    }
  }
  else if ( *(_DWORD *)a2 == 19 )
  {
    v5 = sub_1012F410(this, *(char **)(a2 + 4));
    v6 = v5;
    if ( v5 && v5[429] )
    {
      v7 = *((_DWORD *)v5 + 34);
      *((_BYTE *)v6 + 429) = 0;
      if ( v7 == 1 )
      {
        if ( v6[428] == 1 )
        {
          v8 = sub_1026A890(v6 + 128);
          sub_100BD6D0(this, *(_DWORD *)(v8 + 804), (int)v24, 0, 0, 0);
          v9 = (void *)sub_1026A890(v6 + 128);
          sub_100E1BB0(v9);
          v10 = sub_1026A890(v6 + 128);
          if ( *(_DWORD *)(v10 + 800) != -1
            && off_1061BE18[4 * (*(_DWORD *)(v10 + 800) & 0xFFF) + 2] == *(_DWORD *)(v10 + 800) >> 12
            && off_1061BE18[4 * (*(_DWORD *)(v10 + 800) & 0xFFF) + 1] )
          {
            if ( *(_BYTE *)(v10 + 84) )
            {
              *(_BYTE *)(v10 + 88) |= 1u;
            }
            else
            {
              v11 = *(int **)(v10 + 24);
              if ( v11 )
                sub_100194B0(v11, 800);
            }
            *(_DWORD *)(v10 + 800) = -1;
          }
          a2 = 0;
          v12 = sub_1026A890(v6 + 128);
          sub_10126A50((_DWORD *)(v12 + 804), &a2);
          v13 = sub_1026A890(v6 + 128);
          sub_100E0D20(v13, v24);
        }
        v22 = *((float *)v6 + 105);
        v14 = sub_1026A890(v6 + 128);
        sub_1012F1D0(v14, v22);
        *((_DWORD *)v6 + 32) = -1;
      }
      else if ( v7 == 2 )
      {
        if ( v6[428] == 1 )
        {
          v15 = sub_1026A890(v6 + 132);
          sub_100BD6D0(this, *(_DWORD *)(v15 + 804), (int)v24, 0, 0, 0);
          v16 = (void *)sub_1026A890(v6 + 132);
          sub_100E1BB0(v16);
          v17 = sub_1026A890(v6 + 132);
          if ( *(_DWORD *)(v17 + 800) != -1
            && off_1061BE18[4 * (*(_DWORD *)(v17 + 800) & 0xFFF) + 2] == *(_DWORD *)(v17 + 800) >> 12
            && off_1061BE18[4 * (*(_DWORD *)(v17 + 800) & 0xFFF) + 1] )
          {
            if ( *(_BYTE *)(v17 + 84) )
            {
              *(_BYTE *)(v17 + 88) |= 1u;
            }
            else
            {
              v18 = *(int **)(v17 + 24);
              if ( v18 )
                sub_100194B0(v18, 800);
            }
            *(_DWORD *)(v17 + 800) = -1;
          }
          a2 = 0;
          v19 = sub_1026A890(v6 + 132);
          sub_10126A50((_DWORD *)(v19 + 804), &a2);
          v20 = sub_1026A890(v6 + 132);
          sub_100E0D20(v20, v24);
        }
        v23 = *((float *)v6 + 105);
        v21 = sub_1026A890(v6 + 132);
        sub_1012F1D0(v21, v23);
        *((_DWORD *)v6 + 33) = -1;
      }
    }
  }
  else
  {
    sub_100C3960(this, a2);
  }
}
