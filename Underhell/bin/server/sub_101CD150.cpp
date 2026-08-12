void __thiscall sub_101CD150(
        int this,
        float *a2,
        int a3,
        float *a4,
        int a5,
        int a6,
        float a7,
        int a8,
        _DWORD *a9,
        char a10)
{
  int v10; // edi
  int v12; // edx
  int (__thiscall *v13)(int); // edx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // ebx
  int v17; // edx
  double v18; // st7
  double v19; // st7
  int v20; // ebx
  int v21; // ecx
  int i; // ebx
  int v23; // edi
  char *v24; // edi
  const char *v25; // eax
  const char *v26; // eax
  int v27; // ebx
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int j; // edi
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // ebx
  int v36; // eax
  unsigned __int16 *v37; // esi
  float v38; // [esp+18h] [ebp-968h]
  const char *v39; // [esp+18h] [ebp-968h]
  char v40; // [esp+1Ch] [ebp-964h]
  char String[2048]; // [esp+2Ch] [ebp-954h] BYREF
  char Buffer[256]; // [esp+82Ch] [ebp-154h] BYREF
  char String1[4]; // [esp+92Ch] [ebp-54h] BYREF
  int v44; // [esp+930h] [ebp-50h]
  _DWORD *v45; // [esp+934h] [ebp-4Ch]
  int v46; // [esp+938h] [ebp-48h]
  float v47; // [esp+93Ch] [ebp-44h]
  float v48; // [esp+940h] [ebp-40h]
  float v49; // [esp+944h] [ebp-3Ch]
  float v50; // [esp+948h] [ebp-38h]
  float v51; // [esp+94Ch] [ebp-34h]
  float v52; // [esp+950h] [ebp-30h]
  int v53; // [esp+954h] [ebp-2Ch]
  int v54; // [esp+958h] [ebp-28h]
  float v55; // [esp+95Ch] [ebp-24h]
  bool v56; // [esp+960h] [ebp-20h]
  int v57[3]; // [esp+964h] [ebp-1Ch] BYREF
  unsigned __int16 *v58; // [esp+970h] [ebp-10h]
  float v59[3]; // [esp+974h] [ebp-Ch] BYREF

  v10 = a8;
  sub_100EBE30(this, a8);
  if ( v10 == 3 )
  {
    v38 = *(float *)(dword_106B31C8 + 12) + 5.0;
    sub_100EC3F0((_DWORD *)this, (int)sub_101CB6B0, v38, off_10638D5C);
  }
  sub_100E0970(this, v12, 6, 0);
  v58 = (unsigned __int16 *)(this + 320);
  sub_10112C00(this + 320, 6);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 3);
  if ( *(_BYTE *)(this + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 1;
  }
  v13 = *(int (__thiscall **)(int))(*(_DWORD *)this + 24);
  *(_DWORD *)String1 = this;
  v46 = v13(this);
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0, v46);
  v15 = dword_10700AC8;
  v44 = v14;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v16 = *(_DWORD **)(this + 1100);
  if ( !v16 || !*v16 )
    v16 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  v17 = *(_DWORD *)(this + 248);
  v50 = *a2;
  v18 = a2[1];
  v53 = a3;
  v51 = v18;
  v52 = a2[2];
  v19 = *a4;
  v45 = v16;
  v20 = a6;
  v47 = v19;
  v48 = a4[1];
  v49 = a4[2];
  v55 = 1.0;
  v54 = a6;
  v56 = (v17 & 0x8000) != 0;
  sub_102183D0(this + 1132, String1, dword_106BAFF4);
  sub_10217FF0(this + 1132, a5, v20, a7);
  v21 = *(_DWORD *)(this + 5016);
  if ( v21 )
  {
    if ( (int)strlen(*(const char **)(this + 5016)) > 0 )
    {
      for ( i = sub_1025F620(String, v21, 44); String[0]; i = sub_1025F620(String, a8, 44) )
      {
        v23 = atoi(String);
        a8 = sub_1025F620(String, i, 44);
        if ( v23 < *(_DWORD *)(this + 1132) )
        {
          if ( String[0] )
          {
            sub_10264F10((int)v57, String);
            v27 = a6 + 48 * *(_DWORD *)(this + 4 * v23 + 1720);
            sub_104227F0(v57);
            v28 = *(_DWORD *)(this + 24 * v23 + 1164);
            v29 = this + 24 * v23 + 1144;
            if ( v28 < 0 )
            {
              if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
                sub_100DAE60(this);
              v59[0] = *(float *)(this + 580);
              v59[1] = *(float *)(this + 584);
              v59[2] = *(float *)(this + 588);
            }
            else
            {
              sub_10421B40(v29, a6 + 48 * *(_DWORD *)(this + 4 * v28 + 1720), v59);
            }
            sub_10421D00(v59, 3, v27);
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v29 + 12) + 184))(*(_DWORD *)(v29 + 12), v27, 1);
          }
        }
        else
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          v24 = sub_1001E280(
                  Buffer,
                  "(%f, %f, %f)",
                  *(float *)(this + 580),
                  *(float *)(this + 584),
                  *(float *)(this + 588));
          v25 = *(const char **)(*(int (__thiscall **)(int, float **))(*(_DWORD *)this + 28))(this, &a2);
          if ( !v25 )
            v25 = ::String;
          v39 = v25;
          v26 = sub_100D6390((_DWORD *)this);
          Warning("Bad ragdoll pose in entity %s, model (%s) at %s, model changed?\n", v26, v39, v24);
        }
      }
    }
  }
  if ( (_BYTE)a9 )
  {
    v40 = a10;
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 24))(this);
    sub_10217F40(this + 1132, v44, v30, v40);
  }
  for ( j = 0; j < *(_DWORD *)(this + 1132); ++j )
  {
    v32 = *(_DWORD *)(this + 24 * j + 1156);
    a9 = (_DWORD *)(this + 24 * j + 1156);
    (*(void (__thiscall **)(int, int *, float *))(*(_DWORD *)v32 + 188))(v32, v57, v59);
    sub_101CBD70((char *)(this + 4440), j, (float *)v57);
    sub_101CBE00((char *)(this + 4728), j, v59);
    if ( !j )
    {
      sub_100E0D20(this, (float *)(this + 4440));
      sub_100DCB50((void *)this, 0);
    }
    v33 = *(_DWORD *)off_1063AC88;
    v34 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 24))(this);
    (*(void (__thiscall **)(void *, _DWORD, int))(v33 + 8))(off_1063AC88, *a9, v34);
    v35 = *(_DWORD *)dword_106BAFF0;
    v36 = (*(int (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*a9 + 292))(*a9, &flt_106F1CA8, &flt_106F1CB4);
    (*(void (__thiscall **)(int, int, int, int))(v35 + 92))(
      dword_106BAFF0,
      this + 4 * (3 * j + 1269),
      this + 4 * (3 * j + 1341),
      v36);
  }
  sub_100E9500((_DWORD *)this, *(_DWORD *)(this + 1156));
  v37 = v58;
  sub_10112B00(v58, 2, 0, 0);
  sub_101129A0(v37, v37[18] & 0xFFBF);
}
