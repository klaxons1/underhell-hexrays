void __usercall sub_101449C0(int a1@<eax>, float *a2@<edi>)
{
  _DWORD *v3; // ebx
  const char *v4; // eax
  float *v5; // ebx
  float *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  int v11; // eax
  double v12; // st7
  int v13; // ecx
  float v14; // edx
  float v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st6
  double v19; // st7
  float v20[3]; // [esp+8h] [ebp-34h] BYREF
  float v21[3]; // [esp+14h] [ebp-28h] BYREF
  float v22; // [esp+20h] [ebp-1Ch] BYREF
  float v23; // [esp+24h] [ebp-18h]
  float v24; // [esp+28h] [ebp-14h]
  float v25; // [esp+2Ch] [ebp-10h] BYREF
  float v26; // [esp+30h] [ebp-Ch]
  float v27; // [esp+34h] [ebp-8h]
  int v28; // [esp+38h] [ebp-4h]

  v3 = (_DWORD *)sub_100422D0();
  if ( v3 && a1 )
  {
    if ( (dword_1043C274 & 0x1000) != 0 )
    {
      v4 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v4 = *(const char **)(dword_1043C27C + 36);
      if ( !v4 )
        v4 = Locale;
    }
    if ( *(_DWORD *)(dword_1043C1A4 + 48) && v4 )
    {
      v5 = a2 + 2;
      v6 = a2 + 1;
      sscanf(v4, "%f%f%f", a2, a2 + 1, a2 + 2);
    }
    else
    {
      v7 = *(unsigned __int8 *)(a1 + 17);
      v8 = *(unsigned __int8 *)(a1 + 18);
      v28 = *(unsigned __int8 *)(a1 + 16);
      v9 = *(unsigned __int8 *)(a1 + 20);
      v10 = (double)v28;
      v28 = v7;
      v11 = *(unsigned __int8 *)(a1 + 21);
      v25 = v10;
      v12 = (double)v28;
      v28 = v8;
      v13 = *(unsigned __int8 *)(a1 + 22);
      v26 = v12;
      v27 = (float)v28;
      v22 = (float)v9;
      v28 = v13;
      v23 = (float)v11;
      v24 = (float)v13;
      sub_10142C40(&v25, &v22);
      if ( *(_BYTE *)(a1 + 65) )
      {
        sub_10013260(v3, (int)v20, 0, 0);
        v14 = *(float *)(a1 + 4);
        v15 = *(float *)(a1 + 8);
        v21[2] = *(float *)(a1 + 12);
        v21[0] = v14;
        v21[1] = v15;
        off_103EDFEC();
        sub_10043430((float *)(a1 + 4), v21);
        v16 = *(float *)(a1 + 8) * v20[1] + *(float *)(a1 + 4) * v20[0];
        v17 = *(float *)(a1 + 12);
        v6 = a2 + 1;
        v18 = (v16 + v17 * v20[2] + 1.0) * 0.5;
        *a2 = (1.0 - v18) * v22 + v18 * v25;
        a2[1] = (1.0 - v18) * v23 + v18 * v26;
        v19 = (1.0 - v18) * v24 + v18 * v27;
      }
      else
      {
        v6 = a2 + 1;
        *a2 = v25;
        a2[1] = v26;
        v19 = v27;
      }
      v5 = a2 + 2;
      a2[2] = v19;
    }
    *a2 = *a2 * 0.0039215689;
    *v6 = *v6 * 0.0039215689;
    *v5 = 0.0039215689 * *v5;
  }
}
