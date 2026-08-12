int __thiscall sub_100DCED0(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // eax
  int v7; // [esp+0h] [ebp-20h]
  float v8; // [esp+8h] [ebp-18h] BYREF
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+10h] [ebp-10h]
  int v11; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  sub_1009EB00((_DWORD *)this, &v12, &v13);
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), &v8, v13);
      v8 = (float)(int)v8;
      v11 = (int)v9;
      v9 = (float)v11;
      v4 = *(_DWORD *)(this + 4);
      v11 = (int)v10;
      v10 = (float)v11;
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v4 + 48))(v4, &v8, v13);
    }
    else if ( v12 == 4 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 104))(*(_DWORD *)(this + 12));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), v3);
    }
  }
  else
  {
    v11 = (int)((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    *(float *)&v7 = (float)v11;
    sub_1009E9B0((_DWORD *)this, v7);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v6);
  }
  return result;
}
