int __thiscall sub_10268360(int this)
{
  int v2; // ebx
  int v3; // edi
  int v4; // ebp
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+14h] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v10, (int)&v9);
  if ( *(_BYTE *)(this + 320) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 240))(this)
      || v2
      && (v3 = dword_1047CA70,
          v4 = *(_DWORD *)dword_1047CA70,
          v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 148))(this),
          (*(unsigned __int8 (__thiscall **)(int, int, int))(v4 + 88))(v3, v2, v5)) )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA6C + 40))(*(_DWORD *)(this + 303));
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, *(_DWORD *)(this + 307));
    }
  }
  else
  {
    v6 = *(_DWORD *)dword_1047CA6C;
    v7 = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 224))(this, v11);
    (*(void (__stdcall **)(int))(v6 + 40))(v7);
  }
  return (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
           dword_1047CA6C,
           0,
           0,
           v10,
           v9);
}
