int __cdecl sub_10131FE0(int *a1)
{
  int result; // eax
  int v2; // esi
  _DWORD *v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // esi
  _BYTE v7[12]; // [esp+4h] [ebp-1Ch] BYREF
  _DWORD v8[3]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v9[4]; // [esp+1Ch] [ebp-4h] BYREF

  result = sub_10153490();
  v2 = result;
  if ( result )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 508))(result);
    v8[0] = *v3;
    v8[1] = v3[1];
    v8[2] = v3[2];
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 504))(v2, v7);
    v4 = sub_101811E0("env_projectedtexture", -1);
    v5 = __RTDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CEnvProjectedTexture `RTTI Type Descriptor',
           0);
    v6 = v5;
    if ( *a1 > 1 )
      *(_DWORD *)(v5 + 260) = *(_DWORD *)sub_10162BE0(v9, a1[259]);
    return (*(int (__thiscall **)(int, _BYTE *, _DWORD *, _DWORD))(*(_DWORD *)v6 + 416))(v6, v7, v8, 0);
  }
  return result;
}
