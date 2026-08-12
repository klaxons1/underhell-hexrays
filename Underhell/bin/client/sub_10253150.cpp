int __thiscall sub_10253150(int this)
{
  int v2; // edi
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 508))(this);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v5, (int)&v4);
  v2 = *(_DWORD *)(this + 272);
  v4 = v2
     * ((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, *(_DWORD *)(this + 332))
      + 1)
     + 3;
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, v5, v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 508))(this);
}
