int __cdecl sub_100E9200(
        int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        int a11)
{
  int v11; // ecx
  float v13; // [esp+0h] [ebp-60h] BYREF
  float v14; // [esp+4h] [ebp-5Ch]
  float v15; // [esp+8h] [ebp-58h]
  float v16; // [esp+Ch] [ebp-54h]
  float v17; // [esp+10h] [ebp-50h]
  float v18; // [esp+14h] [ebp-4Ch]
  float v19; // [esp+18h] [ebp-48h]
  float v20; // [esp+1Ch] [ebp-44h]
  float v21; // [esp+20h] [ebp-40h]
  float v22; // [esp+24h] [ebp-3Ch]
  float v23; // [esp+28h] [ebp-38h]
  float v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  int v26; // [esp+34h] [ebp-2Ch]
  float v27; // [esp+38h] [ebp-28h]
  float v28; // [esp+3Ch] [ebp-24h]
  float v29; // [esp+40h] [ebp-20h]
  int v30; // [esp+44h] [ebp-1Ch]
  __int16 v31; // [esp+48h] [ebp-18h]
  int v32; // [esp+4Ch] [ebp-14h]
  int v33; // [esp+50h] [ebp-10h]
  int v34; // [esp+54h] [ebp-Ch]
  char v35; // [esp+58h] [ebp-8h]

  v19 = 0.0;
  v20 = 0.0;
  v31 = 0;
  v21 = 0.0;
  v34 = a1;
  v27 = 1.0;
  v25 = 0;
  v26 = -1;
  v28 = 0.0;
  v30 = 0;
  v29 = 0.0;
  v32 = 0;
  v33 = 0;
  v13 = a2;
  v35 = 0;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  v17 = a6;
  v18 = a7;
  v22 = a8;
  v23 = a9;
  v24 = a10;
  if ( a11 )
  {
    v11 = *(_DWORD *)(*(int (__thiscall **)(int, float, float, float, float, float, float, float, float, float, float, float, float))(*(_DWORD *)a11 + 8))(
                       a11,
                       COERCE_FLOAT(LODWORD(v13)),
                       COERCE_FLOAT(LODWORD(v14)),
                       COERCE_FLOAT(LODWORD(v15)),
                       COERCE_FLOAT(LODWORD(v16)),
                       COERCE_FLOAT(LODWORD(v17)),
                       COERCE_FLOAT(LODWORD(v18)),
                       COERCE_FLOAT(LODWORD(v19)),
                       COERCE_FLOAT(LODWORD(v20)),
                       COERCE_FLOAT(LODWORD(v21)),
                       COERCE_FLOAT(LODWORD(v22)),
                       COERCE_FLOAT(LODWORD(v23)),
                       COERCE_FLOAT(LODWORD(v24)));
    v25 |= 1u;
    v26 = v11;
    v33 = 2;
  }
  else
  {
    v26 = -1;
  }
  return sub_10168E60("ParticleEffect", &v13);
}
