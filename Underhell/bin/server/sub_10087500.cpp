void __thiscall sub_10087500(int *this, int a2, int *a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int *v7; // edi
  int i; // edi
  int v9; // eax
  float *v10; // eax
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // dl
  char v15; // cl
  char v16; // dl
  char v17; // cl
  char v18; // dl
  char v19; // cl
  _DWORD *v20; // eax
  int v21; // [esp+8h] [ebp-34h]
  char v22; // [esp+Ch] [ebp-30h]
  char v23; // [esp+10h] [ebp-2Ch]
  char v24; // [esp+14h] [ebp-28h]
  char v25; // [esp+18h] [ebp-24h]
  char v26; // [esp+1Ch] [ebp-20h]
  char v27; // [esp+20h] [ebp-1Ch]
  char v28; // [esp+24h] [ebp-18h]
  char v29; // [esp+28h] [ebp-14h]
  char v30; // [esp+2Ch] [ebp-10h]
  int *v31; // [esp+34h] [ebp-8h]
  int *v32; // [esp+38h] [ebp-4h]
  int v33; // [esp+48h] [ebp+Ch]
  char v34; // [esp+4Bh] [ebp+Fh]

  v3 = this[8];
  v4 = a2;
  v31 = this;
  v5 = 0;
  for ( *(_DWORD *)(*(_DWORD *)(v3 + 2588) + 32) = a2; v5 < *(_DWORD *)(a2 + 4); ++v5 )
  {
    sub_10086450(*a3, v5, (int)"Testing connection between %d and %d:\n");
    if ( sub_1008D320(v5) )
    {
      sub_10086450(*a3, v5, (int)"   Nodes already connected\n");
    }
    else
    {
      if ( v5 < 0 || v5 >= *(_DWORD *)(v4 + 4) )
      {
        ++dword_10691DE0;
        v32 = 0;
        v7 = 0;
      }
      else
      {
        v7 = *(int **)(*(_DWORD *)(v4 + 8) + 4 * v5);
        v32 = v7;
      }
      v33 = sub_1008D320(*a3);
      if ( v33 )
      {
        sub_10086450(*a3, v5, (int)"   Sharing previously establish connection\n");
        sub_1008D530(v33);
      }
      else if ( ((1 << (*v7 & 0x1F)) & *(_DWORD *)(*(_DWORD *)(*v31 + 12 * *a3 + 8) + 4 * (*v7 >> 5))) != 0 )
      {
        v34 = 1;
        if ( *a3 == dword_10608F94 && v5 == dword_10608F98 || *a3 == dword_10608F98 && v5 == dword_10608F94 )
          DevMsg(String);
        if ( a3[16] < 0 || v32[16] < 0 )
        {
          sub_10086450(*a3, v5, (int)"   No connection: one or both are fallen nodes\n");
        }
        else
        {
          for ( i = 0; i < 10; ++i )
          {
            sub_100737F0(i);
            sub_10086450(*a3, v5, (int)"   Testing for hull %s\n");
            v9 = sub_10086FB0(v31, (int)a3, (int)v32, i);
            *(&v21 + i) = v9;
            if ( v9 )
              v34 = 0;
          }
          if ( !v34 )
          {
            v10 = sub_10085280(*a3, *v32, 0);
            if ( v10 )
            {
              v11 = v22;
              *((_BYTE *)v10 + 4) = v21;
              v12 = v23;
              *((_BYTE *)v10 + 5) = v11;
              v13 = v24;
              *((_BYTE *)v10 + 6) = v12;
              v14 = v25;
              *((_BYTE *)v10 + 7) = v13;
              v15 = v26;
              *((_BYTE *)v10 + 8) = v14;
              v16 = v27;
              *((_BYTE *)v10 + 9) = v15;
              v17 = v28;
              *((_BYTE *)v10 + 10) = v16;
              v18 = v29;
              *((_BYTE *)v10 + 11) = v17;
              v19 = v30;
              *((_BYTE *)v10 + 12) = v18;
              *((_BYTE *)v10 + 13) = v19;
              sub_10086450(*a3, v5, (int)"   Added link\n");
            }
            goto LABEL_28;
          }
        }
        v20 = (_DWORD *)(*(_DWORD *)(*v31 + 12 * *a3 + 8) + 4 * (*v32 >> 5));
        *v20 &= ~(1 << (*(_BYTE *)v32 & 0x1F));
        sub_10086450(*a3, v5, (int)"   NO LINK\n");
      }
      else
      {
        sub_10086450(*a3, v5, (int)"   NO LINK (not neighbors)\n");
      }
    }
LABEL_28:
    v4 = a2;
  }
}
