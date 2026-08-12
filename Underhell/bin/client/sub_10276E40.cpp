int __thiscall sub_10276E40(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v8[4]; // [esp+10h] [ebp-4h] BYREF

  result = sub_10255590((_DWORD *)this);
  if ( *(_BYTE *)(this + 968) )
  {
    if ( *(_BYTE *)(this + 948) )
    {
      sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v7, (int)&v6);
      v3 = dword_1047CA6C;
      v4 = *(_DWORD *)dword_1047CA6C;
      v5 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 228))(this, v8);
      (*(void (__thiscall **)(int, _DWORD))(v4 + 40))(v3, *v5);
      return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
               dword_1047CA6C,
               0,
               0,
               v7,
               v6);
    }
  }
  return result;
}
