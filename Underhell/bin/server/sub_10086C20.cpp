void __thiscall sub_10086C20(_DWORD *this)
{
  int v1; // edi
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int *v15; // esi
  int *v16; // edx
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v20; // [esp+4h] [ebp-4h]

  if ( !*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) )
  {
    DevMsg("ERROR: Trying initialize links with no WC ID table!\n");
    return;
  }
  v1 = dword_10692E2C;
  v20 = dword_10692E2C;
  if ( dword_10692E2C )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(v1 + 804);
      v3 = *(_DWORD *)(dword_10693628 + 804);
      if ( v2 == -1 )
        break;
      v5 = *(_DWORD **)(v3 + 12);
      if ( !v5 )
      {
        DevMsg("ERROR: Trying to get WC ID with no table!\n");
        v4 = -1;
        goto LABEL_17;
      }
      v6 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 4);
      if ( !v6 )
      {
        DevMsg("ERROR: Trying to get WC ID with no network!\n");
        v4 = -1;
        goto LABEL_17;
      }
      v7 = 0;
      if ( v6 <= 0 )
        break;
      while ( *v5 != v2 )
      {
        ++v7;
        ++v5;
        if ( v7 >= v6 )
        {
          v4 = -1;
          goto LABEL_17;
        }
      }
      v4 = v7;
      if ( v7 == -1 )
        goto LABEL_17;
LABEL_18:
      v8 = *(_DWORD *)(v1 + 808);
      v9 = *(_DWORD *)(dword_10693628 + 804);
      if ( v8 == -1 )
        goto LABEL_19;
      v11 = *(_DWORD **)(v9 + 12);
      if ( !v11 )
      {
        DevMsg("ERROR: Trying to get WC ID with no table!\n");
        v10 = -1;
        goto LABEL_29;
      }
      v12 = *(_DWORD *)(*(_DWORD *)(v9 + 20) + 4);
      if ( !v12 )
      {
        DevMsg("ERROR: Trying to get WC ID with no network!\n");
        v10 = -1;
        goto LABEL_29;
      }
      v13 = 0;
      if ( v12 <= 0 )
      {
LABEL_19:
        v10 = -1;
LABEL_29:
        DevMsg("ERROR: Dynamic link dest WC node %d not found\n", *(_DWORD *)(v20 + 808));
        goto LABEL_30;
      }
      while ( *v11 != v8 )
      {
        ++v13;
        ++v11;
        if ( v13 >= v12 )
        {
          v10 = -1;
          goto LABEL_29;
        }
      }
      v10 = v13;
      if ( v13 == -1 )
        goto LABEL_29;
LABEL_30:
      if ( v4 != -1 && v10 != -1 )
      {
        v14 = *(_DWORD *)(dword_106935D8 + 4);
        if ( v4 < v14 && v10 < v14 )
        {
          if ( v4 < 0 )
          {
            ++dword_10691DE0;
            v15 = 0;
          }
          else
          {
            v15 = *(int **)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v4);
          }
          if ( v10 < 0 || v10 >= *(_DWORD *)(dword_106935D8 + 4) )
          {
            ++dword_10691DE0;
            v16 = 0;
          }
          else
          {
            v16 = *(int **)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v10);
          }
          v17 = (_DWORD *)(*(_DWORD *)(*this + 12 * *v15 + 8) + 4 * (*v16 >> 5));
          *v17 |= 1 << (*v16 & 0x1F);
          v18 = (_DWORD *)(*(_DWORD *)(*this + 12 * *v16 + 8) + 4 * (*v15 >> 5));
          *v18 |= 1 << (*(_BYTE *)v15 & 0x1F);
        }
      }
      v20 = *(_DWORD *)(v20 + 800);
      if ( !v20 )
        return;
      v1 = v20;
    }
    v4 = -1;
LABEL_17:
    DevMsg("ERROR: Dynamic link source WC node %d not found\n", *(_DWORD *)(v1 + 804));
    goto LABEL_18;
  }
}
