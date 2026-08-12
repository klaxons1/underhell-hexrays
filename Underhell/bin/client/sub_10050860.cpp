int __thiscall sub_10050860(int this, void (__thiscall ***a2)(_DWORD, float *, _BYTE *))
{
  double v3; // st7
  double v4; // st7
  int (__thiscall *v5)(int); // eax
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int result; // eax
  int v10; // edx
  double v11; // st7
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  double v15; // st6
  double v16; // st5
  double v17; // st7
  double v18; // st4
  double v19; // st1
  double v20; // st1
  _BYTE v21[208]; // [esp+Ch] [ebp-240h] BYREF
  int v22; // [esp+DCh] [ebp-170h]
  int v23; // [esp+1A4h] [ebp-A8h]
  _BYTE v24[12]; // [esp+1F4h] [ebp-58h] BYREF
  float v25[3]; // [esp+200h] [ebp-4Ch] BYREF
  float v26; // [esp+20Ch] [ebp-40h]
  float v27; // [esp+210h] [ebp-3Ch]
  int v28; // [esp+218h] [ebp-34h]
  int v29; // [esp+21Ch] [ebp-30h]
  int v30; // [esp+220h] [ebp-2Ch]
  float v31; // [esp+224h] [ebp-28h] BYREF
  float v32; // [esp+228h] [ebp-24h]
  float v33; // [esp+22Ch] [ebp-20h]
  float v34; // [esp+230h] [ebp-1Ch] BYREF
  float v35; // [esp+234h] [ebp-18h]
  float v36; // [esp+238h] [ebp-14h]
  float v37; // [esp+23Ch] [ebp-10h] BYREF
  float v38; // [esp+240h] [ebp-Ch]
  float v39; // [esp+244h] [ebp-8h]
  int v40; // [esp+248h] [ebp-4h]

  v31 = *(float *)(this + 1212) * -1.0;
  v32 = *(float *)(this + 1216) * -1.0;
  v33 = -1.0 * *(float *)(this + 1220);
  sub_101EE190(&v31, v24);
  sub_101EE040(v24, 0, &v37, &v34);
  v3 = *(float *)(this + 1204);
  v37 = v37 * v3;
  v38 = v38 * v3;
  v39 = v3 * v39;
  v4 = *(float *)(this + 1208);
  v34 = v34 * v4;
  v35 = v35 * v4;
  v36 = v4 * v36;
  sub_10016C20((int)v21);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380);
  v6 = -1;
  v29 = 0;
  v30 = -1;
  v7 = v5(dword_1047C96C);
  v8 = v7;
  v28 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  result = *(unsigned __int16 *)(this + 1260);
  if ( (_WORD)result != 0xFFFF )
  {
    do
    {
      v10 = *(_DWORD *)(this + 1248);
      v11 = 0.30000001;
      v12 = 10 * (unsigned __int16)result;
      if ( v30 != *(char *)(v12 + v10 + 4) || v6 != *(char *)(v12 + v10 + 3) )
      {
        v13 = *(_DWORD *)(this + 1248);
        v6 = *(char *)(v13 + v12 + 3);
        v30 = *(char *)(v13 + v12 + 4);
        v29 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v28 + 224))(
                v28,
                1,
                0,
                0,
                *(_DWORD *)(this + 16 * (v6 + v30 + 2 * v6) + 2072));
        v11 = 0.30000001;
      }
      v14 = *(_DWORD *)(this + 1248);
      v15 = *(float *)(this + 1212) * v11;
      v16 = *(float *)(this + 1216) * v11;
      v17 = v11 * *(float *)(this + 1220);
      v18 = (double)*(char *)(v12 + v14 + 1);
      v40 = *(char *)(v12 + v14);
      v19 = (double)v40;
      v31 = v37 * v19;
      v32 = v38 * v19;
      v33 = v19 * v39;
      v26 = *(float *)(this + 1224) + v31;
      v27 = *(float *)(this + 1228) + v32;
      v20 = *(float *)(this + 1232) + v33;
      v25[0] = v15 + v34 * v18 + v26;
      v25[1] = v16 + v35 * v18 + v27;
      v25[2] = v17 + v18 * v36 + v20;
      sub_1004FFC0((float *)this, v12, a2, v29, (int)v21, v25, &v37, &v34, *(char *)(v12 + v14 + 2));
      result = *(unsigned __int16 *)(v12 + *(_DWORD *)(this + 1248) + 8);
    }
    while ( (_WORD)result != 0xFFFF );
    v8 = v28;
  }
  if ( v8 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
  }
  if ( v23 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
    if ( (_BYTE)result )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 16))(v23);
  }
  if ( v22 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 8))(v22);
    if ( (_BYTE)result )
      return (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 16))(v22);
  }
  return result;
}
