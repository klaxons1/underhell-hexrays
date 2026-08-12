int __thiscall sub_1020D900(int this, int a2, int a3)
{
  int v3; // ebx
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  unsigned __int16 v8; // ax
  int v9; // edi
  int result; // eax
  int v11; // esi
  int v12; // eax
  __int64 v13; // [esp-8h] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+18h] [ebp-Ch] BYREF
  int v17; // [esp+1Ch] [ebp-8h]
  int v18; // [esp+20h] [ebp-4h]

  v3 = a3;
  sub_1020B9C0(this, a2, a3);
  if ( v3 == 3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(this - 4) + 92))(this - 4, 5) )
    {
      v5 = *(_DWORD *)(this - 700);
      v16 = 0.0;
      *(float *)&v17 = 0.0;
      *(float *)&v18 = 5000.0;
      (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v5 + 208))(v5, 0, &v16);
      v6 = *(_DWORD *)(this - 700);
      *(float *)&a3 = 0.0;
      (*(void (__thiscall **)(int, _DWORD, int *))(*(_DWORD *)v6 + 144))(v6, 0, &a3);
    }
    v7 = *(_DWORD *)(this - 700);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 72))(v7, v8 | 0x100);
    *(_BYTE *)(this + 561) = 1;
  }
  else if ( v3 == 1 )
  {
    *(_BYTE *)(this + 560) = 1;
  }
  v9 = this - 1124;
  HIDWORD(v13) = this - 1124;
  LODWORD(v13) = a2;
  sub_1010DD80((_DWORD *)(this + 440), v13, 0.0);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this - 4) + 92))(this - 4, 15);
  if ( (_BYTE)result )
  {
    v11 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0.0;
    *(float *)&v17 = 0.0;
    *(float *)&v18 = 0.0;
    sub_1016B400(v9, &v14);
    if ( v17 > 0 )
    {
      do
      {
        v12 = __RTDynamicCast(
                *(_DWORD *)(v14 + 4 * v11),
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&IParentPropInteraction `RTTI Type Descriptor',
                0);
        if ( v12 )
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v12 + 4))(v12, a2, v3);
        ++v11;
      }
      while ( v11 < v17 );
    }
    result = v14;
    *(float *)&v17 = 0.0;
    if ( v16 >= 0.0 )
    {
      if ( v14 )
      {
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v14);
        result = 0;
        v14 = 0;
      }
      v15 = 0;
    }
    v18 = result;
    if ( v16 >= 0.0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
