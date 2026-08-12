void __thiscall sub_100514A0(int this, int a2, int a3, int a4)
{
  int v6; // ecx
  _BYTE *v7; // edx
  int v8; // edx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  char v14; // dl
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  bool v18; // cl
  bool v19; // al
  int v20; // edi
  bool v21; // cl
  bool v22; // al
  bool v23; // cl
  bool v24; // al
  bool v25; // cl
  bool v26; // al
  int v27; // [esp-Ch] [ebp-1Ch]
  int v28; // [esp-Ch] [ebp-1Ch]
  char v29; // [esp+9h] [ebp-7h]
  char v30; // [esp+Ah] [ebp-6h]
  char v31; // [esp+Bh] [ebp-5h]
  char v32; // [esp+Ch] [ebp-4h]
  char v33; // [esp+Dh] [ebp-3h]
  char v34; // [esp+Eh] [ebp-2h]
  char v35; // [esp+Fh] [ebp-1h]
  char v36; // [esp+1Fh] [ebp+Fh]

  if ( a2 < *(_DWORD *)(this + 1196) && a3 < *(_DWORD *)(this + 1200) && a2 >= 0 && a3 >= 0 )
  {
    v6 = 16 * a2;
    v7 = (_BYTE *)(16 * a2 + a3 + this + 1788);
    if ( (*v7 & 1) == 0 )
    {
      *v7 &= ~2u;
      v8 = *(_DWORD *)(this + 1196);
      v9 = a3 + 1;
      if ( a2 < v8 && v9 < *(_DWORD *)(this + 1200) && v9 >= 0 )
        v34 = *(_BYTE *)(v6 + v9 + this + 1788) & 1;
      else
        v34 = 1;
      v10 = a3 - 1;
      if ( a2 < v8 && v10 < *(_DWORD *)(this + 1200) && v10 >= 0 )
        v33 = *(_BYTE *)(v6 + v10 + this + 1788) & 1;
      else
        v33 = 1;
      v11 = a2 - 1;
      if ( a2 - 1 < v8 && a3 < *(_DWORD *)(this + 1200) && v11 >= 0 )
        v36 = *(_BYTE *)(a3 + 16 * v11 + this + 1788) & 1;
      else
        v36 = 1;
      v12 = a2 + 1;
      if ( a2 + 1 < v8 && a3 < *(_DWORD *)(this + 1200) && v12 >= 0 )
        v35 = *(_BYTE *)(a3 + 16 * v12 + this + 1788) & 1;
      else
        v35 = 1;
      if ( v11 < v8 && (v13 = a3 + 1, a3 + 1 < *(_DWORD *)(this + 1200)) && v11 >= 0 && v13 >= 0 )
        v14 = *(_BYTE *)(v13 + 16 * v11 + this + 1788) & 1;
      else
        v14 = 1;
      v32 = v14;
      if ( v12 < *(_DWORD *)(this + 1196) && (v15 = a3 + 1, a3 + 1 < *(_DWORD *)(this + 1200)) && v12 >= 0 && v15 >= 0 )
        v30 = *(_BYTE *)(v15 + 16 * v12 + this + 1788) & 1;
      else
        v30 = 1;
      if ( v11 < *(_DWORD *)(this + 1196) && (v16 = a3 - 1, a3 - 1 < *(_DWORD *)(this + 1200)) && v11 >= 0 && v16 >= 0 )
        v31 = *(_BYTE *)(v16 + 16 * v11 + this + 1788) & 1;
      else
        v31 = 1;
      if ( v12 < *(_DWORD *)(this + 1196) && (v17 = a3 - 1, a3 - 1 < *(_DWORD *)(this + 1200)) && v12 >= 0 && v17 >= 0 )
        v29 = *(_BYTE *)(v17 + 16 * v12 + this + 1788) & 1;
      else
        v29 = 1;
      if ( v34 )
      {
        v18 = !v36 && v14;
        v19 = !v35 && v30;
        v20 = a4;
        if ( v18 )
        {
          if ( v19 )
            sub_10051330((_BYTE *)this, a2, a3, 2, 1, a4);
          else
            sub_10051330((_BYTE *)this, a2, a3, 2, 2, a4);
        }
        else
        {
          if ( v19 )
            v27 = 3;
          else
            v27 = 0;
          sub_10051330((_BYTE *)this, a2, a3, 2, v27, a4);
        }
      }
      else
      {
        v20 = a4;
        sub_10051330((_BYTE *)this, a2, a3, 2, -1, a4);
      }
      if ( v33 )
      {
        v21 = !v36 && v31;
        v22 = !v35 && v29;
        if ( v21 )
        {
          if ( v22 )
            sub_10051330((_BYTE *)this, a2, a3, 0, 1, v20);
          else
            sub_10051330((_BYTE *)this, a2, a3, 0, 3, v20);
        }
        else
        {
          if ( v22 )
            v28 = 2;
          else
            v28 = 0;
          sub_10051330((_BYTE *)this, a2, a3, 0, v28, v20);
        }
      }
      else
      {
        sub_10051330((_BYTE *)this, a2, a3, 0, -1, v20);
      }
      if ( v36 )
      {
        v23 = !v34 && v32;
        v24 = !v33 && v31;
        if ( v23 )
        {
          if ( v24 )
            sub_10051330((_BYTE *)this, a2, a3, 3, 1, v20);
          else
            sub_10051330((_BYTE *)this, a2, a3, 3, 3, v20);
        }
        else if ( v24 )
        {
          sub_10051330((_BYTE *)this, a2, a3, 3, 2, v20);
        }
        else
        {
          sub_10051330((_BYTE *)this, a2, a3, 3, 0, v20);
        }
      }
      else
      {
        sub_10051330((_BYTE *)this, a2, a3, 3, -1, v20);
      }
      if ( v35 )
      {
        v25 = !v34 && v30;
        v26 = !v33 && v29;
        if ( v25 )
        {
          if ( v26 )
            sub_10051330((_BYTE *)this, a2, a3, 1, 1, v20);
          else
            sub_10051330((_BYTE *)this, a2, a3, 1, 2, v20);
        }
        else if ( v26 )
        {
          sub_10051330((_BYTE *)this, a2, a3, 1, 3, v20);
        }
        else
        {
          sub_10051330((_BYTE *)this, a2, a3, 1, 0, v20);
        }
      }
      else
      {
        sub_10051330((_BYTE *)this, a2, a3, 1, -1, v20);
      }
    }
  }
}
