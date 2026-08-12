void __thiscall sub_10210CB0(_DWORD **this, int a2, int a3)
{
  float v3; // edx
  float *v4; // esi
  float v5; // eax
  int v6; // eax
  float v7; // ecx
  float v8; // eax
  float v9; // edx
  double v10; // st6
  double v11; // st5
  double v12; // rt2
  double v13; // st5
  _DWORD v14[3]; // [esp+Ch] [ebp-4Ch] BYREF
  _DWORD v15[3]; // [esp+18h] [ebp-40h] BYREF
  float v16; // [esp+24h] [ebp-34h]
  float v17; // [esp+28h] [ebp-30h]
  float v18; // [esp+2Ch] [ebp-2Ch]
  float v19; // [esp+30h] [ebp-28h]
  float v20; // [esp+34h] [ebp-24h]
  float v21; // [esp+38h] [ebp-20h]
  float v22; // [esp+3Ch] [ebp-1Ch] BYREF
  float v23; // [esp+40h] [ebp-18h]
  float v24; // [esp+44h] [ebp-14h]
  float v25; // [esp+48h] [ebp-10h] BYREF
  float v26; // [esp+4Ch] [ebp-Ch]
  float v27; // [esp+50h] [ebp-8h]
  _DWORD **v28; // [esp+54h] [ebp-4h]

  v3 = *(float *)(a3 + 12 * a2 + 36);
  v4 = (float *)(a3 + 12 * a2 + 32);
  v5 = *(float *)(a3 + 12 * a2 + 40);
  v28 = this;
  v16 = *v4;
  v17 = v3;
  v18 = v5;
  if ( off_10689714() > 1000.0 )
  {
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD *))(*v28[106] + 188))(v28[106], &v25, v14);
    (***(void (__thiscall ****)(_DWORD, float *))(a3 + 28))(*(_DWORD *)(a3 + 28), &v22);
    if ( a2 == 1 )
    {
      v22 = v22 * -1.0;
      v23 = v23 * -1.0;
      v24 = -1.0 * v24;
    }
    if ( v17 * v23 + v16 * v22 + v18 * v24 > 0.3 )
    {
      v6 = *(unsigned __int16 *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
                                   dword_106BAFF8,
                                   *(_DWORD *)(a3 + 4 * (a2 == 0) + 8))
                               + 72);
      if ( v6 != 77 && v6 != 71 && v6 != 88 )
      {
        *(float *)&v15[1] = v26;
        v7 = *(float *)(a3 + 12 * a2 + 36);
        *(float *)v15 = v25;
        v8 = *v4;
        *(float *)&v15[2] = v27;
        v9 = *(float *)(a3 + 12 * a2 + 40);
        v20 = v7;
        v19 = v8;
        v21 = v9;
        off_10689714();
        v10 = v19 * 8.0;
        v19 = v10;
        v11 = v20 * 8.0;
        v20 = v11;
        v12 = v11;
        v13 = 8.0 * v21;
        v21 = v13;
        v25 = v10 + v25;
        v26 = v12 + v26;
        v27 = v13 + v27;
        sub_10210B80(&dword_106B9EC0, (int)v28, (int)sub_1020F0B0, 0, &v25, v15, v14);
      }
    }
  }
}
