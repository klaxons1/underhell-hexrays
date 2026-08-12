void __thiscall sub_1012CAB0(int this, const char *a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  const char *v11; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-4h]

  v12 = this;
  if ( a2 && (v11 = a2, v4 = sub_1012C120((unsigned __int8 (__cdecl **)(int, int))this, (int)&v11), v4 != -1) )
  {
    v5 = 24 * v4;
    v6 = *(_DWORD **)(*(_DWORD *)(this + 4) + 24 * v4 + 20);
    v7 = v6[5];
    v8 = v6[3];
    if ( v7 + 1 > v8 )
      sub_1010AFF0(v6 + 2, v7 - v8 + 1);
    ++v6[5];
    v9 = v6[2];
    v10 = v6[5] - v7 - 1;
    v6[6] = v9;
    if ( v10 > 0 )
      memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 4) + v5 + 20) + 8) + 4 * v7) = a3;
  }
  else
  {
    DevMsg("CUserMessages::HookMessage:  no such message %s\n", a2);
  }
}
