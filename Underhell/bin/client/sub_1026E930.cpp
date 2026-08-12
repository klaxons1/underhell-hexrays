int __thiscall sub_1026E930(int this)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-10h] BYREF
  int v4; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE v5[4]; // [esp+10h] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+14h] [ebp-4h] BYREF

  result = sub_1025B940((_WORD *)this);
  if ( (*(_BYTE *)(this + 384) & 1) != 0 && *(int *)(this + 392) >= 0 )
  {
    if ( *(_DWORD *)(this + 388) )
    {
      sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v4, (int)v5);
      sub_1027CE60(*(_DWORD *)(this + 388));
      (*(void (__thiscall **)(_DWORD, int *, _BYTE *))(**(_DWORD **)(this + 388) + 8))(*(_DWORD *)(this + 388), &v3, v6);
      return (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)this + 860))(
               this,
               *(_DWORD *)(this + 392),
               v4 - v3 - 2,
               v3);
    }
  }
  return result;
}
