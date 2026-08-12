int __thiscall sub_100C65F0(int this)
{
  double v2; // st7
  int v3; // esi
  float v4; // eax
  double v5; // st6
  bool v6; // c0
  double v7; // st7
  const char *v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  int result; // eax
  int v13; // ebx
  int v14; // esi
  int v15; // ecx
  double v16; // st7
  int v17; // eax
  int v18; // esi
  const char *v19; // eax
  double v20; // [esp+0h] [ebp-30h]
  double v21; // [esp+0h] [ebp-30h]
  double v22; // [esp+8h] [ebp-28h]
  double v23; // [esp+1Ch] [ebp-14h] BYREF
  int v24; // [esp+24h] [ebp-Ch]
  float v25; // [esp+28h] [ebp-8h]
  int v26; // [esp+2Ch] [ebp-4h]

  v25 = sub_100BD360((float *)this);
  sub_100C27A0(this);
  v26 = 0;
  if ( *(int *)(this + 1132) > 0 )
  {
    v2 = 0.0;
    v24 = 0;
    do
    {
      v3 = v24 + *(_DWORD *)(this + 1120);
      v4 = *(float *)v3;
      if ( (*(_DWORD *)v3 & 1) != 0 )
      {
        if ( (LOBYTE(v4) & 4) != 0 )
        {
          if ( v2 >= *(float *)(v3 + 40) )
          {
            if ( *(float *)(v3 + 20) == v2 )
            {
              if ( *(_DWORD *)(dword_10695FE4 + 48) && (*(_DWORD *)(this + 236) & 0x1000) != 0 )
              {
                v22 = *(float *)(v3 + 20);
                v20 = *(float *)(v3 + 12);
                v8 = sub_100BE1F0(this, *(_DWORD *)(v3 + 8));
                Msg("removing %d (%d): %s : %5.3f (%.3f)\n", v26, *(_DWORD *)(v3 + 60), v8, v20, v22);
              }
              sub_100C6520((_DWORD *)this, v26);
              goto LABEL_36;
            }
            *((float *)&v23 + 1) = *(float *)(v3 + 36) * v25;
            sub_100C5820((float *)(v3 + 20), (float *)&v23 + 1);
            if ( *(float *)(v3 + 20) <= 1.0 )
            {
              if ( *(float *)(v3 + 20) >= 0.0 )
                v23 = *(float *)(v3 + 20);
              else
                v23 = 0.0;
              sub_100C57C0((float *)(v3 + 20), &v23);
            }
            else
            {
              v23 = 1.0;
              sub_100C57C0((float *)(v3 + 20), &v23);
            }
          }
          else
          {
            v5 = *(float *)(v3 + 40) - v25;
            *(float *)(v3 + 40) = v5;
            if ( v5 <= 1.0 )
            {
              v6 = v5 < v2;
              v7 = v5;
              if ( v6 )
                v7 = 0.0;
              *(float *)(v3 + 40) = v7;
            }
            else
            {
              *(float *)(v3 + 40) = 1.0;
            }
          }
        }
        sub_100C5DE0(v3, v25, *(float *)&this);
        if ( !*(_BYTE *)(v3 + 4) || (*(_DWORD *)v3 & 2) == 0 )
          goto LABEL_37;
        v2 = 0.0;
        v9 = *(_DWORD *)(v3 + 20);
        *((float *)&v23 + 1) = 0.0;
        if ( v9 == COERCE_INT(0.0) )
          goto LABEL_31;
        v10 = *(_DWORD *)(v3 + 72);
        if ( !v10 )
          goto LABEL_30;
        if ( !*(_BYTE *)(v10 + 84) )
        {
          v11 = *(_DWORD **)(v10 + 24);
          if ( v11 )
          {
            *v11 |= 0x101u;
            v2 = 0.0;
            *(_WORD *)(sub_10153460(v11) + 2) = 0;
          }
LABEL_30:
          *(float *)(v3 + 20) = v2;
LABEL_31:
          *(_DWORD *)v3 |= 4u;
          goto LABEL_38;
        }
        *(_BYTE *)(v10 + 88) |= 1u;
        *(float *)(v3 + 20) = 0.0;
        *(_DWORD *)v3 |= 4u;
      }
      else if ( (LOBYTE(v4) & 0x20) != 0 )
      {
        *(_DWORD *)v3 = LODWORD(v4) & 0xFFFFFFDF;
      }
      else if ( v2 < *(float *)(v3 + 20) )
      {
        sub_100C5C50((float *)v3, this);
LABEL_36:
        *(_DWORD *)v3 |= 0x20u;
LABEL_37:
        v2 = 0.0;
      }
LABEL_38:
      v24 += 76;
      ++v26;
    }
    while ( v26 < *(_DWORD *)(this + 1132) );
  }
  result = dword_10695FE4;
  if ( *(_DWORD *)(dword_10695FE4 + 48) )
  {
    if ( (*(_DWORD *)(this + 236) & 0x1000) != 0 )
    {
      v13 = 0;
      if ( *(int *)(this + 1132) > 0 )
      {
        v14 = 0;
        v24 = 0;
        do
        {
          v15 = *(_DWORD *)(this + 1120);
          if ( (*(_BYTE *)(v14 + v15) & 1) != 0 )
          {
            v16 = *(float *)(v14 + v15 + 20);
            v17 = *(_DWORD *)(v14 + v15 + 8);
            v18 = v15 + v14;
            v21 = *(float *)(v18 + 12);
            v19 = sub_100BE1F0(this, v17);
            result = Msg(" %d (%d): %s : %5.3f (%.3f)\n", v13, *(_DWORD *)(v18 + 60), v19, v21, v16);
            v14 = v24;
          }
          ++v13;
          v14 += 76;
          v24 = v14;
        }
        while ( v13 < *(_DWORD *)(this + 1132) );
      }
    }
  }
  return result;
}
