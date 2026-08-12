int __thiscall sub_100DCCE0(int this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // [esp+0h] [ebp-1Ch]
  _BYTE v7[12]; // [esp+8h] [ebp-14h] BYREF
  int v8; // [esp+14h] [ebp-8h] BYREF
  int v9; // [esp+18h] [ebp-4h] BYREF

  sub_1009EB00((_DWORD *)this, &v8, &v9);
  if ( v8 )
  {
    if ( v8 == 2 )
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *, int))(**(_DWORD **)(this + 12) + 112))(*(_DWORD *)(this + 12), v7, v9);
      (*(void (__thiscall **)(_DWORD, _BYTE *, int))(**(_DWORD **)(this + 4) + 48))(*(_DWORD *)(this + 4), v7, v9);
    }
    else if ( v8 == 4 )
    {
      v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 12) + 104))(*(_DWORD *)(this + 12));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 16))(*(_DWORD *)(this + 4), v3);
    }
  }
  else
  {
    *(float *)&v6 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 12) + 108))(*(_DWORD *)(this + 12));
    sub_1009E9B0((_DWORD *)this, v6);
  }
  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 12))(this);
    return sub_101BCA60(v5);
  }
  return result;
}
