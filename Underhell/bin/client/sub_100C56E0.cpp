void __thiscall sub_100C56E0(int this, char *Source)
{
  double v2; // st7
  int v4; // kr00_4
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // eax
  char v9[512]; // [esp+14h] [ebp-218h] BYREF
  int v10; // [esp+214h] [ebp-18h] BYREF
  int v11; // [esp+218h] [ebp-14h]
  float v12; // [esp+21Ch] [ebp-10h]
  float v13; // [esp+220h] [ebp-Ch]
  int v14; // [esp+224h] [ebp-8h] BYREF
  float v15; // [esp+228h] [ebp-4h]

  v2 = *(float *)(dword_10430A34 + 44);
  v15 = *(float *)(dword_10430A34 + 44);
  if ( v2 <= 60.0 )
  {
    if ( v2 < 0.1 )
      v15 = 0.1;
  }
  else
  {
    v15 = 60.0;
  }
  v9[0] = 0;
  sub_10076840(v9, Source, 32);
  v4 = strlen(v9);
  if ( v4 > 0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v10 = 0;
    v11 = 0;
    sub_1022FAE0(&v14);
    sub_1022FB00(&v14, v9, v4);
    sub_1022FAF0(&v14);
    v10 = v14;
    v5 = sub_100C1E20((unsigned __int8 (__cdecl **)(int, int))(this + 280), (int)&v10);
    if ( v5 == -1 )
    {
      v12 = *((float *)off_103DC81C + 3);
      v6 = *((_DWORD *)off_103DC81C + 6);
      v13 = v15;
      v11 = v6;
      sub_100C4B60(this + 280, (int)&v10);
    }
    else
    {
      v7 = *(_DWORD *)(this + 284);
      v8 = 32 * v5;
      if ( *(float *)(v7 + v8 + 28) + *(float *)(v7 + v8 + 24) > *((float *)off_103DC81C + 3) )
        return;
      *(float *)(v7 + v8 + 24) = *((float *)off_103DC81C + 3);
      *(_DWORD *)(v7 + v8 + 20) = *((_DWORD *)off_103DC81C + 6);
    }
  }
  sub_100C5580((_DWORD *)this, Source, 1, 0.0, 0, 0);
}
