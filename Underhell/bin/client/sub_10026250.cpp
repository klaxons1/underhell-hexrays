void __thiscall sub_10026250(int this)
{
  int v2; // ecx
  int v3; // edi
  int v4; // ebx
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  double v8; // st6
  double v9; // st6
  int v10; // eax
  double v11; // st6
  double v12; // st6
  double v13; // st6
  double v14; // st6
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // ecx
  float v18; // [esp+Ch] [ebp-18h]
  float v19; // [esp+Ch] [ebp-18h]
  float v20; // [esp+Ch] [ebp-18h]
  float v21; // [esp+10h] [ebp-14h]
  float v22; // [esp+10h] [ebp-14h]
  float v23; // [esp+10h] [ebp-14h]
  float v24; // [esp+20h] [ebp-4h]
  float v25; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(this + 1992) != -2 )
  {
    v2 = *(_DWORD *)(this + 1192);
    if ( v2 )
    {
      v3 = v2 + 4;
      v4 = (*(int (**)(void))(*(_DWORD *)v2 + 16))();
      if ( v3 )
      {
        v5 = 0.0;
        switch ( *(_DWORD *)(this + 1992) )
        {
          case 0xFFFFFFFF:
            v6 = *(_DWORD *)(v3 + 696);
            *(_DWORD *)(this + 1976) = v6;
            v7 = *(_DWORD *)(v3 + 700);
            *(_DWORD *)(this + 1980) = v7;
            if ( !v6 && !v7 )
              goto LABEL_13;
            *(_DWORD *)(this + 1992) = 0;
            v8 = *(float *)(v3 + 684);
            *(float *)(this + 1984) = *(float *)(v3 + 684);
            v9 = v8 + *((float *)off_103DC81C + 3);
            *(_DWORD *)(this + 1972) = v6;
            *(float *)(this + 1988) = v9;
            break;
          case 0:
            v24 = *(float *)(this + 1988) - *((float *)off_103DC81C + 3);
            v21 = (float)*(int *)(this + 1980);
            v18 = (float)*(int *)(this + 1976);
            v10 = (int)sub_100260E0(v24, *(float *)(this + 1984), 0.0, v18, v21);
            v5 = 0.0;
            *(_DWORD *)(this + 1972) = v10;
            if ( v24 <= 0.0 )
            {
              v11 = *(float *)(v3 + 692);
              *(float *)(this + 1984) = *(float *)(v3 + 692);
              v12 = v11 + *((float *)off_103DC81C + 3);
              *(_DWORD *)(this + 1992) = 1;
              *(float *)(this + 1988) = v12;
            }
            break;
          case 1:
            if ( *((float *)off_103DC81C + 3) > (double)*(float *)(this + 1988) )
            {
              v13 = *(float *)(v3 + 688);
              *(float *)(this + 1984) = *(float *)(v3 + 688);
              v14 = v13 + *((float *)off_103DC81C + 3);
              *(_DWORD *)(this + 1992) = 2;
              *(float *)(this + 1988) = v14;
            }
            break;
          case 2:
            v25 = *(float *)(this + 1988) - *((float *)off_103DC81C + 3);
            v22 = (float)*(int *)(this + 1980);
            v19 = (float)*(int *)(this + 1976);
            v15 = (int)sub_100260E0(v25, 0.0, *(float *)(this + 1984), v19, v22);
            v5 = 0.0;
            *(_DWORD *)(this + 1972) = v15;
            if ( v25 <= 0.0 )
LABEL_13:
              *(_DWORD *)(this + 1992) = -2;
            break;
          default:
            break;
        }
        if ( v4 > 0 )
        {
          v16 = (_DWORD *)(v3 + 28);
          do
          {
            if ( *v16 )
            {
              v23 = (float)*(int *)(this + 1972);
              v20 = v5;
              (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*v16 + 32))(*v16, LODWORD(v20), LODWORD(v23));
              v5 = 0.0;
            }
            v16 += 6;
            --v4;
          }
          while ( v4 );
        }
        v17 = *(_DWORD *)(this + 184);
        if ( v17 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 96))(v17);
      }
    }
  }
}
