int __thiscall sub_1010EF50(int *this)
{
  int (__thiscall *v2)(int, const char *, const char *, int, _DWORD); // edx
  int result; // eax
  int v4; // edi
  _DWORD *v5; // esi
  int v6; // eax
  _BYTE v7[48]; // [esp+8h] [ebp-38h] BYREF
  int *v8; // [esp+38h] [ebp-8h]
  int v9; // [esp+3Ch] [ebp-4h]

  v2 = *(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280);
  v8 = this;
  result = v2(dword_1047C96C, "shadertest/wireframevertexcolor", "Other textures", 1, 0);
  v4 = 0;
  v9 = result;
  if ( this[1] > 0 )
  {
    v5 = this + 7;
    do
    {
      (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v5 + 192))(*v5, v7);
      v6 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 292))(*v5);
      result = (*(int (__thiscall **)(int, int, int, _BYTE *, void *))(*(_DWORD *)dword_1041315C + 288))(
                 dword_1041315C,
                 v6,
                 v9,
                 v7,
                 &unk_103E2F74);
      ++v4;
      v5 += 6;
    }
    while ( v4 < v8[1] );
  }
  return result;
}
