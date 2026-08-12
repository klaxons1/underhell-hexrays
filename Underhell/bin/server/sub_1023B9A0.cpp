char __userpurge sub_1023B9A0@<al>(void *a1@<ecx>, int a2@<edi>, int a3@<esi>, _BYTE *a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const char *v10; // eax
  char result; // al
  int v12; // ebx
  int v13; // eax
  double v14; // st7
  void *v15; // edi
  float v16; // [esp+44h] [ebp-C0h]
  int v17; // [esp+58h] [ebp-ACh] BYREF
  float v18; // [esp+5Ch] [ebp-A8h]
  int v19; // [esp+60h] [ebp-A4h]
  int v20; // [esp+64h] [ebp-A0h]
  int v21; // [esp+68h] [ebp-9Ch]
  int v22; // [esp+6Ch] [ebp-98h]
  char v23; // [esp+70h] [ebp-94h]
  int v24; // [esp+74h] [ebp-90h]
  char Source[128]; // [esp+78h] [ebp-8Ch] BYREF
  int v26; // [esp+F8h] [ebp-Ch]
  char v27[4]; // [esp+FCh] [ebp-8h] BYREF
  void *v28; // [esp+100h] [ebp-4h]

  v18 = 1.0;
  v28 = a1;
  v19 = 100;
  v20 = 100;
  v21 = 100;
  v17 = 0;
  v22 = 75;
  Source[0] = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v7 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a5, a2, a3);
  if ( v7 || (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
  {
    v8 = *(_DWORD *)(v7 + 12);
    if ( v8 )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
      if ( v9 )
      {
        v10 = *(const char **)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v9 + 28))(v9, v27);
        if ( !v10 )
          v10 = String;
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B3204 + 136))(dword_106B3204, v10);
      }
    }
  }
  result = (*(int (__thiscall **)(int, _DWORD, int, int *))(*(_DWORD *)dword_106B3204 + 164))(
             dword_106B3204,
             *(_DWORD *)(a6 + 4),
             a7,
             &v17);
  if ( result && Source[0] )
  {
    if ( !sub_10429210(Source, "vo", 2) && v17 != 5 && v17 != 2 )
      DevMsg(
        "EmitSound:  Voice wave file %s doesn't specify CHAN_VOICE or CHAN_STREAM for sound %s\n",
        Source,
        *(const char **)(a6 + 4));
    v12 = *(_DWORD *)(a6 + 16);
    if ( (v12 & 2) != 0 )
    {
      v13 = *(_DWORD *)(a6 + 20);
      v19 = v13;
    }
    else
    {
      v13 = v19;
    }
    if ( *(_DWORD *)(dword_106984AC + 48) )
    {
      v13 = (int)((1.0 - *(float *)(dword_106984F4 + 44)) * (double)(v13 / 2)
                + (double)v19 * *(float *)(dword_106984F4 + 44));
      v19 = v13;
    }
    if ( (v12 & 1) != 0 )
      v18 = *(float *)(a6 + 8);
    result = sub_1013A6A0(a5, Source, v22, v18, v12, v13, *(float **)(a6 + 24), *(float *)(a6 + 28), (int *)(a6 + 44));
    if ( !result )
    {
      v14 = *(float *)(a6 + 28);
      if ( 0.0 == v14 && v26 )
        v14 = (double)v26 * 0.001 + *(float *)(dword_106B31C8 + 12);
      v16 = v14;
      (*(void (__stdcall **)(_BYTE *, int, int, char *, float, int, int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E8 + 16))(
        a4,
        a5,
        v17,
        Source,
        COERCE_FLOAT(LODWORD(v18)),
        v22,
        *(_DWORD *)(a6 + 16) | 0x80,
        v19,
        *(_DWORD *)(a6 + 24),
        0,
        a6 + 44,
        1,
        LODWORD(v16),
        *(_DWORD *)(a6 + 40));
      if ( *(_DWORD *)(a6 + 32) )
        **(float **)(a6 + 32) = ((double (__thiscall *)(int, char *))*(_DWORD *)(*(_DWORD *)dword_106B31E8 + 12))(
                                  dword_106B31E8,
                                  Source);
      v15 = v28;
      result = (*(int (**)(void *, const char *, ...))(*(_DWORD *)v28 + 64))(
                 v28,
                 "EmitSound:  '%s' emitted as '%s' (ent %i)\n",
                 *(_DWORD *)(a6 + 4),
                 Source,
                 a5);
      if ( (*(_BYTE *)(a6 + 16) & 3) == 0 )
        return sub_1023B660(v15, a4, a5, (int)&v17, a6);
    }
  }
  return result;
}
