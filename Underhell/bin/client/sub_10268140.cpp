int __thiscall sub_10268140(int this)
{
  int v2; // eax
  int v4; // [esp+4h] [ebp-8h] BYREF
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)v5, (int)&v4);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 128))(*(_DWORD *)(this + 208)) )
  {
    v2 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 208));
    v4 -= v2;
  }
  return v4 / *(_DWORD *)(this + 272);
}
