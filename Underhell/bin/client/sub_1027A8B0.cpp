int __thiscall sub_1027A8B0(int this, int a2)
{
  int v3; // eax
  int v4; // ebx
  int v5; // edi
  int v7; // [esp+Ch] [ebp-18h] BYREF
  int v8; // [esp+10h] [ebp-14h] BYREF
  _BYTE v9[4]; // [esp+14h] [ebp-10h] BYREF
  _BYTE v10[4]; // [esp+18h] [ebp-Ch] BYREF
  _BYTE v11[4]; // [esp+1Ch] [ebp-8h] BYREF
  _BYTE v12[4]; // [esp+20h] [ebp-4h] BYREF

  if ( *(_DWORD *)(this + 224)
    && (v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 212) + 8) + 820))(*(_DWORD *)(*(_DWORD *)(this + 212) + 8))) != 0 )
  {
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v3) + 7;
  }
  else
  {
    v4 = 20;
  }
  v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 344) + 772))(*(_DWORD *)(this + 344));
  sub_10236170(*(int (__thiscall ****)(void *, int, int))(*(_DWORD *)(this + 232) + 12 * a2), (int)v9, (int)&v7);
  v7 += v5;
  sub_10236250((int (__thiscall ***)(void *, int, int))this, (int)v12, (int)v11, (int)v10, (int)&v8);
  if ( *(_DWORD *)(this + 336) <= v8 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 344) + 768))(*(_DWORD *)(this + 344), 0);
  }
  else
  {
    if ( v7 < v5 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 768))(*(_DWORD *)(this + 344), v7);
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
    }
    if ( v7 > v5 + v8 - v4 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 344) + 768))(*(_DWORD *)(this + 344), v4 + v7 - v8);
      return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
    }
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
}
