int __thiscall sub_10271E30(int this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  double v5; // st7
  double v6; // st6
  int v7; // ebx
  double v8; // st5
  double v9; // st4
  double v10; // st4
  double v11; // st3
  int v12; // esi
  double v13; // rt1
  double v14; // st3
  double v15; // st4
  double v16; // st3
  bool v17; // c0
  bool v18; // c3
  double v19; // st7
  double v20; // st0
  double v21; // st7
  float v23; // [esp+1Ch] [ebp-7Ch]
  float v24; // [esp+20h] [ebp-78h]
  float v25; // [esp+24h] [ebp-74h]
  int v26; // [esp+28h] [ebp-70h]
  float v27; // [esp+28h] [ebp-70h]
  int v28; // [esp+2Ch] [ebp-6Ch]
  float v29; // [esp+2Ch] [ebp-6Ch]
  float v30; // [esp+30h] [ebp-68h] BYREF
  float v31; // [esp+34h] [ebp-64h]
  float v32; // [esp+38h] [ebp-60h] BYREF
  float v33; // [esp+3Ch] [ebp-5Ch]
  float v34; // [esp+44h] [ebp-54h]
  float v35; // [esp+4Ch] [ebp-4Ch]
  float v36; // [esp+54h] [ebp-44h]
  float v37; // [esp+58h] [ebp-40h] BYREF
  float v38; // [esp+5Ch] [ebp-3Ch]
  float v39; // [esp+60h] [ebp-38h]
  float v40; // [esp+64h] [ebp-34h]
  float v41; // [esp+68h] [ebp-30h]
  float v42; // [esp+6Ch] [ebp-2Ch]
  float v43; // [esp+70h] [ebp-28h]
  float v44; // [esp+74h] [ebp-24h]
  float v45; // [esp+78h] [ebp-20h]
  float v46; // [esp+7Ch] [ebp-1Ch]
  float v47; // [esp+80h] [ebp-18h]
  float v48; // [esp+84h] [ebp-14h]
  float v49; // [esp+88h] [ebp-10h]
  float v50; // [esp+8Ch] [ebp-Ch]
  float v51; // [esp+90h] [ebp-8h]
  float v52; // [esp+94h] [ebp-4h]

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v32, (int)&v30);
  v2 = dword_1047CA6C;
  v3 = *(_DWORD *)dword_1047CA6C;
  v4 = sub_10236700((float *)this);
  (*(void (__thiscall **)(int, int, int, int, int))(v3 + 44))(v2, 255, 255, 255, v4);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(this + 224));
  v5 = 0.0;
  v6 = 0.0;
  v28 = 0;
  v24 = 0.0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v5;
    v26 = 0;
    if ( !v7 || v7 == 2 )
    {
      v23 = *(float *)(this + 232);
      v10 = (double)*(int *)(this + 216);
    }
    else
    {
      v9 = 1.0 - (*(float *)(this + 232) + *(float *)(this + 232));
      if ( v9 <= v5 )
        v9 = 0.0;
      v23 = v9;
      v10 = (double)((LODWORD(v30) - 2 * *(_DWORD *)(this + 216))
                   & ((LODWORD(v30) - 2 * *(_DWORD *)(this + 216) < 0) - 1));
    }
    v11 = (double)v28;
    v12 = 0;
    v31 = v11;
    v13 = v11;
    v14 = v10 + v11;
    v15 = v13;
    v29 = v14;
    v35 = v14;
    while ( 1 )
    {
      if ( !v12 || v12 == 2 )
      {
        v25 = (float)*(int *)(this + 220);
        v19 = *(float *)(this + 228);
      }
      else
      {
        v16 = 1.0 - (*(float *)(this + 228) + *(float *)(this + 228));
        v17 = v16 < v5;
        v18 = v16 == v5;
        v19 = v16;
        if ( v17 || v18 )
          v19 = 0.0;
        v25 = (float)((LODWORD(v32) - 2 * *(_DWORD *)(this + 220))
                    & ((LODWORD(v32) - 2 * *(_DWORD *)(this + 220) < 0) - 1));
      }
      v33 = v19 + v8;
      v34 = v23 + v6;
      v36 = v34;
      v20 = (double)v26;
      v37 = v20;
      v38 = v15;
      v39 = v8;
      v40 = v6;
      v27 = v20 + v25;
      v41 = v27;
      v42 = v38;
      v43 = v33;
      v44 = v40;
      v45 = v27;
      v46 = v29;
      v47 = v33;
      v48 = v34;
      v49 = v20;
      v50 = v35;
      v51 = v8;
      v52 = v34;
      (*(void (__thiscall **)(int, int, float *))(*(_DWORD *)dword_1047CA6C + 396))(dword_1047CA6C, 4, &v37);
      ++v12;
      v26 = (int)v27;
      if ( v12 >= 3 )
        break;
      v5 = 0.0;
      v8 = v33;
      v15 = v31;
      v6 = v24;
    }
    v21 = v23 + v24;
    ++v7;
    v28 = (int)v29;
    v24 = v21;
    if ( v7 >= 3 )
      break;
    v6 = v21;
    v5 = 0.0;
  }
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, 0);
}
