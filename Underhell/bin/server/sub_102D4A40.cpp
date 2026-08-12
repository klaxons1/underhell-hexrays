char __cdecl sub_102D4A40(int a1, float a2, float a3, float a4, char a5)
{
  double v5; // st5
  int v6; // eax
  int v7; // ebx
  int v8; // edi
  float *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  float *v13; // eax
  int i; // esi
  double v16; // st7
  int v17; // ecx
  double v18; // st4
  double v19; // st6
  double v20; // st7
  float v22; // [esp+8h] [ebp-234h]
  float v23; // [esp+18h] [ebp-224h]
  _DWORD v24[100]; // [esp+24h] [ebp-218h] BYREF
  char v25[44]; // [esp+1B4h] [ebp-88h] BYREF
  float v26; // [esp+1E0h] [ebp-5Ch]
  int v27; // [esp+200h] [ebp-3Ch]
  _DWORD v28[5]; // [esp+208h] [ebp-34h] BYREF
  float v29[3]; // [esp+21Ch] [ebp-20h] BYREF
  float v30[3]; // [esp+228h] [ebp-14h] BYREF
  float v31; // [esp+234h] [ebp-8h]
  char v32; // [esp+23Bh] [ebp-1h]
  int savedregs; // [esp+23Ch] [ebp+0h] BYREF

  v5 = *(float *)(dword_106DE82C + 44);
  v32 = 0;
  v29[0] = a2 + v5;
  v29[1] = a3 + v5;
  v29[2] = a4 + v5;
  v30[0] = a2 - v5;
  v30[1] = a3 - v5;
  v30[2] = a4 - v5;
  sub_1025F990(v28, (int)v24, 100, 0);
  v6 = sub_1025F9C0((int)v30, (int)v29, (int)v28);
  v7 = v6;
  if ( !a5 )
  {
    v8 = 0;
    if ( v6 > 0 )
    {
      do
      {
        v9 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v24[v8] + 576))(v24[v8]);
        if ( fabs(v9[1] - a3) + fabs(*v9 - a2) + fabs(v9[2] - a4) < *(float *)(dword_106DE82C + 44) )
        {
          v10 = v24[v8];
          if ( *(char **)(v10 + 92) == "npc_combine_s" || sub_100D6240((_DWORD *)v10, "npc_combine_s") )
          {
            v11 = sub_100D7680(v24[v8]);
            v12 = v11;
            if ( v11 )
            {
              v13 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 504))(v11, v30);
              sub_1002A5F0((int)&savedregs, v12, &a2, v13, -1, a1, 0, (int)v25);
              if ( 1.0 == v26 || v27 == v12 )
              {
                v22 = RandomFloat(0.0, 0.5);
                sub_1010C7F0((float *)dword_10614CA8, v12, "HitByBugbait", v22, a1, a1, 0);
              }
            }
          }
        }
        ++v8;
      }
      while ( v8 < v7 );
    }
  }
  for ( i = dword_106DE6E4; i; i = *(_DWORD *)(i + 832) )
  {
    if ( *(_BYTE *)(i + 804) )
    {
      if ( !(a5 ? (*(_DWORD *)(i + 248) & 4) != 0 : (*(_DWORD *)(i + 248) & 2) != 0) )
      {
        if ( 0.0 == *(float *)(i + 800) )
          v16 = *(float *)(dword_106DE754 + 44);
        else
          v16 = *(float *)(i + 800);
        v17 = *(_DWORD *)(i + 252);
        v31 = v16;
        if ( (v17 & 0x800) != 0 )
          sub_100DAE60(i);
        v18 = *(float *)(i + 584) - a3;
        v19 = *(float *)(i + 588) - a4;
        v23 = (*(float *)(i + 580) - a2) * (*(float *)(i + 580) - a2) + v18 * v18 + v19 * v19;
        v20 = off_10689708(v23);
        if ( v20 < v31 )
        {
          if ( *(_BYTE *)(i + 804) )
          {
            sub_1010DD80((_DWORD *)(i + 808), __SPAIR64__(i, a1), 0.0);
            if ( (*(_BYTE *)(i + 248) & 1) != 0 )
              v32 = 1;
          }
        }
      }
    }
  }
  return v32;
}
