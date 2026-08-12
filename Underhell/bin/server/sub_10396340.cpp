void __thiscall sub_10396340(int this, _DWORD *a2, int a3)
{
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  double v10; // st6
  double v11; // st5
  float *v12; // eax
  int (__thiscall *v13)(int, _BYTE *); // edx
  float *v14; // eax
  float *v15; // ebx
  float *v16; // eax
  double v17; // st6
  double v18; // st5
  float *v19; // ebx
  float *v20; // eax
  double v21; // st6
  double v22; // st5
  _BYTE v23[12]; // [esp+Ch] [ebp-2Ch] BYREF
  _BYTE v24[12]; // [esp+18h] [ebp-20h] BYREF
  float v25; // [esp+24h] [ebp-14h]
  float v26; // [esp+28h] [ebp-10h]
  _BYTE v27[4]; // [esp+2Ch] [ebp-Ch] BYREF
  float v28; // [esp+30h] [ebp-8h] BYREF
  float v29; // [esp+34h] [ebp-4h]
  float *v30; // [esp+44h] [ebp+Ch]
  float *v31; // [esp+44h] [ebp+Ch]

  v4 = *(_DWORD *)(this + 3624);
  if ( v4 )
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v4 + 188))(v4, a2, a3);
  else
    sub_100236C0((float *)this, (int)a2, a3);
  v5 = (_DWORD *)sub_100D7680(a3);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 876))(a2, v5)
      && ((*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) && sub_10023D10((_DWORD *)this, 32)
       || sub_100D7680((int)a2)
       && (v6 = sub_100D7680((int)a2), (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 1528))(v6, 0))
       && sub_100AB270(*(_DWORD ***)(this + 2404), (int)a2)) )
    {
      if ( (v5[63] & 0x800) != 0 )
        sub_100DAE60((int)v5);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)this + 1876))(this, v5, v5 + 145, a2);
    }
    else if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)this + 548))(
                this,
                a2,
                16449,
                0) )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
      v8 = sub_100773C0(v7, (int)v5, 0);
      if ( !v8 || *(float *)(dword_106B31C8 + 12) - *(float *)(v8 + 28) > 15.0 )
      {
        if ( (a2[63] & 0x800) != 0 )
          sub_100DAE60((int)a2);
        (*(void (__thiscall **)(int, _DWORD *, _DWORD *, _DWORD *))(*(_DWORD *)this + 1876))(this, v5, a2 + 145, a2);
      }
    }
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v9 = sub_10261B20();
      if ( v9 )
      {
        if ( sub_100296A0((_DWORD *)this) )
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
            sub_100DAE60(v9);
          v10 = *(float *)(v9 + 584) - *(float *)(this + 584);
          v11 = *(float *)(v9 + 580) - *(float *)(this + 580);
          if ( v11 * v11 + v10 * v10 < 90000.0 && sub_10096EA0((_DWORD *)this, "TLK_WATCHOUT", 0) )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v9 + 876))(v9, v5) )
            {
              v31 = (float *)(sub_10019640(v5) + 2);
              if ( *v31 - *((float *)sub_10019640((_DWORD *)v9) + 2) <= 128.0 )
              {
                if ( (int)v5[419] <= 3 )
                {
                  v19 = (float *)sub_10019640(v5);
                  v20 = (float *)sub_10019640((_DWORD *)v9);
                  v21 = v20[1] - v19[1];
                  v22 = *v20 - *v19;
                  if ( v22 * v22 + v21 * v21 > 1440000.0 )
                    (*(void (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
                      this,
                      "TLK_WATCHOUT",
                      "dangerloc:far",
                      0,
                      0,
                      0);
                }
              }
              else
              {
                (*(void (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
                  this,
                  "TLK_WATCHOUT",
                  "dangerloc:above",
                  0,
                  0,
                  0);
              }
            }
            else
            {
              v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 920))(v9, v27);
              v25 = *v12;
              v13 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v9 + 504);
              v26 = v12[1];
              v30 = (float *)v13(v9, v24);
              v14 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v5 + 504))(v5, v23);
              v28 = *v14 - *v30;
              v29 = v14[1] - v30[1];
              sub_100196B0(&v28);
              if ( v26 * v29 + v28 * v25 >= 0.0 )
              {
                v15 = (float *)sub_10019640(v5);
                v16 = (float *)sub_10019640((_DWORD *)v9);
                v17 = v16[1] - v15[1];
                v18 = *v16 - *v15;
                if ( v18 * v18 + v17 * v17 > 230400.0 )
                  (*(void (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this
                                                                                                  + 2244))(
                    this,
                    "TLK_WATCHOUT",
                    "dangerloc:far",
                    0,
                    0,
                    0);
              }
              else
              {
                (*(void (__thiscall **)(int, const char *, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
                  this,
                  "TLK_WATCHOUT",
                  "dangerloc:behind",
                  0,
                  0,
                  0);
              }
            }
          }
        }
      }
    }
  }
}
