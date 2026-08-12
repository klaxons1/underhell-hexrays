int __thiscall sub_1027DC70(int this, int a2)
{
  int v2; // ebx
  int result; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_10236310((int (__thiscall ***)(void *, int))this, a2);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v5, (int)&a2);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)this + 808))(this, v5, a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 804))(this);
  if ( !(_BYTE)v2 )
    *(_BYTE *)(this + 273) = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 304))(this);
  if ( !(_BYTE)result || !(_BYTE)v2 )
    return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 212) + 52))(*(_DWORD *)(this + 212), v2);
  *(_BYTE *)(this + 273) = 1;
  return result;
}
