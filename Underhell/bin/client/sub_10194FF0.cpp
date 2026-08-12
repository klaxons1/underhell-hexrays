void __thiscall sub_10194FF0(_DWORD *this, int *a2, int a3, float *a4, int a5, float a6, int a7)
{
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // ebx
  int v14; // edx
  int v15; // eax
  int *v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  double v21; // st7
  char *v22; // eax
  int v23; // esi
  double v24; // st7
  _DWORD *v25; // edi
  bool v26; // zf
  _DWORD *v27; // eax
  double v28; // st7
  double v29; // st6
  int v30; // [esp+0h] [ebp-70h]
  float v31; // [esp+Ch] [ebp-64h]
  _DWORD v32[15]; // [esp+20h] [ebp-50h]
  float v33; // [esp+5Ch] [ebp-14h]
  float v34; // [esp+60h] [ebp-10h]
  int v35; // [esp+64h] [ebp-Ch]
  int v36; // [esp+68h] [ebp-8h]
  _DWORD *v37; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  v37 = this;
  v7 = this[846];
  if ( v7 != -1 )
  {
    v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (v7 & 0xFFF) + 4);
    v9 = v7 >> 12;
    if ( v8[1] == v9 )
    {
      if ( *v8 )
      {
        v10 = v8[1] == v9 ? *v8 : 0;
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 164))(v10);
        v12 = __RTDynamicCast(
                v11,
                0,
                (struct _s_RTTICompleteObjectLocator *)&C_BaseAnimating `RTTI Type Descriptor',
                (int)&C_BaseAnimatingOverlay `RTTI Type Descriptor',
                0);
        v13 = (_DWORD *)v12;
        if ( v12 )
        {
          v14 = *(_DWORD *)(v12 + 1972);
          v32[0] = 15;
          v32[1] = 15;
          v32[2] = 15;
          v32[3] = 15;
          v32[4] = 15;
          v32[5] = 15;
          v32[6] = 15;
          v32[7] = 15;
          v32[8] = 15;
          v32[9] = 15;
          v32[10] = 15;
          v32[11] = 15;
          v32[12] = 15;
          v32[13] = 15;
          v32[14] = 15;
          v15 = 0;
          if ( v14 > 0 )
          {
            v16 = (int *)(v13[490] + 12);
            do
            {
              if ( *v16 < 15 )
                v32[*v16] = v15;
              ++v15;
              v16 += 8;
            }
            while ( v15 < v14 );
          }
          v17 = 0;
          v36 = 0;
          do
          {
            v18 = v32[v17];
            if ( v18 < v13[493] )
            {
              v19 = v13[490];
              v20 = 32 * v18;
              v21 = *(float *)(v19 + 32 * v18 + 8);
              v33 = *(float *)(v19 + 32 * v18 + 8);
              if ( v21 > 0.0 )
              {
                v22 = (char *)sub_10029EE0(v13, *(_DWORD *)(v19 + 32 * v18));
                v23 = sub_10029D40(v37, v22);
                if ( v23 >= 0 )
                {
                  v24 = *(float *)(v13[490] + v20 + 20);
                  v25 = v37;
                  v26 = v37[485] == 0;
                  v34 = v24;
                  if ( v26 && (*(int (__thiscall **)(_DWORD *))(v37[1] + 36))(v37 + 1) )
                    sub_10026520((int)v25);
                  v27 = (_DWORD *)v25[485];
                  if ( !v27 || !*v27 )
                    v27 = 0;
                  LOBYTE(v35) = sub_100256E0((int)v27, v23);
                  v28 = sub_10025120(v34, v35);
                  v29 = 1.0;
                  if ( v33 <= 1.0 )
                    v29 = v33;
                  v31 = v29;
                  *(float *)&v30 = v28;
                  sub_10024510((int)&savedregs, a2, 0, a3, a4, v23, v30, a5, a7, v31, a6);
                }
              }
            }
            v17 = v36 + 1;
            v36 = v17;
          }
          while ( v17 < 15 );
        }
      }
    }
  }
}
