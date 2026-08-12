int __thiscall sub_100DCDB0(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st6
  int result; // eax
  int v7; // eax
  int v8; // [esp+0h] [ebp-20h]
  float v9; // [esp+8h] [ebp-18h] BYREF
  float v10; // [esp+Ch] [ebp-14h]
  float v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h] BYREF

  sub_1009EB00((_DWORD *)this, &v13, &v14);
  if ( v13 )
  {
    if ( v13 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), &v9, v14);
      v9 = v9 - (double)(int)v9;
      v12 = (int)v10;
      v10 = v10 - (double)v12;
      v4 = *(_DWORD *)(this + 4);
      v12 = (int)v11;
      v11 = v11 - (double)v12;
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v4 + 48))(v4, &v9, v14);
    }
    else if ( v13 == 4 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 104))(*(_DWORD *)(this + 12));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), v3);
    }
  }
  else
  {
    v5 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    v12 = (int)v5;
    *(float *)&v8 = v5 - (double)(int)v5;
    sub_1009E9B0((_DWORD *)this, v8);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v7);
  }
  return result;
}
