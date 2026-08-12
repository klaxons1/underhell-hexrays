int __thiscall sub_100BC0E0(int *this, const unsigned __int16 *a2, int i)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int result; // eax
  int v8; // ecx
  const unsigned __int16 *v9; // eax
  const unsigned __int16 *v10; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edi
  int v15; // eax
  unsigned __int16 *v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  int *v20; // eax
  int v21; // ecx
  int v22; // edx
  int (__thiscall *v23)(int, const unsigned __int16 **, int, int); // eax
  int v24; // ecx
  int v25; // eax
  int (__thiscall *v26)(int, const unsigned __int16 **, int, int); // edx
  int v27; // edi
  int *v28; // eax
  _WORD *v29; // eax
  _WORD *v30; // edx
  int v32; // ecx
  int v33; // eax
  _WORD *v34; // edx
  _WORD *v35; // edi
  int *v37; // eax
  int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // [esp-8h] [ebp-30h]
  int v42; // [esp-8h] [ebp-30h]
  const unsigned __int16 *v43; // [esp-4h] [ebp-2Ch]
  int v44; // [esp+Ch] [ebp-1Ch] BYREF
  int v45; // [esp+10h] [ebp-18h]
  int v46; // [esp+14h] [ebp-14h]
  char v47[4]; // [esp+18h] [ebp-10h] BYREF
  int v48; // [esp+1Ch] [ebp-Ch]
  unsigned __int16 *v49; // [esp+20h] [ebp-8h]
  int v50; // [esp+24h] [ebp-4h]

  if ( this[114] )
  {
    sub_10034930(this[114]);
    this[114] = 0;
  }
  v43 = a2;
  this[112] = 0;
  v4 = sub_100B8C20(v43);
  v5 = *this;
  this[114] = v4;
  v6 = (*(int (__thiscall **)(int *))(v5 + 144))(this);
  result = __RTDynamicCast(
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&CBaseHudChat `RTTI Type Descriptor',
             0);
  v8 = result;
  v50 = result;
  if ( result )
  {
    v9 = (const unsigned __int16 *)this[114];
    v10 = v9;
    a2 = v9;
    v49 = (unsigned __int16 *)(v9 + 1);
    while ( *v10++ )
      ;
    v48 = v10 - v49;
    v12 = *v9;
    if ( (v12 == 3 || v12 == 4 || v12 == 1 || v12 == 5) && v9 )
    {
      do
      {
        v13 = *v9;
        if ( !(_WORD)v13 )
          break;
        v46 = 0;
        v49 = (unsigned __int16 *)v13;
        if ( v13 == 1 || v13 > 2 && v13 <= 5 )
        {
          v14 = (((int)v9 - this[114]) >> 1) + 1;
          v46 = *(_DWORD *)(*(int (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)v8 + 100))(
                             v8,
                             v47,
                             v49,
                             i);
          v15 = this[112];
          if ( v15 )
            *(_DWORD *)(this[109] + 12 * v15 - 8) = v14 - 1;
          v17 = this[110];
          v49 = (unsigned __int16 *)this[112];
          v16 = v49;
          if ( (int)v49 + 1 > v17 )
          {
            sub_100798B0(this + 109, (int)v49 - v17 + 1);
            v16 = v49;
          }
          ++this[112];
          v18 = this[109];
          v19 = this[112] - (_DWORD)v16 - 1;
          this[113] = v18;
          if ( v19 > 0 )
          {
            memcpy((void *)(v18 + 12 * (_DWORD)v16 + 12), (const void *)(v18 + 12 * (_DWORD)v16), 12 * v19);
            v16 = v49;
          }
          v20 = (int *)(this[109] + 12 * (_DWORD)v16);
          if ( v20 )
          {
            v21 = v48;
            v22 = v46;
            *v20 = v14;
            v20[1] = v21;
            v20[2] = v22;
          }
          v9 = ++a2;
          v8 = v50;
        }
        else
        {
          a2 = ++v9;
        }
      }
      while ( v9 );
    }
    if ( !this[112] )
    {
      if ( this[104] > 0 && *(_WORD *)this[114] == 2 )
      {
        v23 = *(int (__thiscall **)(int, const unsigned __int16 **, int, int))(*(_DWORD *)v8 + 100);
        v45 = this[115];
        v44 = 0;
        v24 = *(_DWORD *)v23(v8, &a2, 1, i);
        v25 = this[112];
        v46 = v24;
        sub_1003BE10(this + 109, v25, &v44);
        v26 = *(int (__thiscall **)(int, const unsigned __int16 **, int, int))(*(_DWORD *)v50 + 100);
        v27 = this[115] + this[104];
        v44 = this[115];
        v45 = v27;
        v28 = (int *)v26(v50, &a2, 3, i);
        v41 = this[112];
        v46 = *v28;
        sub_1003BE10(this + 109, v41, &v44);
        v29 = (_WORD *)this[114];
        v44 = v27;
        v30 = v29 + 1;
        while ( *v29++ )
          ;
        v45 = v29 - v30;
        v32 = *(_DWORD *)(*(int (__thiscall **)(int, const unsigned __int16 **, int, int))(*(_DWORD *)v50 + 100))(
                           v50,
                           &a2,
                           1,
                           i);
        v33 = this[112];
        v46 = v32;
        sub_1003BE10(this + 109, v33, &v44);
        v8 = v50;
      }
      if ( !this[112] )
      {
        v34 = (_WORD *)this[114];
        v44 = 0;
        v35 = v34 + 1;
        while ( *v34++ )
          ;
        v45 = v34 - v35;
        v37 = (int *)(*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v8 + 100))(v8, &i, 1, i);
        v42 = this[112];
        v46 = *v37;
        sub_1003BE10(this + 109, v42, &v44);
      }
    }
    v38 = 0;
    for ( i = 0; i < this[112]; ++i )
    {
      v39 = this[109];
      v40 = *(unsigned __int16 *)(this[114] + 2 * *(_DWORD *)(v39 + v38));
      if ( (_WORD)v40 )
      {
        if ( v40 < 6 )
          ++*(_DWORD *)(v39 + v38);
      }
      v38 += 12;
    }
    return (*(int (__thiscall **)(int *, int))(*this + 812))(this, 255);
  }
  return result;
}
