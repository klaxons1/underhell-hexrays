int __userpurge sub_10356860@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int v5; // eax
  double v7; // st7
  double v8; // st7
  int (__thiscall *v9)(int); // eax
  double v10; // st7
  unsigned int v11; // eax
  int *v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  const char *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // esi
  float X; // [esp+38h] [ebp-A8h]
  int X_4; // [esp+3Ch] [ebp-A4h]
  int v24[20]; // [esp+44h] [ebp-9Ch] BYREF
  _DWORD v25[8]; // [esp+94h] [ebp-4Ch] BYREF
  float v26[3]; // [esp+B4h] [ebp-2Ch] BYREF
  float v27; // [esp+C0h] [ebp-20h]
  float v28; // [esp+C4h] [ebp-1Ch]
  float v29; // [esp+C8h] [ebp-18h]
  float v30; // [esp+CCh] [ebp-14h]
  float v31; // [esp+D0h] [ebp-10h] BYREF
  float v32; // [esp+D4h] [ebp-Ch]
  float v33; // [esp+D8h] [ebp-8h]
  int v34; // [esp+DCh] [ebp-4h]
  int v35; // [esp+E8h] [ebp+8h]
  float v36; // [esp+E8h] [ebp+8h]
  int v37; // [esp+E8h] [ebp+8h]

  v5 = *(_DWORD *)(a4 + 64);
  if ( v5 && ((v5 & 0x40) == 0 || *(float *)(a4 + 52) < 50.0) )
    return 0;
  sub_1001E4E0(v24, a4);
  if ( (*(_DWORD *)(a1 + 248) & 0x2000) == 0 )
    sub_1023C380((_DWORD *)a1, (int)"NPC_CombineGunship.Pain", 0.0, 0);
  v28 = *(float *)&v24[1];
  v29 = *(float *)&v24[2];
  v30 = *(float *)&v24[3];
  off_10689714();
  if ( !*(_BYTE *)(a1 + 4080) )
  {
    v31 = v28 * 200.0;
    v32 = v29 * 200.0;
    v33 = 200.0 * v30;
    sub_100EA150(a1, &v31);
  }
  if ( !*(_BYTE *)(a1 + 4149) )
  {
    v35 = *(_DWORD *)(dword_106E69CC + 48);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
    {
      v7 = ceil((double)v35 * 0.5);
    }
    else
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3) )
      {
LABEL_15:
        v36 = (float)v35;
        v34 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 448))(a1, a3, a2);
        v8 = (double)v34;
        v9 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 448);
        v34 = *(_DWORD *)(a1 + 220);
        *(float *)&v24[13] = v8 / v36 + 1.0;
        v27 = (float)v34;
        v34 = v9(a1);
        v10 = v36 - v27 / ((double)v34 / v36);
        if ( (int)v10 == 1 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
            sub_10351280((_DWORD *)a1, 3);
          else
            sub_10351280((_DWORD *)a1, 1);
        }
        else
        {
          sub_10351280((_DWORD *)a1, (int)v10);
        }
        sub_103564E0((_DWORD *)a1);
        v11 = *(_DWORD *)(a1 + 4088);
        if ( v11 != -1
          && off_1061BE18[4 * (*(_DWORD *)(a1 + 4088) & 0xFFF) + 2] == v11 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(a1 + 4088) & 0xFFF) + 1] )
        {
          if ( (int)v10 < 2 )
          {
            v12 = (int *)sub_1026A890((unsigned int *)(a1 + 4088));
            sub_100F5880(v12, 8.0);
          }
          v13 = *(_DWORD *)(a1 + 4088);
          if ( v13 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4088) & 0xFFF) + 2] != v13 >> 12 )
            v14 = 0;
          else
            v14 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4088) & 0xFFF) + 1];
          sub_10284B60(v14, a1, "exhaustl");
        }
        v15 = *(_DWORD *)(a1 + 252) >> 12;
        v31 = -v28 * 200.0;
        v32 = -v29 * 200.0;
        v33 = 200.0 * -v30;
        if ( (v15 & 1) != 0 )
          sub_100DAFD0(a1);
        v16 = *(_DWORD *)(a1 + 252) >> 11;
        v26[0] = *(float *)(a1 + 476) + v31;
        v26[1] = *(float *)(a1 + 480) + v32;
        v26[2] = *(float *)(a1 + 484) + v33;
        if ( (v16 & 1) != 0 )
          sub_100DAE60(a1);
        sub_10219BB0(v25);
        v25[0] = &CPVSFilter::`vftable';
        sub_1021A300(v25, a1 + 580);
        v37 = 10;
        do
        {
          v17 = *(_DWORD *)dword_106B31F0;
          v18 = sub_10215C30((int)&dword_106C29C8, "MetalChunks", -1);
          v19 = (*(int (__thiscall **)(int, const char *, float, int))(v17 + 8))(
                  dword_106B31F0,
                  v18,
                  COERCE_FLOAT(LODWORD(X)),
                  X_4);
          v20 = *(_DWORD *)(a1 + 252);
          v31 = 40.0;
          v32 = 40.0;
          v33 = 40.0;
          v21 = v19;
          if ( (v20 & 0x800) != 0 )
            sub_100DAE60(a1);
          X_4 = 2;
          X = 2.5;
          ((void (__stdcall *)(_DWORD *, _DWORD, int, float *, float *, float *, int, int, int))(*off_1065C5EC)[12])(
            v25,
            0.0,
            a1 + 580,
            &flt_106F1CB4,
            &v31,
            v26,
            v21,
            400,
            1);
          --v37;
        }
        while ( v37 );
        std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v25);
        return sub_10035940((int *)a1, a1, (int)v24);
      }
      v7 = floor((double)v35 * 1.5);
    }
    v35 = (int)v7;
    goto LABEL_15;
  }
  return sub_10035940((int *)a1, a1, (int)v24);
}
