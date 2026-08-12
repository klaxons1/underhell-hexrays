char __thiscall sub_10080C20(int this, int a2)
{
  char result; // al
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int *v8; // ecx
  int v9; // eax
  double v10; // st7
  _DWORD *v11; // ebx
  int v12; // edi
  void *v13; // eax
  int v14; // edi
  int v15; // ebx
  void *v16; // eax
  _DWORD *v17; // ebx
  int v18; // edi
  void *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // ecx
  int v22; // eax
  int v23; // eax
  _DWORD v24[3]; // [esp+24h] [ebp-20h] BYREF
  float v25; // [esp+30h] [ebp-14h] BYREF
  float v26; // [esp+34h] [ebp-10h]
  float v27; // [esp+38h] [ebp-Ch]
  float v28; // [esp+3Ch] [ebp-8h]
  char v29; // [esp+43h] [ebp-1h]
  int v30; // [esp+4Ch] [ebp+8h]
  _DWORD *v31; // [esp+4Ch] [ebp+8h]

  result = 0;
  if ( a2 )
  {
    if ( (sub_100A61B0(*(_DWORD *)(this + 36)) & 4) != 0 || *(_BYTE *)(this + 93) )
    {
      if ( 0.0 != *(float *)(a2 + 108) )
        *(float *)(*(_DWORD *)(this + 4) + 108) = *(float *)(a2 + 108);
      v15 = *(_DWORD *)(this + 36);
      sub_100B9C50(v15);
      *(_DWORD *)(v15 + 44) = -1;
      v16 = (void *)sub_1042FCC0(48);
      if ( v16 )
      {
        v17 = (_DWORD *)sub_100B9A20(v16, a2 + 716, 0.0, *(_DWORD *)(this + 12), 2, -1);
        v31 = v17;
      }
      else
      {
        v31 = 0;
        v17 = 0;
      }
      v17[6] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
      v18 = sub_1007E2C0((_DWORD *)this, a2);
      if ( v18 )
      {
        v19 = (void *)sub_1042FCC0(48);
        if ( v19 )
          v17 = (_DWORD *)sub_100B9A20(v19, v18 + 716, 0.0, *(_DWORD *)(this + 12), 2, -1);
        else
          v17 = 0;
        v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18);
        v21 = v31;
        v17[6] = *v20;
        v22 = v31[10];
        if ( v22 )
          *(_DWORD *)(v22 + 44) = 0;
        v31[10] = v17;
        if ( v17 )
        {
          v23 = v17[11];
          if ( v23 )
            *(_DWORD *)(v23 + 40) = 0;
          *(_DWORD *)(v31[10] + 44) = v31;
        }
      }
      else
      {
        v21 = v31;
      }
      v17[8] |= 8u;
      sub_100A61F0(v21, 1);
      return 1;
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 724);
      v6 = *(_DWORD *)(a2 + 716);
      v24[1] = *(_DWORD *)(a2 + 720);
      v7 = *(_DWORD *)(this + 4);
      v24[2] = v5;
      v24[0] = v6;
      (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v7 + 2040))(v7, a2, v24);
      sub_100A60D0(v24);
      v8 = *(int **)(this + 4);
      v9 = *v8;
      v28 = *(float *)(*(_DWORD *)(this + 36) + 4);
      v10 = ((double (__thiscall *)(int *))*(_DWORD *)(v9 + 2044))(v8);
      if ( v28 < v10 )
      {
        *(float *)(*(_DWORD *)(this + 36) + 4) = v10;
        v28 = v10;
      }
      result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 76))(this);
      v29 = result;
      if ( result )
      {
        if ( 0.0 != *(float *)(a2 + 108) )
          *(float *)(*(_DWORD *)(this + 4) + 108) = *(float *)(a2 + 108);
        v11 = (_DWORD *)sub_100B99B0(*(_DWORD *)(this + 36));
        v11[8] |= 2u;
        sub_10019680(v11 + 6, a2);
        v12 = sub_1007E2C0((_DWORD *)this, a2);
        v30 = v12;
        if ( v12 )
        {
          v11[8] &= ~8u;
          v13 = (void *)sub_1042FCC0(48);
          if ( v13 )
            v14 = sub_100B9A20(v13, v12 + 716, 0.0, *(_DWORD *)(this + 12), 10, -1);
          else
            v14 = 0;
          v25 = *(float *)v14;
          v26 = *(float *)(v14 + 4);
          v27 = *(float *)(v14 + 8);
          (*(void (__thiscall **)(_DWORD, int, float *))(**(_DWORD **)(this + 4) + 2040))(
            *(_DWORD *)(this + 4),
            v30,
            &v25);
          *(float *)v14 = v25;
          *(float *)(v14 + 4) = v26;
          *(float *)(v14 + 8) = v27;
          *(float *)(*(_DWORD *)(this + 36) + 4) = v28;
          sub_10019680((_DWORD *)(v14 + 24), v30);
          sub_1007DC70(v11, v14);
          sub_100A60D0(v14);
        }
        return v29;
      }
    }
  }
  return result;
}
