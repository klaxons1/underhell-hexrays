int __thiscall sub_1010F460(int this, int a2)
{
  int result; // eax
  bool v4; // zf
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edi
  _BYTE v12[48]; // [esp+8h] [ebp-38h] BYREF
  int v13; // [esp+38h] [ebp-8h]
  int v14; // [esp+3Ch] [ebp-4h]
  int v15; // [esp+48h] [ebp+8h]

  result = sub_10028AC0(this, this, a2);
  v4 = *(_DWORD *)(dword_1040375C + 48) == 0;
  v5 = result;
  v13 = result;
  if ( !v4 )
  {
    v6 = *(_DWORD *)dword_10413178;
    v7 = sub_10034480((__int16 *)this);
    v8 = (*(int (__thiscall **)(int, int))(v6 + 16))(dword_10413178, v7);
    v9 = *(_DWORD *)dword_1047C96C;
    v14 = v8;
    v10 = 0;
    v15 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(v9 + 280))(
            dword_1047C96C,
            "shadertest/wireframevertexcolor",
            "Other textures",
            1,
            0);
    if ( *(int *)(this + 2624) <= 0 )
    {
      return v5;
    }
    else
    {
      v11 = this + 2248;
      do
      {
        sub_101F0B70(v11, v11 - 288, v12);
        (*(void (__thiscall **)(int, _DWORD, int, _BYTE *, void *))(*(_DWORD *)dword_1041315C + 288))(
          dword_1041315C,
          *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * v10++),
          v15,
          v12,
          &unk_103E2F78);
        v11 += 12;
      }
      while ( v10 < *(_DWORD *)(this + 2624) );
      return v13;
    }
  }
  return result;
}
