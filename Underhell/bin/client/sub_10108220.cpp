void __thiscall sub_10108220(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // esi
  int v6; // edi
  int (__stdcall *v7)(int); // eax
  _BYTE *v8; // eax
  _DWORD *v9; // esi
  int *v10; // ebx
  int v11; // edi
  char *v12; // eax
  int v13; // ebx
  bool v14; // zf
  const char *v15; // eax
  int v16; // edi
  char *v17; // eax
  const char *v18; // eax
  int v19; // ebx
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  int v23; // edi
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // eax
  char v27; // al
  float v28; // [esp+4h] [ebp-98h]
  float v29; // [esp+4h] [ebp-98h]
  int v30; // [esp+8h] [ebp-94h]
  char v31; // [esp+10h] [ebp-8Ch]
  const char *v32; // [esp+10h] [ebp-8Ch]
  const char *v33; // [esp+10h] [ebp-8Ch]
  char Destination[32]; // [esp+20h] [ebp-7Ch] BYREF
  char Buffer[32]; // [esp+40h] [ebp-5Ch] BYREF
  _DWORD v36[5]; // [esp+60h] [ebp-3Ch] BYREF
  char v37; // [esp+74h] [ebp-28h]
  int v38; // [esp+78h] [ebp-24h]
  int v39; // [esp+7Ch] [ebp-20h]
  _DWORD *v40; // [esp+80h] [ebp-1Ch]
  int v41; // [esp+84h] [ebp-18h]
  int v42; // [esp+88h] [ebp-14h]
  int v43; // [esp+8Ch] [ebp-10h]
  int v44; // [esp+90h] [ebp-Ch]
  _DWORD *v45; // [esp+94h] [ebp-8h]
  char v46; // [esp+9Ah] [ebp-2h]
  bool v47; // [esp+9Bh] [ebp-1h]
  char v48; // [esp+A7h] [ebp+Bh]

  v2 = this;
  v40 = this;
  v47 = a2 > 0;
  v3 = (_DWORD *)sub_100D1800();
  v2[5] += a2;
  v4 = v3;
  v45 = v3;
  v2[6] = 0;
  v48 = 0;
  if ( sub_100422D0() )
  {
    if ( (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) )
    {
      v5 = *(_DWORD *)(dword_10436B34 + 48);
      *(float *)&v36[2] = 0.80000001;
      *(float *)&v36[3] = 1.0;
      v37 = 1;
      *(float *)&v36[4] = 1.0;
      v6 = 0;
      v44 = v5;
      *(float *)&v36[1] = 2.0;
      v43 = 0;
      v7 = (*off_103D89CC)[1];
      v42 = 0;
      v38 = ((int (__thiscall *)(int (__stdcall ***)(int)))v7)(off_103D89CC);
      v39 = 0;
      if ( v38 > 0 )
      {
        do
        {
          v8 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(int), int))**off_103D89CC)(off_103D89CC, v6);
          v9 = v8;
          if ( v8 )
          {
            if ( sub_10034D10(v8) && sub_10036330(v9, v2[5]) )
              v2[6] = 1;
            if ( v44 )
            {
              if ( (*(int (__thiscall **)(_DWORD *))(v9[2] + 36))(v9 + 2) == -1 )
              {
                sub_10228370(Buffer, 0x20u, "handle %u", v9[41]);
              }
              else
              {
                v31 = (*(int (__thiscall **)(_DWORD *))(v9[2] + 36))(v9 + 2);
                sub_10228370(Buffer, 0x20u, "%i", v31);
              }
              v36[0] = v6;
              if ( v44 < 2 )
              {
                v14 = sub_10034D10(v9) == 0;
                v18 = "predicted";
                if ( v14 )
                  v18 = "client created";
                v19 = *(_DWORD *)dword_1041315C;
                v33 = v18;
                v20 = sub_10034D90(v9);
                (*(void (**)(int, _DWORD *, const char *, ...))(v19 + 120))(
                  dword_1041315C,
                  v36,
                  "%15s %30s: %15s",
                  Buffer,
                  v20,
                  v33);
              }
              else
              {
                v10 = sub_100797E0();
                v11 = *v10;
                v12 = sub_10034D90(v9);
                v41 = (*(int (__thiscall **)(int *, char *))(v11 + 16))(v10, v12);
                v13 = 91 * sub_100364A0(v9);
                v14 = sub_10034D10(v9) == 0;
                v15 = "predicted";
                if ( v14 )
                  v15 = "client created";
                v16 = *(_DWORD *)dword_1041315C;
                v32 = v15;
                v30 = v41;
                v17 = sub_10034D90(v9);
                (*(void (**)(int, _DWORD *, const char *, ...))(v16 + 120))(
                  dword_1041315C,
                  v36,
                  "%15s %30s (%5i / %5i bytes): %15s",
                  Buffer,
                  v17,
                  v30,
                  v13,
                  v32);
                v43 += v41;
                v6 = v39;
                v42 += v13;
              }
              v2 = v40;
            }
            if ( v47 && !v48 && v45 && sub_10108180((int)v9) )
            {
              v48 = 1;
              sub_100D2730(v45, v9, v2[5]);
            }
          }
          v39 = ++v6;
        }
        while ( v6 < v38 );
        v5 = v44;
      }
      if ( v5 >= 2 )
      {
        v36[0] = v6;
        v28 = (float)v43;
        ++v6;
        v21 = (char *)sub_10228410(LODWORD(v28), 2, 0);
        sub_102282F0(Destination, v21, 0x20u);
        v29 = (float)v42;
        v22 = (char *)sub_10228410(LODWORD(v29), 2, 0);
        sub_102282F0(Buffer, v22, 0x20u);
        (*(void (**)(int, _DWORD *, const char *, ...))(*(_DWORD *)dword_1041315C + 120))(
          dword_1041315C,
          v36,
          "%15s %27s (%s / %s)  %14s",
          "totals:",
          Locale,
          Destination,
          Buffer,
          Locale);
      }
      if ( v5 && v6 < 20 )
      {
        do
          (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1041315C + 116))(dword_1041315C, v6++, Locale);
        while ( v6 < 20 );
      }
      if ( v47 )
        sub_10107F50(v2[5]);
      v4 = v45;
    }
    v23 = *(_DWORD *)(dword_10436B7C + 48);
    if ( v4 )
    {
      if ( v47 && !v48 && v23 != -1 )
      {
        v24 = (*(int (__thiscall **)(char *))(*((_DWORD *)off_103DCD78 + 16389) + 24))((char *)off_103DCD78 + 65556);
        if ( v23 >= 0 && v23 <= v24 )
        {
          v25 = (_DWORD *)sub_1007A6A0(off_103DCD78, v23);
          if ( v25 )
          {
            sub_100D2730(v4, v25, v2[5]);
            v48 = 1;
          }
        }
      }
    }
    v26 = *off_103DC72C[0];
    v46 = *((_BYTE *)v2 + 10);
    v27 = (*(int (__thiscall **)(int *))(v26 + 72))(off_103DC72C[0]);
    if ( v27 != v46 )
    {
      if ( !v46 )
        sub_10108110();
      v2[4] = 0;
      v2[5] = 0;
      v2[3] = -1;
    }
    *((_BYTE *)v2 + 10) = (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) != 0;
    if ( v4 && v47 && !v48 )
      sub_100D1A10(v4);
  }
}
