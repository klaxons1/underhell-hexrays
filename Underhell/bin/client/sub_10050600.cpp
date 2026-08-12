int __thiscall sub_10050600(int this, void (__thiscall ***a2)(_DWORD, float *, float *))
{
  double v3; // st7
  double v4; // st7
  int v5; // edx
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  int v8; // edi
  int result; // eax
  int v10; // edx
  int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  double v17; // st7
  double v18; // st4
  double v19; // st1
  double v20; // rt1
  _BYTE v21[208]; // [esp+8h] [ebp-228h] BYREF
  int v22; // [esp+D8h] [ebp-158h]
  int v23; // [esp+1A0h] [ebp-90h]
  _BYTE v24[12]; // [esp+1F0h] [ebp-40h] BYREF
  float v25; // [esp+1FCh] [ebp-34h] BYREF
  float v26; // [esp+200h] [ebp-30h]
  float v27; // [esp+204h] [ebp-2Ch]
  int v28; // [esp+208h] [ebp-28h]
  int v29; // [esp+20Ch] [ebp-24h]
  int v30; // [esp+210h] [ebp-20h]
  float v31; // [esp+214h] [ebp-1Ch] BYREF
  float v32; // [esp+218h] [ebp-18h]
  float v33; // [esp+21Ch] [ebp-14h]
  float v34; // [esp+220h] [ebp-10h] BYREF
  float v35; // [esp+224h] [ebp-Ch]
  float v36; // [esp+228h] [ebp-8h]
  int v37; // [esp+22Ch] [ebp-4h]

  v25 = *(float *)(this + 1212) * -1.0;
  v26 = *(float *)(this + 1216) * -1.0;
  v27 = -1.0 * *(float *)(this + 1220);
  sub_101EE190(&v25, v24);
  sub_101EE040(v24, 0, &v31, &v34);
  v3 = *(float *)(this + 1204);
  v31 = v31 * v3;
  v32 = v32 * v3;
  v33 = v3 * v33;
  v4 = *(float *)(this + 1208);
  v34 = v34 * v4;
  v35 = v35 * v4;
  v36 = v4 * v36;
  sub_10016C20((int)v21);
  v5 = *(_DWORD *)dword_1047C96C;
  v29 = -1;
  v28 = -1;
  v6 = *(int (__thiscall **)(int))(v5 + 380);
  v30 = 0;
  v7 = v6(dword_1047C96C);
  v8 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  for ( result = *(unsigned __int16 *)(this + 1260);
        (_WORD)result != 0xFFFF;
        result = *(unsigned __int16 *)(v11 + *(_DWORD *)(this + 1248) + 8) )
  {
    v10 = *(_DWORD *)(this + 1248);
    v11 = 10 * (unsigned __int16)result;
    v12 = *(char *)(v11 + v10 + 4);
    v13 = v11 + v10;
    if ( v29 != v12 || v28 != *(char *)(v13 + 3) )
    {
      v14 = *(char *)(v13 + 3);
      v29 = *(char *)(v11 + v10 + 4);
      *(_DWORD *)(this + 1244) = *(_DWORD *)(this + 16 * (v14 + v12 + 2 * v14) + 2076);
      v28 = v14;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 16))(v8, 0);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v8 + 36))(v8, *(_DWORD *)(this + 2256), this + 4);
      v30 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v8 + 224))(v8, 1, 0, 0, 0);
    }
    v15 = *(_DWORD *)(this + 1248);
    v16 = *(char *)(v15 + v11);
    v37 = *(char *)(v15 + v11 + 1);
    v17 = (double)v37;
    v37 = v16;
    v18 = (double)v16;
    v19 = *(float *)(this + 1232);
    v20 = v32 * v18 + *(float *)(this + 1228);
    v25 = v34 * v17 + v31 * v18 + *(float *)(this + 1224);
    v26 = v35 * v17 + v20;
    v27 = v17 * v36 + v18 * v33 + v19;
    sub_1004FA80((float *)this, a2, v30, (int)v21, &v25, &v31, &v34, *(char *)(v15 + v11 + 2));
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
