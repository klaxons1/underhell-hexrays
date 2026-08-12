void __thiscall sub_102587A0(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // edi
  int *v3; // esi
  char v4; // bl
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int *v9; // edi
  int v11; // [esp+18h] [ebp-4h] BYREF

  v2 = this;
  if ( (*(unsigned __int8 (__stdcall **)(unsigned int))(*this + 752))(a2) )
  {
    if ( a2 )
      v11 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
    else
      v11 = -1;
    v3 = v2 + 268;
    v4 = 0;
    if ( sub_10319100(&v11) == -1 )
    {
      v5 = v2[271];
      v6 = v3[1];
      if ( v5 + 1 > v6 )
        sub_102ABFC0(v5 - v6 + 1);
      ++v3[3];
      v7 = *v3;
      v8 = v3[3] - v5 - 1;
      v3[4] = *v3;
      if ( v8 > 0 )
        memcpy((void *)(v7 + 4 * v5 + 4), (const void *)(v7 + 4 * v5), 4 * v8);
      v9 = (int *)(*v3 + 4 * v5);
      if ( v9 )
        *v9 = v11;
      v2 = this;
      v4 = 1;
    }
    sub_1010DD80(v2 + 232, __SPAIR64__((unsigned int)v2, a2), 0.0);
    if ( v4 )
    {
      if ( v2[271] == 1 )
        sub_1010DD80(v2 + 238, __SPAIR64__((unsigned int)v2, a2), 0.0);
    }
  }
}
