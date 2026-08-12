int __usercall sub_1013D2D0@<eax>(int a1@<edi>, int ArgList)
{
  int result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // esi
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  int v14; // eax
  char Buffer[260]; // [esp+8h] [ebp-2FCh] BYREF
  _DWORD *v16[44]; // [esp+10Ch] [ebp-1F8h] BYREF
  char v17; // [esp+1BCh] [ebp-148h]
  int v18; // [esp+1C0h] [ebp-144h]
  int v19; // [esp+1C4h] [ebp-140h]
  char v20; // [esp+1C8h] [ebp-13Ch]
  _DWORD *v21; // [esp+1CCh] [ebp-138h] BYREF
  char v22; // [esp+1D8h] [ebp-12Ch]
  int v23; // [esp+1DCh] [ebp-128h]
  int v24; // [esp+1E0h] [ebp-124h]
  int v25; // [esp+1E4h] [ebp-120h]
  _DWORD *v26; // [esp+1E8h] [ebp-11Ch]
  int v27; // [esp+1ECh] [ebp-118h]
  char v28; // [esp+1FCh] [ebp-108h]
  _DWORD v29[44]; // [esp+200h] [ebp-104h] BYREF
  int v30; // [esp+2B0h] [ebp-54h]
  float *v31; // [esp+2B8h] [ebp-4Ch]
  float *v32; // [esp+2C0h] [ebp-44h]
  float v33; // [esp+2F4h] [ebp-10h]
  float v34; // [esp+2F8h] [ebp-Ch]
  float v35; // [esp+2FCh] [ebp-8h]
  float v36; // [esp+300h] [ebp-4h]

  sub_10228370(Buffer, 0x104u, "debug/debugfbtexture%d", ArgList);
  result = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             Buffer,
             "Other textures",
             1,
             0);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
      if ( v4 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 36))(v4, v3, 0);
      v5 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v4 + 224))(v4, 1, 0, 0, 0);
      v34 = *(float *)(dword_1043A4A4 + 44);
      v35 = *(float *)(dword_1043A4A4 + 44);
      sub_10016C20((int)v16);
      v18 = v5;
      v20 = 1;
      v19 = 7;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 40))(v5, 2);
      (*(void (__thiscall **)(int, int, int, _DWORD **))(*(_DWORD *)v18 + 68))(v18, 4, 6, v16);
      v26 = v16[39];
      v23 = v5 + 4;
      v22 = v17;
      v25 = 0;
      v24 = 6;
      v28 = 0;
      v21 = v16[41];
      v27 = 0;
      sub_10016990((int)v29, v5, 4, v16);
      v27 = 0;
      sub_10016A00(v29);
      v6 = v31;
      v33 = (double)ArgList * v34;
      *v31 = v33;
      v6[1] = 0.0;
      v6[2] = 0.0;
      v7 = v32;
      *v32 = 0.001953125;
      v7[1] = 0.001953125;
      sub_10016A80(v29);
      v8 = v31;
      v36 = (double)(ArgList + 1) * v34;
      *v31 = v36;
      v8[1] = 0.0;
      v8[2] = 0.0;
      v9 = v32;
      *v32 = 1.0019531;
      v9[1] = 0.001953125;
      sub_10016A80(v29);
      v10 = v31;
      *v31 = v36;
      v10[1] = v35;
      v10[2] = 0.0;
      v11 = v32;
      *v32 = 1.0019531;
      v11[1] = 1.0019531;
      sub_10016A80(v29);
      v12 = v31;
      *v31 = v33;
      v12[1] = v35;
      v12[2] = 0.0;
      v13 = v32;
      *v32 = 0.001953125;
      v13[1] = 1.0019531;
      sub_10016A80(v29);
      if ( v20 )
      {
        switch ( v19 )
        {
          case 4:
            v14 = 2 * v30 - 2;
            break;
          case 5:
            v14 = 2 * v30;
            break;
          case 6:
            v14 = 3 * v30 - 6;
            break;
          case 7:
            v14 = 6 * v30 / 4;
            break;
          case 8:
            v14 = 0;
            break;
          default:
            v14 = v30;
            break;
        }
        sub_10016B00(&v21, v19, v14);
      }
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v18 + 80))(v18, v30, v25);
      v23 = 0;
      v24 = 0;
      v29[43] = 0;
      v29[41] = 0;
      v29[19] = -1;
      v18 = 0;
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v5 + 48))(v5, -1, 0);
      sub_10016BC0(v16);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    }
  }
  return result;
}
