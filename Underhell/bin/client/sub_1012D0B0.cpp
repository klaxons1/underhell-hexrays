int __cdecl sub_1012D0B0(float *a1, float *a2, int a3, int a4, float a5, char a6, int a7, int a8)
{
  int v8; // eax
  int v9; // eax
  float v11[12]; // [esp+0h] [ebp-60h] BYREF
  int v12; // [esp+30h] [ebp-30h]
  int v13; // [esp+34h] [ebp-2Ch]
  float v14; // [esp+38h] [ebp-28h]
  float v15; // [esp+3Ch] [ebp-24h]
  float v16; // [esp+40h] [ebp-20h]
  int v17; // [esp+44h] [ebp-1Ch]
  __int16 v18; // [esp+48h] [ebp-18h]
  int v19; // [esp+4Ch] [ebp-14h]
  int v20; // [esp+50h] [ebp-10h]
  int v21; // [esp+54h] [ebp-Ch]
  char v22; // [esp+58h] [ebp-8h]
  int v23; // [esp+68h] [ebp+8h]

  v11[6] = 0.0;
  v18 = 0;
  v11[7] = 0.0;
  v11[8] = 0.0;
  v11[9] = 0.0;
  v11[10] = 0.0;
  v12 = 0;
  v11[11] = 0.0;
  v13 = -1;
  v17 = 0;
  v14 = 1.0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v15 = 0.0;
  v16 = 0.0;
  v11[3] = *a1;
  v11[4] = a1[1];
  v11[5] = a1[2];
  v11[0] = *a2;
  v11[1] = a2[1];
  v11[2] = a2[2];
  if ( a3 >= -1 )
  {
    if ( a3 >= 0 && (v9 = *((_DWORD *)off_103DCD78 + 4 * a3 + 1)) != 0 )
      v23 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    else
      v23 = -1;
    v8 = v23;
  }
  else
  {
    v8 = -1;
  }
  v14 = a5;
  v13 = v8;
  v21 = a8;
  if ( a6 )
    v12 |= 1u;
  if ( a4 != -1 )
  {
    v12 |= 2u;
    v17 = a4;
  }
  if ( a7 )
    return sub_10168E60(a7, v11);
  else
    return sub_10168E60("Tracer", v11);
}
