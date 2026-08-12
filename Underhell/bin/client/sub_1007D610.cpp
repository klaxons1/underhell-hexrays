void __cdecl sub_1007D610(int a1, float *a2, float *a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  unsigned int v6; // eax
  int v7; // ecx
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st7
  float v13; // [esp+8h] [ebp-2Ch]
  float v14; // [esp+8h] [ebp-2Ch]
  float v15; // [esp+8h] [ebp-2Ch]
  float v16; // [esp+8h] [ebp-2Ch]
  float v17; // [esp+18h] [ebp-1Ch] BYREF
  float v18; // [esp+1Ch] [ebp-18h]
  float v19; // [esp+20h] [ebp-14h]
  float v20; // [esp+24h] [ebp-10h] BYREF
  float v21; // [esp+28h] [ebp-Ch]
  float v22; // [esp+2Ch] [ebp-8h]
  float v23; // [esp+30h] [ebp-4h]
  float v24; // [esp+3Ch] [ebp+8h]

  v3 = (**(int (__thiscall ***)(int))a1)(a1);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 28))(v3);
  v5 = v4;
  if ( v4 && sub_10037870(v4) )
  {
    v6 = *(_DWORD *)(v5 + 324);
    if ( v6 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v5 + 324) & 0xFFF) + 2) == v6 >> 12
      && (v7 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v5 + 324) & 0xFFF) + 1)) != 0 )
    {
      v8 = v7 + 4;
    }
    else
    {
      v8 = 0;
    }
    sub_1007D610(v8, a2, a3);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v5 + 4) + 80))(v5 + 4, &v20, &v17);
    v9 = (float *)sub_10034A00((char *)v5);
    v13 = v9[1] * v9[1] + *v9 * *v9 + v9[2] * v9[2];
    v23 = off_103EDFE0(v13);
    v14 = v21 * v21 + v20 * v20 + v22 * v22;
    v24 = off_103EDFE0(v14);
    v15 = v17 * v17 + v18 * v18 + v19 * v19;
    if ( off_103EDFE0(v15) >= v24 )
    {
      v10 = v17 * v17 + v18 * v18;
      v11 = v19;
    }
    else
    {
      v10 = v21 * v21 + v20 * v20;
      v11 = v22;
    }
    v16 = v10 + v11 * v11;
    v12 = off_103EDFE0(v16);
    if ( v23 >= v12 )
      v12 = v23;
    *a2 = *a2 - v12;
    a2[1] = a2[1] - v12;
    a2[2] = a2[2] - v12;
    *a3 = *a3 + v12;
    a3[1] = v12 + a3[1];
    a3[2] = v12 + a3[2];
  }
  else
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 84))(a1, a2, a3);
  }
}
