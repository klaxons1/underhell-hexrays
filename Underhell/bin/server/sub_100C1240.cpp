void __thiscall sub_100C1240(int this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  double v5; // st7
  bool v6; // zf
  double v7; // st7
  double v8; // st6
  int v9; // eax
  int v10; // ebx
  double v11; // st7
  int v12; // edi
  _DWORD *v13; // eax
  const char *v14; // eax
  float v15; // [esp+4h] [ebp-44h]
  float v16; // [esp+8h] [ebp-40h]
  int v17; // [esp+Ch] [ebp-3Ch]
  int v18[2]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v19; // [esp+24h] [ebp-24h]
  float v20; // [esp+28h] [ebp-20h]
  int v21; // [esp+30h] [ebp-18h]
  float v22; // [esp+34h] [ebp-14h]
  float v23; // [esp+38h] [ebp-10h]
  float v24; // [esp+3Ch] [ebp-Ch]
  float v25; // [esp+40h] [ebp-8h]
  int v26; // [esp+44h] [ebp-4h]

  if ( 0.0 != *(float *)(this + 864) )
  {
    v3 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
      sub_100BD750((volatile signed __int32 *)this);
    v4 = *(_DWORD **)(this + 1100);
    if ( v4 && *v4 )
    {
      v26 = *(_DWORD *)(this + 1100);
    }
    else
    {
      v26 = 0;
      v4 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    if ( v4 )
    {
      if ( (unsigned __int8)sub_10245FE0(v4) && *(_DWORD *)(sub_10245550(*(_DWORD *)(this + 908)) + 24) )
      {
        v5 = sub_100C0F70(this, *(_DWORD *)(this + 908));
        v6 = *(_BYTE *)(this + 897) == 0;
        v24 = v5 * *(float *)(this + 864);
        v7 = *(float *)(this + 804);
        v22 = *(float *)(this + 804);
        v8 = *(float *)(this + 904);
        v23 = *(float *)(this + 904);
        if ( v6 && *(_BYTE *)(this + 896) )
        {
          v8 = 1.01;
          v23 = 1.01;
        }
        v9 = *(_DWORD *)(this + 908);
        *(float *)(this + 804) = v8;
        v16 = v8;
        v15 = v7;
        v10 = sub_100BA9F0((int)v4, v9, (int)v18, v15, v16, 0);
        if ( v10 )
        {
          while ( 1 )
          {
            v21 = this;
            if ( v24 > 0.0 )
            {
              v25 = v19;
              if ( v19 > (double)*(float *)(this + 904) )
                v25 = v19 - 1.0;
              v11 = sub_100BD360((float *)this);
              v20 = v11 + (v25 - *(float *)(this + 904)) / v24 + *(float *)(this + 124);
            }
            (*(void (__thiscall **)(int, int *))(*(_DWORD *)a2 + 788))(a2, v18);
            v12 = dword_10700AC8;
            (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
            v13 = *(_DWORD **)(this + 1100);
            if ( !v13 )
            {
              if ( sub_100D7240(this) )
                sub_100BD750((volatile signed __int32 *)this);
              v13 = *(_DWORD **)(this + 1100);
              if ( !v13 )
                goto LABEL_25;
            }
            v6 = *v13 == 0;
            v25 = *(float *)&v13;
            if ( v6 )
LABEL_25:
              v25 = 0.0;
            (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
            if ( LODWORD(v25) != v26 )
              break;
            v10 = sub_100BA9F0(v26, *(_DWORD *)(this + 908), (int)v18, v22, v23, v10);
            if ( !v10 )
              return;
          }
          v17 = *(_DWORD *)(this + 908);
          v14 = (const char *)sub_100D6390(this);
          Warning("%s has changed its model while processing AnimEvents on sequence %d. Aborting dispatch.\n", v14, v17);
        }
      }
    }
  }
}
