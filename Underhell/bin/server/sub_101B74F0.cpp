int __thiscall sub_101B74F0(_DWORD *this)
{
  _DWORD *v1; // ebx
  int result; // eax
  int v3; // edx
  int v4; // edx
  _DWORD *v5; // edi
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // ecx
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  int i; // [esp+18h] [ebp-8h]

  v1 = this;
  result = this[75] - 1;
  v14 = result;
  if ( result >= 0 )
  {
    v3 = 20 * result;
    for ( i = 20 * result; ; v3 = i )
    {
      v4 = v1[72] + v3;
      if ( *(_DWORD *)v4 == -1 || off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] != *(_DWORD *)v4 >> 12 )
        v5 = 0;
      else
        v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1];
      v15 = (int)v5;
      if ( *(_DWORD *)(v4 + 4) == -1 || off_1061BE18[4 * (*(_DWORD *)(v4 + 4) & 0xFFF) + 2] != *(_DWORD *)(v4 + 4) >> 12 )
        v6 = 0;
      else
        v6 = off_1061BE18[4 * (*(_DWORD *)(v4 + 4) & 0xFFF) + 1];
      v7 = *(_DWORD *)(v4 + 16);
      if ( v7 == 1 )
      {
        if ( v5 && v6 )
        {
          if ( v5[106] )
            sub_101B5BD0(v5, v5[106]);
          if ( *(_DWORD *)(v6 + 424) )
            sub_101B5BD0((_DWORD *)v6, *(_DWORD *)(v6 + 424));
          *(_DWORD *)(i + v1[72] + 16) = 4;
          goto LABEL_42;
        }
      }
      else
      {
        if ( v7 == 2 )
        {
          if ( !v5 || !v6 )
            goto LABEL_44;
          v8 = sub_100D7680((int)v5);
          v9 = v6;
          if ( !v8 )
          {
            v8 = sub_100D7680(v6);
            v9 = (int)v5;
          }
          sub_101CABB0(v8, v9, 1, 1.0);
        }
        else
        {
          if ( v7 == 3 )
          {
            if ( v5 && v6 )
            {
              if ( (unsigned int)(*(_DWORD *)(v6 + 420) - 1) > 2 || *(_BYTE *)(v6 + 306) != 6 )
              {
                v15 = v6;
                v6 = (int)v5;
              }
              sub_101CA9F0(v15, v6, 1, 1.0);
            }
            goto LABEL_44;
          }
          if ( *(float *)(dword_106B31C8 + 12) - *(float *)(v4 + 12) <= 1.0 )
            goto LABEL_41;
          if ( v7 == 4 && v5 && v6 && v5[106] && *(_DWORD *)(v6 + 424) )
          {
            *(_DWORD *)(v4 + 16) = 0;
LABEL_41:
            v1 = this;
            goto LABEL_42;
          }
        }
        v1 = this;
      }
LABEL_44:
      v10 = v1[75];
      if ( v10 > 0 )
      {
        v11 = v1[72];
        v12 = (_DWORD *)(v11 + 20 * v10 - 20);
        v13 = (_DWORD *)(i + v11);
        *v13 = *v12;
        v13[1] = v12[1];
        v13[2] = v12[2];
        v13[3] = v12[3];
        v13[4] = v12[4];
        --v1[75];
      }
      sub_101B5940(v15, v6, 0);
      sub_101B5940(v6, v6, 0);
LABEL_42:
      i -= 20;
      result = v14 - 1;
      v14 = result;
      if ( result < 0 )
        return result;
    }
  }
  return result;
}
