int __thiscall sub_101A6E10(_DWORD *this)
{
  void (__thiscall *v2)(int, _DWORD); // edx
  int result; // eax
  int v4; // esi
  float *v5; // edi
  char *v6; // ebx
  float *v7; // edi
  double v8; // st7
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  bool v13; // zf
  int v14; // eax
  unsigned __int16 v15[256]; // [esp+Ch] [ebp-438h] BYREF
  unsigned __int16 v16[256]; // [esp+20Ch] [ebp-238h] BYREF
  int v17; // [esp+40Ch] [ebp-38h]
  int v18; // [esp+410h] [ebp-34h]
  _DWORD *v19; // [esp+414h] [ebp-30h]
  float *v20; // [esp+418h] [ebp-2Ch]
  int v21; // [esp+41Ch] [ebp-28h]
  _DWORD *v22; // [esp+420h] [ebp-24h]
  void *Src; // [esp+424h] [ebp-20h]
  char *v24; // [esp+428h] [ebp-1Ch]
  int v25; // [esp+42Ch] [ebp-18h] BYREF
  int v26; // [esp+430h] [ebp-14h]
  _DWORD *v27; // [esp+434h] [ebp-10h]
  int v28; // [esp+438h] [ebp-Ch] BYREF
  int *v29; // [esp+43Ch] [ebp-8h]
  int v30; // [esp+440h] [ebp-4h] BYREF

  v2 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68);
  v19 = this + 53;
  v2(dword_1047CA6C, this[53]);
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, this[54]);
  v4 = 0;
  v5 = (float *)&unk_1044C39C;
  v18 = 0;
  v26 = 0;
  v27 = &unk_1044C398;
  v22 = &unk_1044C394;
  v6 = (char *)&unk_1044C350;
  v24 = (char *)&unk_1044C370;
  v29 = &dword_1044C390;
  v20 = (float *)&unk_1044C39C;
  Src = &unk_1044C3A0;
  do
  {
    if ( !*v29 )
      break;
    if ( *((float *)off_103DC81C + 3) <= (double)*v5 )
    {
      v8 = (double)dword_103ECA2C + *((float *)off_103DC81C + 3);
      if ( v8 > *v5 )
        v8 = *v5;
      *v5 = v8;
      v28 = sub_10076720();
      v9 = (_DWORD *)*v29;
      v28 = (int)((double)v28 * 0.002083333333333333 * 140.0 + (double)v26 + 100.0);
      if ( v9 )
      {
        (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v24,
          v15,
          512);
        (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          v6,
          v16,
          512);
        v10 = sub_10076890(v19, v15);
        v11 = v9[40] - v9[39];
        v17 = v10;
        v12 = -5 - v11 - v10 + sub_10076740();
        v13 = *v22 == 0;
        v30 = v12;
        if ( v13 )
        {
          v14 = sub_10076890(v19, v16);
          v30 += -5 - v14;
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v30, v28);
          (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
            dword_1047CA6C,
            v16,
            0);
          (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 84))(dword_1047CA6C, &v30, &v28);
          v12 = v30 + 5;
          v30 += 5;
        }
        v13 = *v27 == 0;
        v25 = -16756481;
        if ( !v13 )
        {
          v21 = -16060406;
          v25 = -16060406;
        }
        sub_100B3BE0(v9, v12, v28, &v25);
        v30 += v9[40] - v9[39];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v30, v28);
        (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
          dword_1047CA6C,
          v15,
          0);
        v4 = v18;
      }
      v7 = v20;
      result = 80;
    }
    else
    {
      memcpy(v6, Src, 80 * (4 - v4));
      v26 -= 20;
      result = 80;
      Src = (char *)Src - 80;
      v29 -= 20;
      v24 -= 80;
      v22 -= 20;
      --v4;
      v7 = v5 - 20;
      v6 -= 80;
      v27 -= 20;
    }
    v26 += 20;
    Src = (char *)Src + 80;
    v29 += 20;
    v24 += 80;
    v22 += 20;
    v27 += 20;
    ++v4;
    v5 = v7 + 20;
    v6 += 80;
    v18 = v4;
    v20 = v5;
  }
  while ( v4 < 4 );
  return result;
}
