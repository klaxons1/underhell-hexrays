void __thiscall sub_101C7250(_WORD *this)
{
  _DWORD *v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // ebx
  int *v8; // ecx
  unsigned int v9; // edx
  int v10; // esi
  int v11; // ecx
  const char *v12; // edx
  const void *v13; // eax
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+24h] [ebp-8h]
  int i; // [esp+28h] [ebp-4h]

  v1 = this;
  if ( this[9] )
  {
    Msg("-----------------\nThink report frame %i\n", *(_DWORD *)(dword_106B31C8 + 24));
    for ( i = (unsigned __int16)sub_101C60F0((int)v1); i != 0xFFFF; i = (unsigned __int16)sub_101C61C0(v1, i) )
    {
      v2 = v1[1];
      v3 = v2 + 36 * (unsigned __int16)i + 8;
      v15 = v3;
      if ( v2 + 36 * (unsigned __int16)i != -8 )
      {
        v4 = *(_DWORD *)(v2 + 36 * (unsigned __int16)i + 28);
        v14 = v4;
        if ( v4 )
        {
          Msg("thinktime %f, %i entities\n", *(float *)v3, v4);
          v5 = 0;
          if ( v4 > 0 )
          {
            while ( 1 )
            {
              v6 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5);
              v7 = 0;
              v17 = 0;
              if ( v6 == -1 )
                goto LABEL_19;
              v8 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(v3 + 8) + 4 * v5) & 0xFFF) + 1];
              v9 = v6 >> 12;
              if ( off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
                goto LABEL_19;
              v10 = *v8;
              if ( *v8 )
              {
                v7 = *(_DWORD *)(v10 + 132);
                v17 = *(_DWORD *)(v10 + 188);
              }
              if ( off_1061BE18[4 * (v6 & 0xFFF) + 2] == v9 && *v8 )
              {
                if ( off_1061BE18[4 * (v6 & 0xFFF) + 2] == v9 )
                  v11 = *v8;
                else
                  v11 = 0;
                v12 = *(const char **)(v11 + 92);
                if ( !v12 )
                  v12 = String;
              }
              else
              {
LABEL_19:
                v12 = "NULL";
              }
              v13 = v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12
                  ? 0
                  : (const void *)off_1061BE18[4 * (v6 & 0xFFF) + 1];
              Msg("  %p : %30s (last %5i/next %5i)\n", v13, v12, v7, v17);
              if ( ++v5 >= v14 )
                break;
              v3 = v15;
            }
          }
          v1 = this;
        }
      }
    }
  }
}
