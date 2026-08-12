void __thiscall sub_100AC830(int *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  char v6; // bl
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  bool v10; // c0
  bool v11; // zf
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  bool v15; // dl
  int v16; // edi
  int v17; // eax
  int v18; // eax
  double v19; // st7
  double v20; // st7
  double v21; // st7
  bool v22; // cl
  int v23; // eax
  double v24; // st7
  double v25; // st7
  float v26; // [esp+8h] [ebp-68h]
  float v27; // [esp+8h] [ebp-68h]
  _BYTE v28[44]; // [esp+14h] [ebp-5Ch] BYREF
  float v29; // [esp+40h] [ebp-30h]
  int v30; // [esp+68h] [ebp-8h]
  bool v31; // [esp+6Ch] [ebp-4h]
  bool v32; // [esp+6Dh] [ebp-3h]
  bool v33; // [esp+6Eh] [ebp-2h]
  bool v34; // [esp+6Fh] [ebp-1h]

  v2 = this[2];
  v3 = *(_DWORD *)(v2 + 40);
  v4 = *(_DWORD *)(v2 + 36);
  v5 = v3 ^ v4;
  v6 = (v3 ^ v4) & v4;
  v7 = this[1];
  v30 = v5 & v3;
  v8 = sub_100F7AF0(v7);
  v9 = this[1];
  v10 = *(float *)(v9 + 3540) > 0.0;
  v11 = v8 == 0;
  v12 = *(_DWORD *)(v9 + 732);
  v31 = v11;
  v33 = (v12 & 2) != 0;
  v34 = v10;
  v32 = *(float *)(v9 + 3536) > 0.0;
  v13 = this[2];
  if ( (*(_BYTE *)(v13 + 36) & 4) != 0 )
    *(_DWORD *)(v13 + 40) |= 4u;
  else
    *(_DWORD *)(v13 + 40) &= ~4u;
  if ( *(int *)(this[1] + 136) <= 0 )
    return;
  (*(void (__thiscall **)(int *))(*this + 168))(this);
  if ( (*(_DWORD *)(this[2] + 36) & 4) != 0 || (v14 = this[1], *(_BYTE *)(v14 + 3529)) )
  {
    v15 = v34;
  }
  else
  {
    v15 = v34;
    if ( !v33 && !v34 )
    {
      if ( *(int *)(v14 + 136) > 0 && !(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 844))(v14) )
      {
        v16 = this[1];
        if ( !sub_10012CD0((_DWORD *)v16)
          && 0.0 == *(float *)(v16 + 3536)
          && fabs(*(float *)(v16 + 228) - *(float *)((*(int (__thiscall **)(int *, _DWORD))(*this + 28))(this, 0) + 8)) > 0.1 )
        {
          DevMsg(1, "Restoring player view height\n");
          sub_100A9640(this, 0.0);
        }
      }
      return;
    }
  }
  if ( (*(_DWORD *)(this[2] + 36) & 4) == 0 && !v15 )
  {
    if ( *(_BYTE *)(this[1] + 3530) )
    {
      if ( sub_100AC760(this, (int)v28) )
      {
        sub_100A94C0(this, (int)v28);
        if ( v29 < 1.0 )
          *(float *)(this[1] + 3536) = (1.0 - v29) * 200.0 + 800.0;
      }
    }
    if ( !v32 )
    {
      v17 = this[1];
      if ( *(_BYTE *)(v17 + 3688) || v31 || *(_BYTE *)(v17 + 3529) )
      {
        if ( (v30 & 4) != 0 )
        {
          if ( v33 )
          {
            *(float *)(v17 + 3532) = 1000.0;
          }
          else if ( *(_BYTE *)(v17 + 3529) && !*(_BYTE *)(v17 + 3528) )
          {
            *(float *)(v17 + 3532) = (1000.0 - *(float *)(v17 + 3532)) * 0.0024999999 * 200.0 + 800.0;
          }
        }
        if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 180))(this) )
        {
          v18 = this[1];
          if ( *(_BYTE *)(v18 + 3529) || *(_BYTE *)(v18 + 3528) )
          {
            v19 = 1000.0 - *(float *)(v18 + 3532);
            if ( v19 < 0.0 )
              v19 = 0.0;
            v20 = v19 * 0.001;
            if ( v20 > 0.2 || v31 )
            {
              (*(void (__thiscall **)(int *))(*this + 172))(this);
            }
            else
            {
              v21 = 1.0 - v20 * 5.0;
              v26 = 3.0 * (v21 * v21) - v21 * (v21 * v21 + v21 * v21);
              sub_100A9640(this, v26);
              *(_BYTE *)(this[1] + 3529) = 1;
            }
          }
        }
        else if ( 1000.0 != *(float *)(this[1] + 3532) )
        {
          sub_100A9640(this, 1.0);
          *(float *)(this[1] + 3532) = 1000.0;
          *(_BYTE *)(this[1] + 3528) = 1;
          *(_BYTE *)(this[1] + 3529) = 0;
          sub_1000DEB0((_DWORD *)this[1], 2);
        }
      }
    }
    return;
  }
  v22 = v33;
  if ( (v6 & 4) != 0 && !v33 && !v15 && !v32 )
  {
    *(float *)(this[1] + 3532) = 1000.0;
    *(_BYTE *)(this[1] + 3529) = 1;
  }
  v23 = this[1];
  if ( *(_BYTE *)(v23 + 3529) )
  {
    if ( !v15 )
    {
      if ( !v32 )
      {
        v24 = 1000.0 - *(float *)(v23 + 3532);
        if ( v24 < 0.0 )
          v24 = 0.0;
        v25 = v24 * 0.001;
        if ( v25 > 0.4 || v22 || v31 )
        {
          (*(void (__thiscall **)(int *))(*this + 176))(this);
        }
        else
        {
          v27 = 3.0 * (v25 * 2.5 * (v25 * 2.5)) - v25 * 2.5 * (v25 * 2.5 * (v25 * 2.5) + v25 * 2.5 * (v25 * 2.5));
          sub_100A9640(this, v27);
        }
      }
      return;
    }
  }
  else if ( !v15 )
  {
    return;
  }
  if ( v22 )
  {
    if ( (*(_BYTE *)(this[2] + 36) & 4) == 0 && sub_100AC760(this, (int)v28) )
    {
      sub_100A94C0(this, (int)v28);
      *(float *)(this[1] + 3536) = (1.0 - v29) * 200.0 + 800.0;
    }
  }
  else
  {
    sub_100AC650(this);
  }
}
