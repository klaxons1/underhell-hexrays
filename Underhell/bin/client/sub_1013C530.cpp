int __thiscall sub_1013C530(_DWORD *this, char *a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  int *v4; // esi
  int v5; // ebx
  int v6; // eax
  const char *v8; // eax
  int v9; // ebx
  int v10; // eax
  float v11; // ecx
  float v12; // edx
  float *v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  float **v18; // edi
  float v19; // [esp+1Ch] [ebp-18h] BYREF
  float v20; // [esp+20h] [ebp-14h] BYREF
  float v21; // [esp+24h] [ebp-10h] BYREF
  float v22; // [esp+28h] [ebp-Ch]
  _DWORD *i; // [esp+2Ch] [ebp-8h]
  int v24; // [esp+30h] [ebp-4h]
  int v25; // [esp+3Ch] [ebp+8h]

  v2 = this;
  v3 = this[303] - 1;
  for ( i = this; v3 >= 0; --v3 )
    sub_10034930(*(_DWORD *)(v2[300] + 4 * v3));
  v4 = v2 + 300;
  v5 = 0;
  v2[303] = 0;
  if ( sub_10229D00(32) )
    v5 = sub_10229D20(a2);
  v24 = v5;
  if ( dword_10413188 )
    v6 = dword_10413188 + 4;
  else
    v6 = 0;
  if ( (unsigned __int8)sub_10229D70(v6, a2, "GAME") )
  {
    v25 = sub_10229C90(v5);
    if ( v25 )
    {
      while ( 1 )
      {
        v8 = (const char *)sub_1022B4C0("angles", (int)"0 0 0");
        sscanf(v8, "%f %f %f", &v19, &v20, &v21);
        sub_1022A940("time", 0.001);
        v22 = 0.001;
        v9 = sub_1022A800("flags", 0);
        v10 = sub_100DDA40(20);
        if ( v10 )
        {
          v11 = v20;
          v12 = v21;
          *(float *)v10 = v19;
          *(float *)(v10 + 4) = v11;
          *(_DWORD *)(v10 + 16) = v9;
          *(float *)(v10 + 8) = v12;
          v13 = (float *)v10;
          *(float *)(v10 + 12) = v22;
        }
        else
        {
          v13 = 0;
        }
        *v13 = *v13 - *((float *)v2 + 305);
        v13[1] = v13[1] - *((float *)v2 + 306);
        v13[2] = v13[2] - *((float *)v2 + 307);
        v14 = v4[3];
        v15 = v4[1];
        if ( v14 + 1 > v15 )
          sub_1010AFF0(v4, v14 - v15 + 1);
        ++v4[3];
        v16 = *v4;
        v17 = v4[3] - v14 - 1;
        v4[4] = *v4;
        if ( v17 > 0 )
          memcpy((void *)(v16 + 4 * v14 + 4), (const void *)(v16 + 4 * v14), 4 * v17);
        v18 = (float **)(*v4 + 4 * v14);
        if ( v18 )
          *v18 = v13;
        v25 = sub_1021F0F0(v25);
        if ( !v25 )
          break;
        v2 = i;
      }
    }
    return sub_1022AF00(v24);
  }
  else
  {
    Warning("CViewAngleAnimation::LoadViewAnimFile failed to load script %s\n", a2);
    return sub_1022AF00(v5);
  }
}
