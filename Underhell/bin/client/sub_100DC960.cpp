int __thiscall sub_100DC960(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  double v11; // st7
  double (*v12)(void); // eax
  double v13; // st7
  int result; // eax
  int v15; // eax
  float v16; // [esp+0h] [ebp-44h]
  float v17; // [esp+8h] [ebp-3Ch]
  int v18; // [esp+8h] [ebp-3Ch]
  float v19[3]; // [esp+10h] [ebp-34h] BYREF
  float v20[3]; // [esp+1Ch] [ebp-28h] BYREF
  float v21[3]; // [esp+28h] [ebp-1Ch] BYREF
  float v22; // [esp+34h] [ebp-10h]
  int v23; // [esp+38h] [ebp-Ch]
  int v24; // [esp+3Ch] [ebp-8h] BYREF
  int v25; // [esp+40h] [ebp-4h] BYREF

  sub_1009EB00((_DWORD *)this, &v24, &v25);
  if ( v24 )
  {
    if ( v24 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), v21, v25);
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 16) + 112))(*(_DWORD *)(this + 16), v20, v25);
      v10 = *(_DWORD *)(this + 4);
      v19[0] = v21[0] / v20[0];
      v19[1] = v21[1] / v20[1];
      v19[2] = v21[2] / v20[2];
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v10 + 48))(v10, v19, v25);
    }
    else if ( v24 == 4 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 104))(*(_DWORD *)(this + 16));
      v4 = *(_DWORD *)(this + 12);
      if ( v3 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
        v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 16) + 104))(*(_DWORD *)(this + 16));
        v7 = *(_DWORD *)(this + 4);
        v23 = v5 / v6;
        v16 = (float)(v5 / v6);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 12))(v7, LODWORD(v16));
      }
      else
      {
        v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
        v9 = *(_DWORD *)(this + 4);
        v22 = *(float *)&v8;
        v17 = (float)v8;
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v9 + 12))(LODWORD(v17));
      }
    }
  }
  else
  {
    v11 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 16) + 108))(*(_DWORD *)(this + 16));
    v12 = *(double (**)(void))(**(_DWORD **)(this + 12) + 108);
    if ( 0.0 == v11 )
    {
      v13 = v12();
    }
    else
    {
      v22 = v12();
      v13 = v22 / ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 16) + 108))(*(_DWORD *)(this + 16));
    }
    *(float *)&v18 = v13;
    sub_1009E9B0((_DWORD *)this, v18);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v15);
  }
  return result;
}
