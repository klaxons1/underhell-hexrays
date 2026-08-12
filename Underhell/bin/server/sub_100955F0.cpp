int __thiscall sub_100955F0(int this, unsigned __int8 a2)
{
  signed __int8 v2; // dl
  int v4; // ecx
  int *v5; // eax
  char v6; // al
  int *v7; // eax
  int *v8; // eax
  char v9; // al
  int *v10; // eax
  char v11; // bl
  bool v12; // al
  int v13; // edx
  int *v14; // eax
  char v15; // cl
  int *v16; // eax
  int v17; // eax
  int *v18; // ecx
  char v19; // cl
  int *v20; // eax
  int *v21; // eax
  int v22; // eax
  int *v23; // ecx
  char v24; // cl
  int result; // eax
  char v26; // [esp+4h] [ebp-8h]
  char v27; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_BYTE *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_10693990;
      if ( (dword_10693990 & 1) == 0 )
      {
        v4 = dword_10693990 | 1;
        dword_10693990 |= 1u;
        dword_1069398C = 0x1FFFFFF;
      }
      if ( v2 == -1 )
        v5 = &dword_1069398C;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      v6 = *((_BYTE *)v5 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10693990 = v4;
        dword_1069398C = 0x1FFFFFF;
      }
      if ( v6 == -1 )
        v7 = &dword_1069398C;
      else
        v7 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
      if ( *((_BYTE *)v7 + 3) )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_10693990 = v4;
        dword_1069398C = 0x1FFFFFF;
      }
      if ( v2 == -1 )
        v8 = &dword_1069398C;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      v9 = *((_BYTE *)v8 + 2);
      v27 = v9;
      if ( (v4 & 1) == 0 )
      {
        dword_10693990 = v4 | 1;
        dword_1069398C = 0x1FFFFFF;
      }
      if ( v9 == -1 )
        v10 = &dword_1069398C;
      else
        v10 = (int *)(*(_DWORD *)(this + 4) + 12 * v9);
      v11 = *((_BYTE *)v10 + 2);
      v26 = v11;
      v12 = sub_10094690((_DWORD *)this, v27);
      v13 = dword_10693990;
      if ( v12 )
      {
        if ( (dword_10693990 & 1) == 0 )
        {
          v13 = dword_10693990 | 1;
          dword_10693990 |= 1u;
          dword_1069398C = 0x1FFFFFF;
        }
        if ( v11 == -1 )
          v14 = &dword_1069398C;
        else
          v14 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
        v15 = *((_BYTE *)v14 + 1);
        if ( (v13 & 1) == 0 )
        {
          dword_10693990 = v13 | 1;
          dword_1069398C = 0x1FFFFFF;
        }
        if ( v15 == -1 )
          v16 = &dword_1069398C;
        else
          v16 = (int *)(*(_DWORD *)(this + 4) + 12 * v15);
        if ( !*((_BYTE *)v16 + 3) )
          goto LABEL_62;
        if ( sub_100944E0((_DWORD *)this, a2) )
        {
          a2 = v27;
          sub_10094740(this, v27);
          v17 = dword_10693990;
          if ( (dword_10693990 & 1) == 0 )
          {
            v17 = dword_10693990 | 1;
            dword_10693990 |= 1u;
            dword_1069398C = 0x1FFFFFF;
          }
          if ( v27 == -1 )
            v18 = &dword_1069398C;
          else
            v18 = (int *)(*(_DWORD *)(this + 4) + 12 * v27);
          v19 = *((_BYTE *)v18 + 2);
          if ( (v17 & 1) == 0 )
          {
            dword_10693990 = v17 | 1;
            dword_1069398C = 0x1FFFFFF;
          }
          if ( v19 == -1 )
            v11 = BYTE2(dword_1069398C);
          else
            v11 = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v19 + 2);
          v26 = v11;
        }
        else
        {
          v19 = v27;
        }
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v19 + 3) = 1;
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v11 + 3) = 0;
        sub_100948C0(this, v26);
      }
      else
      {
        if ( (dword_10693990 & 1) == 0 )
        {
          v13 = dword_10693990 | 1;
          dword_10693990 |= 1u;
          dword_1069398C = 0x1FFFFFF;
        }
        if ( v11 == -1 )
          v20 = &dword_1069398C;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
        v15 = *(_BYTE *)v20;
        if ( (v13 & 1) == 0 )
        {
          dword_10693990 = v13 | 1;
          dword_1069398C = 0x1FFFFFF;
        }
        if ( v15 == -1 )
          v21 = &dword_1069398C;
        else
          v21 = (int *)(*(_DWORD *)(this + 4) + 12 * v15);
        if ( !*((_BYTE *)v21 + 3) )
        {
LABEL_62:
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v27 + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v15 + 3) = 1;
          *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v11 + 3) = 0;
          a2 = v11;
          goto LABEL_77;
        }
        if ( sub_10094690((_DWORD *)this, a2) )
        {
          a2 = v27;
          sub_100948C0(this, v27);
          v22 = dword_10693990;
          if ( (dword_10693990 & 1) == 0 )
          {
            v22 = dword_10693990 | 1;
            dword_10693990 |= 1u;
            dword_1069398C = 0x1FFFFFF;
          }
          if ( v27 == -1 )
            v23 = &dword_1069398C;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 12 * v27);
          v24 = *((_BYTE *)v23 + 2);
          if ( (v22 & 1) == 0 )
          {
            dword_10693990 = v22 | 1;
            dword_1069398C = 0x1FFFFFF;
          }
          if ( v24 == -1 )
            v11 = BYTE2(dword_1069398C);
          else
            v11 = *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v24 + 2);
          v26 = v11;
        }
        else
        {
          v24 = v27;
        }
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v24 + 3) = 1;
        *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * v11 + 3) = 0;
        sub_10094740(this, v26);
      }
LABEL_77:
      if ( a2 == *(_BYTE *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 3 * *(char *)(this + 16);
  *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *(char *)(this + 16) + 3) = 1;
  return result;
}
