void __thiscall sub_100E2260(float *this, int a2)
{
  double v3; // st7
  int v4; // ebx
  bool v5; // al
  int v6; // ecx
  int v7; // eax
  double v8; // st6
  double v9; // st7
  double v10; // st6
  int v11; // ecx
  unsigned __int8 (__thiscall *v12)(int, _DWORD, int *); // edx
  float *v13; // esi
  _DWORD *v14; // eax
  float *v15; // eax
  int v16; // eax
  float v17; // eax
  float v18; // ecx
  float v19; // edx
  float v20; // eax
  float v21; // ecx
  double v22; // st5
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // st7
  _DWORD v29[3]; // [esp+10h] [ebp-64h] BYREF
  int v30; // [esp+1Ch] [ebp-58h]
  int v31; // [esp+20h] [ebp-54h]
  _BYTE v32[12]; // [esp+24h] [ebp-50h] BYREF
  _BYTE v33[12]; // [esp+30h] [ebp-44h] BYREF
  _DWORD v34[2]; // [esp+3Ch] [ebp-38h] BYREF
  float v35; // [esp+44h] [ebp-30h] BYREF
  float v36; // [esp+48h] [ebp-2Ch]
  float v37; // [esp+4Ch] [ebp-28h]
  float v38; // [esp+50h] [ebp-24h] BYREF
  float v39; // [esp+54h] [ebp-20h]
  float v40; // [esp+58h] [ebp-1Ch]
  _DWORD *v41; // [esp+5Ch] [ebp-18h]
  int v42; // [esp+60h] [ebp-14h] BYREF
  float v43; // [esp+64h] [ebp-10h]
  float v44; // [esp+68h] [ebp-Ch]
  int v45; // [esp+6Ch] [ebp-8h]
  bool v46; // [esp+73h] [ebp-1h]
  int v47; // [esp+7Ch] [ebp+8h]
  bool v48; // [esp+7Fh] [ebp+Bh]

  v3 = this[141] - this[142];
  v44 = v3;
  if ( v3 > 0.0 && (unsigned __int8)sub_101B4CD0() )
  {
    if ( (*(int (__thiscall **)(float *))(*((_DWORD *)this + 80) + 44))(this + 80) != 1
      && (*(int (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)a2 + 276))(a2, v32, v33) )
    {
      memset(v29, 0, sizeof(v29));
      v30 = 0;
      v31 = 0;
      sub_1016B460(this, v29);
      v4 = 0;
      if ( (unsigned __int8)sub_101C4640(5) )
        v4 = sub_101C46F0(5);
      v46 = sub_1001F080(this + 122, &flt_106F1CB4);
      v5 = sub_1001F080(this + 148, &flt_106F1CA8);
      v36 = 0.0;
      v48 = v5;
      v6 = 0;
      v37 = v44;
      v34[1] = this;
      v34[0] = v4;
      v35 = 0.0;
      v45 = 0;
      if ( v30 > 0 )
      {
        do
        {
          v7 = *(_DWORD *)(v29[0] + 4 * v6);
          if ( *(_BYTE *)(v7 + 361) && (*(_BYTE *)(v7 + 356) & 4) == 0 )
          {
            sub_100DFDE0((float *)v7, (int)v34);
            v6 = v45;
          }
          v45 = ++v6;
        }
        while ( v6 < v30 );
        if ( v35 != 0.0 )
        {
          v8 = v36 * v44;
          v9 = v44;
          v44 = v8;
          if ( v8 > 0.0 )
          {
            v10 = this[141] - v8;
            v43 = v10;
            if ( v9 * 0.99000001 + this[142] >= v10 )
            {
              v11 = *(_DWORD *)(LODWORD(v35) + 424);
              v12 = *(unsigned __int8 (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)v11 + 264);
              v45 = 0;
              if ( v12(v11, 0, &v42) )
                v45 = (*(int (__thiscall **)(int))(*(_DWORD *)v42 + 68))(v42);
              if ( v4 )
              {
                sub_100E10C0((int)this, (float *)(v4 + 4));
                sub_100E11A0((int)this, (float *)(v4 + 16));
                v43 = *(float *)v4;
                v44 = 0.0;
                if ( *(int *)(v4 + 28) > 0 )
                {
                  v47 = v4 + 32;
                  v13 = (float *)(v4 + 168);
                  do
                  {
                    v14 = (_DWORD *)sub_1026A890(v47);
                    v41 = v14;
                    if ( v14 )
                    {
                      v15 = (float *)sub_10019640(v14);
                      v35 = *v15 - *(v13 - 2);
                      v36 = v15[1] - *(v13 - 1);
                      v37 = v15[2] - *v13;
                      sub_100E0D20((int)v41, &v35);
                    }
                    v47 += 4;
                    v13 += 3;
                    ++LODWORD(v44);
                  }
                  while ( SLODWORD(v44) < *(_DWORD *)(v4 + 28) );
                }
                v16 = sub_100D8110((float *)v4, *((_DWORD *)this + 106), v4, (float *)(v4 + 160));
                if ( v16 )
                  v45 = v16;
              }
              else
              {
                v17 = this[180];
                v18 = this[181];
                v38 = this[179];
                v19 = this[182];
                v39 = v17;
                v20 = this[183];
                v40 = v18;
                v21 = this[184];
                v35 = v19;
                v36 = v20;
                v37 = v21;
                if ( v48 )
                {
                  v22 = this[149] * v44;
                  v23 = this[150] * v44;
                  v38 = v38 - this[148] * v44;
                  v39 = v39 - v22;
                  v24 = v40 - v23;
                  v25 = v44;
                  v40 = v24;
                }
                else
                {
                  v25 = v44;
                }
                if ( v46 )
                {
                  v26 = v25 * this[122];
                  v27 = this[123] * v25;
                  v28 = v25 * this[124];
                  v35 = v35 - v26;
                  v36 = v36 - v27;
                  v37 = v37 - v28;
                }
                sub_100E10C0((int)this, &v38);
                sub_100E11A0((int)this, &v35);
              }
              if ( v45 )
                (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 392))(this, v45);
              this[141] = v43;
            }
          }
        }
      }
      sub_102375F0(v29);
    }
    if ( (unsigned __int8)sub_101C4640(5) )
      sub_101C4770(5);
    this[142] = this[141];
    if ( this[141] >= (double)this[143] && this[143] > 0.0 )
    {
      sub_100D8290(this, -1.0);
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 192))(this);
    }
  }
}
