void __thiscall sub_10073B80(int this, int a2, int a3)
{
  float *v4; // eax
  int v5; // ecx
  int (__thiscall *v6)(int); // edx
  float *v7; // eax
  int v8; // ecx
  float *v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int); // edx
  float *v12; // eax
  bool v13; // cc
  _BYTE *v14; // ebx
  float *v15; // esi
  double v16; // st7
  double v17; // st7
  int v18; // eax
  int v20; // ebx
  int (__thiscall *v21)(int); // edx
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // esi
  _BYTE *v26; // eax
  int v27; // ecx
  char v28; // bl
  bool v29; // zf
  _BYTE v30[3073]; // [esp+4h] [ebp-F84h] BYREF
  _BYTE v31[767]; // [esp+C05h] [ebp-383h] BYREF
  float v32[3]; // [esp+F04h] [ebp-84h] BYREF
  float v33[3]; // [esp+F10h] [ebp-78h] BYREF
  float v34[3]; // [esp+F1Ch] [ebp-6Ch] BYREF
  float v35[3]; // [esp+F28h] [ebp-60h] BYREF
  float v36[3]; // [esp+F34h] [ebp-54h] BYREF
  float v37[3]; // [esp+F40h] [ebp-48h] BYREF
  float v38[3]; // [esp+F4Ch] [ebp-3Ch] BYREF
  float v39; // [esp+F58h] [ebp-30h]
  float v40; // [esp+F5Ch] [ebp-2Ch]
  float v41; // [esp+F60h] [ebp-28h]
  int v42; // [esp+F64h] [ebp-24h]
  int v43; // [esp+F68h] [ebp-20h]
  int v44; // [esp+F6Ch] [ebp-1Ch]
  float v45; // [esp+F70h] [ebp-18h] BYREF
  float v46; // [esp+F74h] [ebp-14h]
  float v47; // [esp+F78h] [ebp-10h]
  int v48; // [esp+F7Ch] [ebp-Ch]
  int v49; // [esp+F80h] [ebp-8h]
  int v50; // [esp+F84h] [ebp-4h]
  int v51; // [esp+F94h] [ebp+Ch]
  int v52; // [esp+F94h] [ebp+Ch]

  if ( *(_DWORD *)(this + 836) )
  {
    v4 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 836) + 36))(*(_DWORD *)(this + 836));
    v5 = *(_DWORD *)(this + 836);
    v36[0] = *v4;
    v36[1] = v4[1];
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 40);
    v36[2] = v4[2];
    v7 = (float *)v6(v5);
    v8 = *(_DWORD *)(this + 836);
    v38[0] = *v7;
    v38[1] = v7[1];
    v38[2] = v7[2];
    v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 260))(v8);
    v10 = *(_DWORD *)(this + 836);
    v45 = *v9;
    v46 = v9[1];
    v11 = *(int (__thiscall **)(int))(*(_DWORD *)v10 + 264);
    v47 = v9[2];
    v12 = (float *)v11(v10);
    v39 = *v12;
    v40 = v12[1];
    v41 = v12[2];
    sub_101EE040(v38, v33, v32, v34);
    v13 = *(_DWORD *)(this + 24) <= 0;
    v48 = 0;
    v37[0] = v39 - v45;
    v37[1] = v40 - v46;
    v37[2] = v41 - v47;
    if ( !v13 )
    {
      v14 = v31;
      v15 = (float *)v30;
      do
      {
        sub_100739F0((_DWORD *)this, v15, (int)v35, v48, &v45, v37, v33, v32, v34, v36);
        v16 = *v15 * v35[0];
        v15 += 3;
        v14 += 3;
        v50 = (int)(v16 * 255.0);
        *(v14 - 4) = v50;
        v50 = (int)(*(v15 - 2) * v35[1] * 255.0);
        *(v14 - 3) = v50;
        v17 = 255.0 * (*(v15 - 1) * v35[2]);
        v18 = ++v48;
        v50 = (int)v17;
        *(v14 - 2) = (int)v17;
      }
      while ( v18 < *(_DWORD *)(this + 24) );
    }
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 52))(a3);
    v21 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 56);
    v43 = v20;
    v22 = v21(a3);
    v51 = v22;
    if ( v20 == *(_DWORD *)(this + 28) && v22 == *(_DWORD *)(this + 32) )
    {
      v50 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 148))(a3, 0, 0, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 76))(a3) == 2 )
      {
        v23 = v51;
        v24 = 0;
        if ( v51 > 0 )
        {
          v52 = 0;
          v48 = 0;
          v42 = 3 * v20;
          v49 = v23;
          do
          {
            v25 = 0;
            if ( v20 > 0 )
            {
              v26 = (_BYTE *)(v24 + v50 + 1);
              v44 = 1;
              do
              {
                ++v25;
                v27 = 3 * *(unsigned __int8 *)(v52 + *(_DWORD *)(this + 4) + v25 - 1);
                *(v26 - 1) = v30[v27 + 3072];
                v28 = v31[v27];
                LOBYTE(v27) = v31[v27 + 1];
                *v26 = v28;
                v26[v44] = v27;
                v20 = v43;
                v26 += 3;
              }
              while ( v25 < v43 );
            }
            v24 = v42 + v48;
            v52 += v20;
            v29 = v49-- == 1;
            v48 += v42;
          }
          while ( !v29 );
        }
      }
    }
  }
}
