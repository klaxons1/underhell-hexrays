void __cdecl sub_101AB260(int a1, char *String1)
{
  float *i; // esi
  int v3; // eax
  int v4; // eax
  float v5; // [esp+8h] [ebp-60h] BYREF
  float v6; // [esp+Ch] [ebp-5Ch]
  float v7; // [esp+10h] [ebp-58h]
  float v8; // [esp+14h] [ebp-54h]
  float v9; // [esp+18h] [ebp-50h]
  float v10; // [esp+1Ch] [ebp-4Ch]
  float v11; // [esp+20h] [ebp-48h]
  float v12; // [esp+24h] [ebp-44h]
  float v13; // [esp+28h] [ebp-40h]
  float v14; // [esp+2Ch] [ebp-3Ch]
  float v15; // [esp+30h] [ebp-38h]
  float v16; // [esp+34h] [ebp-34h]
  int v17; // [esp+38h] [ebp-30h]
  int v18; // [esp+3Ch] [ebp-2Ch]
  float v19; // [esp+40h] [ebp-28h]
  float v20; // [esp+44h] [ebp-24h]
  float v21; // [esp+48h] [ebp-20h]
  int v22; // [esp+4Ch] [ebp-1Ch]
  __int16 v23; // [esp+50h] [ebp-18h]
  int v24; // [esp+54h] [ebp-14h]
  int v25; // [esp+58h] [ebp-10h]
  int v26; // [esp+5Ch] [ebp-Ch]
  char v27; // [esp+60h] [ebp-8h]

  if ( a1 )
  {
    for ( i = (float *)sub_1010E480(a1, String1, 0); i; i = (float *)sub_1010E480(a1, String1, (int)i) )
    {
      v5 = 0.0;
      v6 = 0.0;
      v17 = 0;
      v7 = 0.0;
      v18 = 0;
      v8 = 0.0;
      v22 = 0;
      v9 = 0.0;
      v23 = 0;
      v10 = 0.0;
      v24 = 0;
      v11 = 0.0;
      v25 = 0;
      v12 = 0.0;
      v26 = 0;
      v13 = 0.0;
      v27 = 0;
      v14 = 0.0;
      v15 = 0.0;
      v16 = 0.0;
      v19 = 1.0;
      v20 = 0.0;
      v21 = 0.0;
      v26 = sub_10154400(String);
      if ( ((_DWORD)i[63] & 0x800) != 0 )
        sub_100DAE60((int)i);
      v3 = *((_DWORD *)i + 6);
      v5 = i[145];
      v6 = i[146];
      v7 = i[147];
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3);
      v17 |= 1u;
      v18 = v4;
      v17 |= 2u;
      v25 = 0;
      v22 = 0;
      sub_1028E890("ParticleEffect", &v5);
    }
  }
}
