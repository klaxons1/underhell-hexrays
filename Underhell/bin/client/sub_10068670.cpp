void __thiscall sub_10068670(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  bool v5; // cc
  int v6; // ebx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // eax
  int v16; // eax

  nullsub_4();
  if ( *(_BYTE *)(this + 1180) && *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 1492) )
  {
    v2 = 0;
    *(float *)(this + 1492) = RandomFloat(*(float *)(this + 1484), *(float *)(this + 1488))
                            + *((float *)off_103DC81C + 3);
    while ( *(_BYTE *)(this + v2 + 1460) != 0xFF )
    {
      if ( *(_BYTE *)(v2 + this + 1461) == 0xFF )
      {
        ++v2;
        break;
      }
      if ( *(_BYTE *)(v2 + this + 1462) == 0xFF )
      {
        v2 += 2;
        break;
      }
      if ( *(_BYTE *)(v2 + this + 1463) == 0xFF )
      {
        v2 += 3;
        break;
      }
      v2 += 4;
      if ( v2 >= 16 )
        break;
    }
    if ( v2 )
    {
      v3 = *(_DWORD *)(this + 1496);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 && *(int *)(this + 1504) < 0 )
            *(_DWORD *)(this + 1504) = v2 - 1;
          goto LABEL_26;
        }
        v5 = *(_DWORD *)(this + 1504) < v2;
      }
      else
      {
        v6 = *(_DWORD *)(this + 1504);
        v7 = RandomInt(0, v2 - 1);
        v8 = *(_BYTE *)(this + 1500) == 0;
        *(_DWORD *)(this + 1504) = v7;
        if ( v8 || v2 <= 1 || v7 != v6 )
        {
LABEL_26:
          v10 = *(_DWORD *)(this + 1504);
          v11 = *(_DWORD *)(this + 1440);
          v12 = *(_DWORD **)(v11 + 4 * *(unsigned __int8 *)(v10 + this + 1460));
          v13 = *(_DWORD *)(this + 1496);
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              if ( v14 == 1 && --*(_DWORD *)(this + 1508) < 0 )
              {
                *(_DWORD *)(this + 1504) = v10 - 1;
                if ( v10 - 1 < 0 )
                  *(_DWORD *)(this + 1504) = v2 - 1;
                v12 = *(_DWORD **)(v11 + 4 * *(unsigned __int8 *)(this + *(_DWORD *)(this + 1504) + 1460));
                *(_DWORD *)(this + 1508) = v12[19] - 1;
              }
            }
            else if ( ++*(_DWORD *)(this + 1508) >= v12[19] )
            {
              *(_DWORD *)(this + 1504) = v10 + 1;
              if ( v10 + 1 >= v2 )
                *(_DWORD *)(this + 1504) = 0;
              v12 = *(_DWORD **)(v11 + 4 * *(unsigned __int8 *)(this + *(_DWORD *)(this + 1504) + 1460));
              *(_DWORD *)(this + 1508) = 0;
            }
          }
          else
          {
            *(_DWORD *)(this + 1508) = RandomInt(0, v12[19] - 1);
          }
          v16 = 4 * *(_DWORD *)(this + 1508);
          *(_DWORD *)(this + 1476) = *(_DWORD *)(v16 + v12[16]);
          *(_DWORD *)(this + 1480) = *(_DWORD *)(v16 + v12[21]);
          return;
        }
        v9 = v7 + 1;
        *(_DWORD *)(this + 1504) = v9;
        v5 = v9 < v2;
      }
      if ( !v5 )
        *(_DWORD *)(this + 1504) = 0;
      goto LABEL_26;
    }
  }
}
