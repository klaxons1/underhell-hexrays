int __thiscall sub_1025E2E0(int this)
{
  int result; // eax
  int v3; // ecx
  bool v4; // zf
  int *v5; // esi
  int v6; // edx
  int v7; // [esp+2Ch] [ebp-10h] BYREF
  int v8; // [esp+30h] [ebp-Ch] BYREF
  int v9; // [esp+34h] [ebp-8h] BYREF
  int v10; // [esp+38h] [ebp-4h] BYREF

  result = *(_DWORD *)(this + 208);
  if ( result >= 0 && result < *(_DWORD *)(this + 232) )
  {
    v3 = *(_DWORD *)(this + 220);
    v4 = *(_DWORD *)(v3 + 4 * result) == 0;
    result = v3 + 4 * result;
    if ( !v4 )
    {
      v5 = *(int **)result;
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(
        dword_1047CA6C,
        255,
        255,
        255,
        255);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v5 + 4))(v5, 0, 0);
      v6 = *v5;
      if ( *(_BYTE *)(this + 246) )
      {
        (*(void (__thiscall **)(int *, int *, int *))(v6 + 12))(v5, &v10, &v9);
        sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v8, (int)&v7);
        (*(void (__thiscall **)(int *, int, int))(*v5 + 16))(v5, v8, v7);
        (*(void (__thiscall **)(int *, int))(*v5 + 20))(v5, -1);
        (*(void (__thiscall **)(int *))*v5)(v5);
        return (*(int (__thiscall **)(int *, int, int))(*v5 + 16))(v5, v10, v9);
      }
      else
      {
        return (*(int (__thiscall **)(int *))v6)(v5);
      }
    }
  }
  return result;
}
