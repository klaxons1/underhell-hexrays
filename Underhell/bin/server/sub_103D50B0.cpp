void __thiscall sub_103D50B0(int this)
{
  const char *v2; // eax
  float *v3; // eax
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  bool v9; // cc
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  float *v14; // ebx
  int v15; // ecx
  float v16; // [esp+8h] [ebp-3Ch]
  _BYTE v17[32]; // [esp+18h] [ebp-2Ch] BYREF
  float v18; // [esp+38h] [ebp-Ch] BYREF
  float v19; // [esp+3Ch] [ebp-8h]
  int v20; // [esp+40h] [ebp-4h]

  nullsub_4();
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_100EAB80((_DWORD *)this, 32);
  v2 = *(const char **)(*(int (__thiscall **)(int, float *))(*(_DWORD *)this + 28))(this, &v18);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_10112C00(this + 320, 1);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  *(_DWORD *)(this + 844) = *(_DWORD *)(this + 840);
  v3 = (float *)sub_10022D70();
  *v3 = *(float *)(this + 340) - *(float *)(this + 328);
  v3[1] = *(float *)(this + 344) - *(float *)(this + 332);
  v3[2] = *(float *)(this + 348) - *(float *)(this + 336);
  v19 = *v3;
  v4 = (float *)sub_10022D70();
  *v4 = *(float *)(this + 340) - *(float *)(this + 328);
  v4[1] = *(float *)(this + 344) - *(float *)(this + 332);
  v4[2] = *(float *)(this + 348) - *(float *)(this + 336);
  v5 = v4[1];
  if ( v19 < v5 )
    v5 = v19;
  v6 = v5 * 0.5;
  *(float *)(this + 848) = v6;
  if ( v6 > 0.0 || *(_BYTE *)(this + 800) )
  {
    v19 = 1.0;
    if ( 0.0 != *(float *)(this + 812) || *(float *)(this + 816) != 0.0 )
    {
      v7 = (float *)sub_10022D70();
      *v7 = *(float *)(this + 340) - *(float *)(this + 328);
      v7[1] = *(float *)(this + 344) - *(float *)(this + 332);
      v8 = *(float *)(this + 348) - *(float *)(this + 336);
      v7[2] = v8;
      v19 = (v8 - (*(float *)(this + 804) + *(float *)(this + 804)))
          / ((*(float *)(this + 816) + *(float *)(this + 812))
           * 0.5)
          / (double)*(int *)(this + 840);
    }
    sub_10227650((int *)(this + 820), *(_DWORD *)(this + 840));
    v9 = *(_DWORD *)(this + 840) <= 0;
    v20 = 0;
    if ( !v9 )
    {
      do
      {
        v10 = *(_DWORD *)(this + 832);
        v11 = *(_DWORD *)(this + 824);
        v18 = (double)v20 * v19 + *(float *)(dword_106B31C8 + 12) - *(float *)(this + 852);
        if ( v10 + 1 > v11 )
          sub_102ABFC0((_DWORD *)(this + 820), v10 - v11 + 1);
        ++*(_DWORD *)(this + 832);
        v12 = *(_DWORD *)(this + 820);
        v13 = *(_DWORD *)(this + 832) - v10 - 1;
        *(_DWORD *)(this + 836) = v12;
        if ( v13 > 0 )
          memcpy((void *)(v12 + 4 * v10 + 4), (const void *)(v12 + 4 * v10), 4 * v13);
        v14 = (float *)(*(_DWORD *)(this + 820) + 4 * v10);
        if ( v14 )
          *v14 = v18;
        ++v20;
      }
      while ( v20 < *(_DWORD *)(this + 840) );
    }
    v15 = *(_DWORD *)(this + 248) >> 12;
    *(_BYTE *)(this + 856) = 1;
    if ( (v15 & 1) != 0 )
    {
      sub_103D2C00(this, (int)v17);
    }
    else
    {
      sub_100EC3F0((_DWORD *)this, (int)sub_103D2E20, 0.0, 0);
      v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v16, 0);
    }
  }
  else
  {
    Warning("Zero dimension func_combine_ball_spawner! Removing...\n");
    sub_1025FAC0(this);
  }
}
