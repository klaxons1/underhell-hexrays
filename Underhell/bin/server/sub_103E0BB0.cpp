void __thiscall sub_103E0BB0(int this, int a2)
{
  float v3[6]; // [esp+10h] [ebp-90h] BYREF
  float v4; // [esp+28h] [ebp-78h]
  float v5; // [esp+2Ch] [ebp-74h]
  float v6; // [esp+30h] [ebp-70h]
  float v7; // [esp+34h] [ebp-6Ch]
  float v8; // [esp+38h] [ebp-68h]
  float v9; // [esp+3Ch] [ebp-64h]
  int v10; // [esp+40h] [ebp-60h]
  int v11; // [esp+44h] [ebp-5Ch]
  float v12; // [esp+48h] [ebp-58h]
  float v13; // [esp+4Ch] [ebp-54h]
  float v14; // [esp+50h] [ebp-50h]
  int v15; // [esp+54h] [ebp-4Ch]
  __int16 v16; // [esp+58h] [ebp-48h]
  int v17; // [esp+5Ch] [ebp-44h]
  int v18; // [esp+60h] [ebp-40h]
  int v19; // [esp+64h] [ebp-3Ch]
  char v20; // [esp+68h] [ebp-38h]
  float v21[3]; // [esp+70h] [ebp-30h] BYREF
  float v22[3]; // [esp+7Ch] [ebp-24h] BYREF
  float v23[3]; // [esp+88h] [ebp-18h] BYREF
  float v24; // [esp+94h] [ebp-Ch]
  float v25; // [esp+98h] [ebp-8h]
  float v26; // [esp+9Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 447) )
  {
    sub_100BD6D0((void *)this, *(_DWORD *)(this + 1812), (int)v21, v22, v23, 0);
    v3[3] = 0.0;
    v3[4] = 0.0;
    v16 = 0;
    v3[5] = 0.0;
    v4 = 0.0;
    v11 = 0;
    v5 = 0.0;
    v15 = 0;
    v6 = 0.0;
    v17 = 0;
    v7 = 0.0;
    v18 = 0;
    v8 = 0.0;
    v19 = 0;
    v9 = 0.0;
    v20 = 0;
    v10 = 0;
    v12 = 1.0;
    v13 = 0.0;
    v14 = 0.0;
    v3[0] = v21[0];
    v3[1] = v21[1];
    v3[2] = v21[2];
    if ( (sub_100E87E0((_BYTE *)this) & 0x10) != 0 )
      v10 |= 1u;
    if ( a2 == 1 )
    {
      v24 = (v23[0] + v22[0]) * 0.5;
      v25 = (v23[1] + v22[1]) * 0.5;
      v26 = (v23[2] + v22[2]) * 0.5;
      off_10689714();
      v4 = v24;
      v5 = v25;
      v6 = v26;
      v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              2.5)
          + 10.0;
      sub_1028E890((int)"watersplash", (int)v3);
    }
  }
}
