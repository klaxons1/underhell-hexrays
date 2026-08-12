int __cdecl sub_10155350(int a1, float *a2)
{
  float v3; // ecx
  float v4; // edx
  float v5; // eax
  float v6; // ecx
  float v7; // edx
  int v8; // eax
  int result; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  float v16[3]; // [esp+8h] [ebp-24h] BYREF
  float v17; // [esp+14h] [ebp-18h] BYREF
  float v18; // [esp+18h] [ebp-14h]
  float v19; // [esp+1Ch] [ebp-10h]
  float v20; // [esp+20h] [ebp-Ch] BYREF
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+28h] [ebp-4h]
  int v23; // [esp+34h] [ebp+8h]

  v3 = *(float *)(a1 + 4);
  v4 = *(float *)(a1 + 8);
  v17 = *(float *)a1;
  v5 = *(float *)(a1 + 12);
  v18 = v3;
  v6 = *(float *)(a1 + 16);
  v20 = v5;
  v19 = v4;
  v7 = *(float *)(a1 + 20);
  v21 = v6;
  v22 = v7;
  v16[0] = (v5 - v17) * 1.1 + *(float *)a1;
  v16[1] = (v6 - v18) * 1.1 + *(float *)(a1 + 4);
  v16[2] = (v7 - v19) * 1.1 + *(float *)(a1 + 8);
  if ( sub_100AF2F0((_DWORD *)a1) )
  {
    v8 = *(_DWORD *)(a1 + 80);
    if ( v8 )
      result = (*(int (__thiscall **)(int, int, int, float *, float *))(*(_DWORD *)dword_10413190 + 36))(
                 dword_10413190,
                 a1,
                 v8 - 1,
                 &v17,
                 &v20);
    else
      result = (*(int (__thiscall **)(int, int, float *, float *, float *))(*(_DWORD *)dword_1041315C + 8))(
                 dword_1041315C,
                 a1,
                 v16,
                 &v17,
                 &v20);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 76);
    if ( !v10 )
    {
      Msg("Couldn't find surface in GetColorForSurface()\n");
      result = (int)a2;
      *a2 = 255.0;
      a2[1] = 255.0;
      a2[2] = 255.0;
      return result;
    }
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 24))(v11);
    v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v12);
    v23 = *(_DWORD *)dword_10413178;
    v14 = (*(int (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v11 + 36))(v11, a1, &v17, &v20);
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 32))(v11, v14);
    result = (*(int (__thiscall **)(int, int, int))(v23 + 100))(dword_10413178, v13, v15);
  }
  *a2 = pow(v17, 0.4545454382896423) * v20;
  a2[1] = pow(v18, 0.4545454382896423) * v21;
  a2[2] = pow(v19, 0.4545454382896423) * v22;
  return result;
}
