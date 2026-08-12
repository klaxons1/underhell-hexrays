int __thiscall sub_10075FC0(int this, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  int v4; // ecx
  int *v5; // eax
  unsigned __int8 v6; // al
  int *v7; // eax
  int *v8; // eax
  unsigned __int8 v9; // al
  int *v10; // eax
  unsigned __int8 v11; // bl
  bool v12; // al
  int v13; // edx
  int *v14; // eax
  unsigned __int8 v15; // cl
  int *v16; // eax
  int v17; // eax
  int *v18; // ecx
  unsigned __int8 v19; // cl
  int *v20; // eax
  int *v21; // eax
  int v22; // eax
  int *v23; // ecx
  unsigned __int8 v24; // cl
  int result; // eax
  unsigned __int8 v26; // [esp+4h] [ebp-8h]
  unsigned __int8 v27; // [esp+8h] [ebp-4h]

  v2 = a2;
  if ( a2 != *(_BYTE *)(this + 16) )
  {
    while ( 1 )
    {
      v4 = dword_106931E0;
      if ( (dword_106931E0 & 1) == 0 )
      {
        v4 = dword_106931E0 | 1;
        dword_106931E0 |= 1u;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v2 == 0xFF )
        v5 = &dword_106931DC;
      else
        v5 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      v6 = *((_BYTE *)v5 + 2);
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106931E0 = v4;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v6 == 0xFF )
        v7 = &dword_106931DC;
      else
        v7 = (int *)(*(_DWORD *)(this + 4) + 12 * v6);
      if ( *((_BYTE *)v7 + 3) )
        break;
      if ( (v4 & 1) == 0 )
      {
        v4 |= 1u;
        dword_106931E0 = v4;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v2 == 0xFF )
        v8 = &dword_106931DC;
      else
        v8 = (int *)(*(_DWORD *)(this + 4) + 12 * v2);
      v9 = *((_BYTE *)v8 + 2);
      v27 = v9;
      if ( (v4 & 1) == 0 )
      {
        dword_106931E0 = v4 | 1;
        dword_106931DC = 0x1FFFFFF;
      }
      if ( v9 == 0xFF )
        v10 = &dword_106931DC;
      else
        v10 = (int *)(*(_DWORD *)(this + 4) + 12 * v9);
      v11 = *((_BYTE *)v10 + 2);
      v26 = v11;
      v12 = sub_10075B30((_DWORD *)this, v27);
      v13 = dword_106931E0;
      if ( v12 )
      {
        if ( (dword_106931E0 & 1) == 0 )
        {
          v13 = dword_106931E0 | 1;
          dword_106931E0 |= 1u;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v11 == 0xFF )
          v14 = &dword_106931DC;
        else
          v14 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
        v15 = *((_BYTE *)v14 + 1);
        if ( (v13 & 1) == 0 )
        {
          dword_106931E0 = v13 | 1;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v15 == 0xFF )
          v16 = &dword_106931DC;
        else
          v16 = (int *)(*(_DWORD *)(this + 4) + 12 * v15);
        if ( !*((_BYTE *)v16 + 3) )
          goto LABEL_62;
        if ( sub_100759B0((_DWORD *)this, a2) )
        {
          a2 = v27;
          sub_10075CC0(this, v27);
          v17 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v17 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v27 == 0xFF )
            v18 = &dword_106931DC;
          else
            v18 = (int *)(*(_DWORD *)(this + 4) + 12 * v27);
          v19 = *((_BYTE *)v18 + 2);
          if ( (v17 & 1) == 0 )
          {
            dword_106931E0 = v17 | 1;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v19 == 0xFF )
            v11 = BYTE2(dword_106931DC);
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
        sub_10075E40(this, v26);
      }
      else
      {
        if ( (dword_106931E0 & 1) == 0 )
        {
          v13 = dword_106931E0 | 1;
          dword_106931E0 |= 1u;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v11 == 0xFF )
          v20 = &dword_106931DC;
        else
          v20 = (int *)(*(_DWORD *)(this + 4) + 12 * v11);
        v15 = *(_BYTE *)v20;
        if ( (v13 & 1) == 0 )
        {
          dword_106931E0 = v13 | 1;
          dword_106931DC = 0x1FFFFFF;
        }
        if ( v15 == 0xFF )
          v21 = &dword_106931DC;
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
        if ( sub_10075B30((_DWORD *)this, a2) )
        {
          a2 = v27;
          sub_10075E40(this, v27);
          v22 = dword_106931E0;
          if ( (dword_106931E0 & 1) == 0 )
          {
            v22 = dword_106931E0 | 1;
            dword_106931E0 |= 1u;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v27 == 0xFF )
            v23 = &dword_106931DC;
          else
            v23 = (int *)(*(_DWORD *)(this + 4) + 12 * v27);
          v24 = *((_BYTE *)v23 + 2);
          if ( (v22 & 1) == 0 )
          {
            dword_106931E0 = v22 | 1;
            dword_106931DC = 0x1FFFFFF;
          }
          if ( v24 == 0xFF )
            v11 = BYTE2(dword_106931DC);
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
        sub_10075CC0(this, v26);
      }
LABEL_77:
      if ( a2 == *(_BYTE *)(this + 16) )
        break;
      v2 = a2;
    }
  }
  result = 3 * *(unsigned __int8 *)(this + 16);
  *(_BYTE *)(*(_DWORD *)(this + 4) + 12 * *(unsigned __int8 *)(this + 16) + 3) = 1;
  return result;
}
