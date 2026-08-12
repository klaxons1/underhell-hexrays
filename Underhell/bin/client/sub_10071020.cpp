void __usercall sub_10071020(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // edi
  double v8; // st7
  int v9; // ecx
  void (__stdcall *v10)(_DWORD); // eax
  float v11[22]; // [esp+54h] [ebp-BCh] BYREF
  float v12[3]; // [esp+ACh] [ebp-64h] BYREF
  float v13[3]; // [esp+B8h] [ebp-58h] BYREF
  float v14[3]; // [esp+C4h] [ebp-4Ch] BYREF
  _DWORD v15[3]; // [esp+D0h] [ebp-40h] BYREF
  float v16[3]; // [esp+DCh] [ebp-34h] BYREF
  float v17[3]; // [esp+E8h] [ebp-28h] BYREF
  int v18; // [esp+F4h] [ebp-1Ch]
  float v19; // [esp+F8h] [ebp-18h] BYREF
  float v20; // [esp+FCh] [ebp-14h] BYREF
  int v21; // [esp+100h] [ebp-10h]
  int v22; // [esp+104h] [ebp-Ch]
  void *v23; // [esp+108h] [ebp-8h]
  void *retaddr; // [esp+110h] [ebp+0h]

  v22 = a2;
  v23 = retaddr;
  v3 = *(_DWORD *)(a1 + 1200);
  v4 = v3 ^ *(_DWORD *)(a1 + 1220);
  *(_DWORD *)(a1 + 1220) = v3;
  *(_DWORD *)(a1 + 1204) = v4 & v3;
  *(_DWORD *)(a1 + 1208) = v4 & ~v3;
  nullsub_4();
  v21 = sub_10229A20(a1 + 1320);
  if ( v21 )
  {
    v5 = sub_100422D0();
    if ( v5 )
    {
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 532))(v5, v16);
      v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 536))(v5);
      v15[0] = *v6;
      v15[1] = v6[1];
      v15[2] = v6[2];
      sub_101EDFB0(v15, v14);
      v17[0] = v14[0] * 1000.0 + v16[0];
      v17[1] = v14[1] * 1000.0 + v16[1];
      v17[2] = 1000.0 * v14[2] + v16[2];
      sub_1000E430(v11, v16, v17);
      v18 = a1 - 12;
      sub_10070BD0((float *)(a1 - 12), v12, v13, v17);
      if ( (unsigned __int8)sub_10090120(v11, v12, v13, v17, &v20, &v19, 0) )
      {
        if ( v20 >= 0.0 && v19 >= 0.0 && v20 <= 1.0 && v19 <= 1.0 || *(_BYTE *)(a1 + 1244) )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1044CC48 + 120))(dword_1044CC48, v21);
          v7 = (int)((double)*(int *)(a1 + 1180) * v20 + 0.5);
          v8 = (double)*(int *)(a1 + 1184) * v19 + 0.5;
          v21 = (int)v8;
          if ( v7 != *(_DWORD *)(a1 + 1212) || (int)v8 != *(_DWORD *)(a1 + 1216) )
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10439610 + 260))(dword_10439610, v7, (int)v8);
            v9 = v21;
            *(_DWORD *)(a1 + 1212) = v7;
            *(_DWORD *)(a1 + 1216) = v9;
          }
          if ( (*(_BYTE *)(a1 + 1204) & 1) != 0 )
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10439610 + 328))(dword_10439610, 107, 1);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10439610 + 264))(dword_10439610, 107);
          }
          if ( (*(_DWORD *)(a1 + 1204) & 0x800) != 0 )
          {
            (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_10439610 + 328))(dword_10439610, 108, 1);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10439610 + 264))(dword_10439610, 108);
          }
          if ( (*(_BYTE *)(a1 + 1208) & 1) != 0 || *(_BYTE *)(a1 + 1244) )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10439610 + 328))(dword_10439610, 107, 0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10439610 + 272))(dword_10439610, 107);
          }
          if ( (*(_DWORD *)(a1 + 1208) & 0x800) != 0 )
          {
            (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10439610 + 328))(dword_10439610, 108, 0);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10439610 + 272))(dword_10439610, 108);
          }
          if ( *(_BYTE *)(a1 + 1244) == 1 )
          {
            v10 = *(void (__stdcall **)(_DWORD))(*(_DWORD *)v18 + 408);
            *(_BYTE *)(a1 + 1244) = 0;
            v10(-1.0);
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 124))(dword_1044CC48);
        }
      }
    }
  }
}
