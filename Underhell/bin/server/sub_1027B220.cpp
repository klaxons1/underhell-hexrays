_DWORD *__thiscall sub_1027B220(_DWORD *this, _DWORD *a2, int a3)
{
  int v4; // esi
  _DWORD *result; // eax
  int v6; // ebx
  double v7; // st7
  int (__thiscall *v8)(int); // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  int v12; // [esp-4h] [ebp-7Ch]
  float v13; // [esp+Ch] [ebp-6Ch] BYREF
  float v14; // [esp+10h] [ebp-68h]
  float v15; // [esp+14h] [ebp-64h]
  float v16; // [esp+18h] [ebp-60h]
  float v17; // [esp+1Ch] [ebp-5Ch]
  float v18; // [esp+20h] [ebp-58h]
  float v19; // [esp+24h] [ebp-54h]
  float v20; // [esp+28h] [ebp-50h]
  float v21; // [esp+2Ch] [ebp-4Ch]
  float v22; // [esp+30h] [ebp-48h]
  float v23; // [esp+34h] [ebp-44h]
  float v24; // [esp+38h] [ebp-40h]
  int v25; // [esp+3Ch] [ebp-3Ch]
  int v26; // [esp+40h] [ebp-38h]
  float v27; // [esp+44h] [ebp-34h]
  float v28; // [esp+48h] [ebp-30h]
  float v29; // [esp+4Ch] [ebp-2Ch]
  int v30; // [esp+50h] [ebp-28h]
  __int16 v31; // [esp+54h] [ebp-24h]
  int v32; // [esp+58h] [ebp-20h]
  int v33; // [esp+5Ch] [ebp-1Ch]
  int v34; // [esp+60h] [ebp-18h]
  char v35; // [esp+64h] [ebp-14h]
  float v36; // [esp+6Ch] [ebp-Ch]
  float v37; // [esp+70h] [ebp-8h]
  float v38; // [esp+74h] [ebp-4h]
  int v39; // [esp+80h] [ebp+8h]

  v4 = sub_100D1940(this);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    v4 = 0;
  result = a2;
  if ( *a2 == 3015 )
  {
    v13 = 0.0;
    v25 = 0;
    v14 = 0.0;
    v26 = 0;
    v15 = 0.0;
    v30 = 0;
    v16 = 0.0;
    v32 = 0;
    v17 = 0.0;
    v33 = 0;
    v18 = 0.0;
    v34 = 0;
    v19 = 0.0;
    v31 = 0;
    v20 = 0.0;
    v35 = 0;
    v21 = 0.0;
    v6 = 6;
    v22 = 0.0;
    v23 = 0.0;
    v24 = 0.0;
    v27 = 1.0;
    v28 = 0.0;
    v29 = 0.0;
    do
    {
      v36 = (double)sub_10219A30() * 0.000030518509 * 8.0 - 4.0;
      v37 = (double)sub_10219A30() * 0.000030518509 * 8.0 - 4.0;
      v7 = (double)sub_10219A30();
      v8 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 576);
      v38 = v7 * 0.000030518509 * 8.0 - 4.0;
      v9 = (float *)v8(v4);
      v10 = v9[1] + v37;
      v11 = v9[2] + v38;
      v13 = *v9 + v36;
      v14 = v10;
      v15 = v11;
      v39 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 360);
      v12 = this[6];
      v22 = 90.0;
      v23 = (float)v39;
      v24 = 0.0;
      v26 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v12);
      result = (_DWORD *)sub_1028E890("ShellEject", &v13);
      --v6;
    }
    while ( v6 );
  }
  return result;
}
