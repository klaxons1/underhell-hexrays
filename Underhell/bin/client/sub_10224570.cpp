int __thiscall sub_10224570(float *this, int *a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // ebp
  int result; // eax
  int v9; // ebx
  int v10; // ebp
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  int v14; // edi
  int v15; // edx
  int v16; // ebp
  int v17; // eax
  float v18; // [esp+38h] [ebp-268h]
  float v19; // [esp+38h] [ebp-268h]
  int v20; // [esp+3Ch] [ebp-264h] BYREF
  int v21; // [esp+40h] [ebp-260h]
  float *v22; // [esp+44h] [ebp-25Ch]
  int v23[3]; // [esp+48h] [ebp-258h] BYREF
  int v24[45]; // [esp+54h] [ebp-24Ch] BYREF
  int v25; // [esp+108h] [ebp-198h]
  int v26; // [esp+10Ch] [ebp-194h]
  char v27; // [esp+110h] [ebp-190h]
  _DWORD v28[4]; // [esp+114h] [ebp-18Ch] BYREF
  int v29; // [esp+124h] [ebp-17Ch]
  int v30; // [esp+128h] [ebp-178h]
  int v31; // [esp+12Ch] [ebp-174h]
  int v32; // [esp+194h] [ebp-10Ch]
  int v33; // [esp+1ECh] [ebp-B4h]
  int v34; // [esp+1F4h] [ebp-ACh]
  int v35; // [esp+1F8h] [ebp-A8h]
  int v36[25]; // [esp+23Ch] [ebp-64h] BYREF

  v5 = *(_DWORD *)(a3 + 64);
  v22 = this;
  v6 = sub_101F7960(v5);
  if ( *(_BYTE *)(a4 + 8) )
    sub_102232A0(a3, (float *)a4, (int)(this + 11), a4 + 12);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 204))(v6);
  if ( !(_BYTE)result )
  {
    (*(void (__thiscall **)(int *, int, _DWORD))(*a2 + 36))(a2, v6, 0);
    v18 = v22[21] * 1024.0;
    (*(void (__thiscall **)(int *, int *))(*a2 + 588))(a2, v23);
    sub_102222F0((int)v36, a3, 0, v18, *(_DWORD *)(a3 + 8));
    v9 = sub_10227A90(a2, 1, &v20, a4);
    v10 = (*(int (__thiscall **)(int *, int))(*a2 + 516))(a2, v6);
    v11 = (*(int (__thiscall **)(int *))(*a2 + 520))(a2);
    v12 = v11 / 6;
    if ( v10 / 4 >= v11 / 6 )
    {
      v21 = v11 / 6;
    }
    else
    {
      v12 = v10 / 4;
      v21 = v10 / 4;
    }
    v13 = 1.0;
    if ( 0.0 != *(float *)(a3 + 44) )
      v13 = 1.0 / *(float *)(a3 + 44);
    result = v20;
    if ( v20 )
    {
      while ( 1 )
      {
        v14 = v12;
        if ( v12 >= result )
          v14 = result;
        v15 = *a2;
        v20 = result - v14;
        v16 = (*(int (__thiscall **)(int *, int, _DWORD, _DWORD, _DWORD))(v15 + 224))(a2, 1, 0, 0, 0);
        sub_10016C20((int)v24);
        sub_10061780((int)v24, v16, 2, 4 * v14, 6 * v14);
        v36[17] = 0;
        if ( v14 > 0 )
        {
          do
          {
            v9 -= 16;
            v19 = v13;
            sub_102226A0(v22, (int)v24, (int)v36, *(_DWORD *)(v9 + 4), (float *)v23, v19, v9);
            --v14;
          }
          while ( v14 );
        }
        if ( v27 )
        {
          switch ( v26 )
          {
            case 4:
              v17 = 2 * v35 - 2;
              break;
            case 5:
              v17 = 2 * v35;
              break;
            case 6:
              v17 = 3 * v35 - 6;
              break;
            case 7:
              v17 = 6 * v35 / 4;
              break;
            case 8:
              v17 = 0;
              break;
            default:
              v17 = v35;
              break;
          }
          sub_10016B00(v28, v26, v17);
        }
        (*(void (__thiscall **)(int, int, int, int *))(*(_DWORD *)v25 + 80))(v25, v35, v31, v24);
        v29 = 0;
        v30 = 0;
        v34 = 0;
        v33 = 0;
        v32 = -1;
        v25 = 0;
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v16 + 48))(v16, -1, 0);
        if ( v33 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 8))(v33) )
          (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 16))(v33);
        if ( v29 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 8))(v29) )
            (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 16))(v29);
        }
        result = v20;
        if ( !v20 )
          break;
        v12 = v21;
      }
    }
  }
  return result;
}
