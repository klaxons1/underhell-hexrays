void __thiscall sub_10028EA0(float *this, int a2)
{
  char v3; // bl
  char v4; // al
  float v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // ebx
  char *v8; // edi
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  double v12; // st7
  float *v13; // edi
  float v14; // ebx
  int v15; // eax
  int v16; // eax
  float *v17; // edi
  float v18; // ebx
  int v19; // eax
  int v20; // eax
  char *v21; // [esp+8h] [ebp-Ch]
  _DWORD *v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]
  int v24; // [esp+10h] [ebp-4h]
  float v25; // [esp+1Ch] [ebp+8h]

  if ( a2 && *((_DWORD *)this + 452) != -1 )
  {
    v25 = this[454];
    if ( *((_WORD *)this + 59) != 0xFFFF
      || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 724))(this)
      || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 732))(this) )
    {
      v3 = 0;
    }
    else
    {
      v3 = 1;
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
        return;
    }
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 588))(this) )
    {
      v4 = *((_BYTE *)this + 1936);
      if ( *((_BYTE *)this + 1937) != v4 )
      {
        v5 = *this;
        *((_BYTE *)this + 1937) = v4;
        (*(void (__thiscall **)(float *))(LODWORD(v5) + 708))(this);
      }
      if ( !v3 )
      {
        v6 = (_DWORD *)sub_10127960(*((_DWORD *)this + 452));
        v7 = v6;
        v22 = v6;
        if ( v6[6] )
        {
          v8 = sub_100088C0(v6);
          v9 = *((_DWORD *)this + 442);
          v10 = v9 == *((_DWORD *)this + 444);
          *((_DWORD *)this + 444) = v9;
          v11 = *((_DWORD *)this + 452);
          v21 = v8;
          if ( *((_DWORD *)this + 420) == v11 && v10 )
          {
            v12 = v25;
          }
          else
          {
            v12 = 0.0;
            *((_DWORD *)this + 420) = v11;
            v25 = 0.0;
            this[419] = -0.0099999998;
          }
          if ( this[419] != v12 )
          {
            if ( v12 > this[419] )
              goto LABEL_31;
            if ( this[419] - v12 > 0.5 )
            {
              v23 = 0;
              if ( (int)v7[6] <= 0 )
                goto LABEL_30;
              v13 = (float *)(v8 + 8);
              while ( 1 )
              {
                if ( (*(_DWORD *)v13 & 0x400) != 0 )
                {
                  if ( (*(_DWORD *)v13 & 0x10) != 0 )
                    goto LABEL_26;
                }
                else if ( *((int *)v13 - 1) >= 5000 )
                {
LABEL_26:
                  if ( this[419] < (double)*(v13 - 2) )
                  {
                    v14 = *this;
                    v15 = (*(int (__thiscall **)(float *, _DWORD, _DWORD *))(*(_DWORD *)this + 40))(
                            this,
                            *((_DWORD *)v13 - 1),
                            (_DWORD *)v13 + 1);
                    v16 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 36))(this, v15);
                    (*(void (__thiscall **)(float *, int))(LODWORD(v14) + 640))(this, v16);
                    v12 = v25;
                    v7 = v22;
                  }
                }
                v13 += 20;
                if ( ++v23 >= v7[6] )
                {
                  v8 = v21;
LABEL_30:
                  this[419] = -0.0099999998;
LABEL_31:
                  v24 = 0;
                  if ( (int)v7[6] > 0 )
                  {
                    v17 = (float *)(v8 + 8);
                    do
                    {
                      if ( (*(_DWORD *)v17 & 0x400) != 0 )
                      {
                        if ( (*(_DWORD *)v17 & 0x10) != 0 )
                          goto LABEL_37;
                      }
                      else if ( *((int *)v17 - 1) >= 5000 )
                      {
LABEL_37:
                        if ( this[419] < (double)*(v17 - 2) && v12 >= *(v17 - 2) )
                        {
                          v18 = *this;
                          v19 = (*(int (__thiscall **)(float *, _DWORD, _DWORD *))(*(_DWORD *)this + 40))(
                                  this,
                                  *((_DWORD *)v17 - 1),
                                  (_DWORD *)v17 + 1);
                          v20 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 36))(this, v19);
                          (*(void (__thiscall **)(float *, int))(LODWORD(v18) + 640))(this, v20);
                          v12 = v25;
                          v7 = v22;
                        }
                      }
                      v17 += 20;
                      ++v24;
                    }
                    while ( v24 < v7[6] );
                  }
                  this[419] = v12;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}
