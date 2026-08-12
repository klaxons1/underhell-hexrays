int __fastcall sub_10421690(int a1)
{
  float *v1; // edi
  int v2; // eax
  int v3; // ebx
  float *v4; // ecx
  int v5; // eax
  float *v6; // ecx
  int v7; // ebp
  char *v8; // eax
  const char *v9; // esi
  int v10; // eax
  unsigned __int16 *v11; // ebx
  int v12; // eax
  float *v13; // esi
  int i; // ebp
  float *v15; // esi
  double v16; // st7
  char v17; // al
  int result; // eax
  float v19; // [esp+0h] [ebp-64h]
  float v20; // [esp+0h] [ebp-64h]
  float *v21; // [esp+14h] [ebp-50h] BYREF
  int v22; // [esp+18h] [ebp-4Ch]
  char *v23; // [esp+1Ch] [ebp-48h] BYREF
  int v24; // [esp+20h] [ebp-44h]
  _DWORD v25[4]; // [esp+24h] [ebp-40h] BYREF
  __int16 v26; // [esp+34h] [ebp-30h]
  __int16 v27; // [esp+36h] [ebp-2Eh]
  __int16 v28; // [esp+38h] [ebp-2Ch]
  __int16 v29; // [esp+3Ah] [ebp-2Ah]
  int v30; // [esp+3Ch] [ebp-28h]
  bool (__cdecl *v31)(const char **, const char **); // [esp+40h] [ebp-24h] BYREF
  int v32; // [esp+44h] [ebp-20h]
  int v33; // [esp+48h] [ebp-1Ch]
  int v34; // [esp+4Ch] [ebp-18h]
  int v35; // [esp+50h] [ebp-14h]
  float *v36; // [esp+54h] [ebp-10h]
  int v37; // [esp+58h] [ebp-Ch]
  int v38; // [esp+5Ch] [ebp-8h]
  int v39; // [esp+60h] [ebp-4h]

  v1 = 0;
  v35 = -1;
  v37 = -1;
  v38 = -1;
  v2 = *(_DWORD *)(a1 + 144);
  v3 = 0;
  v22 = a1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v39 = 0;
  v31 = sub_10002010;
  v24 = v2;
  if ( v2 <= 0 )
    goto LABEL_30;
  while ( 1 )
  {
    if ( v3 < 0 || v3 >= *(_DWORD *)(a1 + 144) )
      v4 = 0;
    else
      v4 = *(float **)(*(_DWORD *)(a1 + 132) + 4 * v3);
    v21 = v4;
    if ( sub_10418360((unsigned __int8 *)v4) == 5 )
    {
      v5 = sub_10418880((unsigned __int8 *)v21);
      v6 = v21;
      v7 = v5;
      if ( v5 == 2 )
        goto LABEL_17;
      v8 = (char *)sub_10418890((char *)v21);
      v9 = v8;
      if ( !v8 || !*v8 )
      {
        if ( v7 != 1 )
          goto LABEL_18;
        sub_10418870(v21, 0);
        v6 = v21;
LABEL_17:
        sub_104188A0(v6, 0);
        sub_104188D0(v21, 0);
        sub_104188E0(v21, 0);
        sub_104188F0(v21, 0.0);
        goto LABEL_18;
      }
      v23 = v8;
      v10 = sub_10421180((unsigned __int8 (__cdecl **)(int, int))&v31, (int *)&v23);
      if ( v10 == -1 )
      {
        v25[0] = sub_1041F1A0;
        memset(&v25[1], 0, 12);
        v26 = -1;
        v27 = 0;
        v28 = -1;
        v29 = -1;
        v30 = 0;
        sub_10421120((int)v25, (int)&v21);
        v23 = sub_10001FB0(v9);
        sub_10421610(&v31, (int *)&v23, v25);
        sub_10420DE0((int)v25);
      }
      else
      {
        sub_10421120(48 * v10 + v32 + 20, (int)&v21);
      }
    }
LABEL_18:
    if ( ++v3 >= v24 )
      break;
    a1 = v22;
  }
  if ( (int)v36 > 0 )
  {
    v11 = (unsigned __int16 *)(v32 + 24);
    v21 = v36;
    do
    {
      v12 = v11[7];
      v24 = v12;
      if ( v12 > 1 )
      {
        for ( i = (unsigned __int16)sub_1041FE10((int)(v11 - 2));
              i != 0xFFFF;
              i = (unsigned __int16)sub_1041FED0((_DWORD *)v11 - 1, i) )
        {
          v15 = *(float **)(*(_DWORD *)v11 + 12 * (unsigned __int16)i + 8);
          if ( v1 )
          {
            v19 = sub_10418520(v15);
            sub_104188F0(v1, v19);
            sub_10418870(v15, 1);
            v17 = sub_104188C0(v1);
            sub_104188A0(v15, v17);
            sub_104188D0(v15, 0);
            v16 = 0.0;
          }
          else
          {
            v1 = *(float **)(*(_DWORD *)v11 + 12 * (unsigned __int16)i + 8);
            sub_10418870(v15, 0);
            sub_104188D0(v15, 0);
            sub_104188E0(v15, v24 - 1);
            v16 = sub_10418520(v15);
          }
          v20 = v16;
          sub_104188F0(v15, v20);
        }
        v1 = 0;
      }
      else
      {
        v13 = *(float **)(*(_DWORD *)v11 + 8);
        sub_10418870(v13, 0);
        sub_104188A0(v13, 0);
        sub_104188D0(v13, 0);
        sub_104188E0(v13, 0);
        sub_104188F0(v13, 0.0);
      }
      v11 += 24;
      v21 = (float *)((char *)v21 - 1);
    }
    while ( v21 );
  }
LABEL_30:
  sub_104215C0(&v31);
  result = sub_104214B0(&v31);
  if ( v34 >= 0 )
  {
    result = v32;
    if ( v32 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v32);
      return 0;
    }
  }
  return result;
}
