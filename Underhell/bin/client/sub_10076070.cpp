int __thiscall sub_10076070(_DWORD *this, const char *Src)
{
  unsigned int v2; // kr00_4
  void *v3; // esp
  char *v4; // eax
  int result; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int *v11; // edi
  char v12[12]; // [esp+0h] [ebp-10h] BYREF
  _DWORD *v13; // [esp+Ch] [ebp-4h]

  v13 = this;
  v2 = strlen(Src);
  v3 = alloca(v2 + 1);
  memcpy_0(v12, Src, v2 + 1);
  v4 = strstr(v12, ".vmt");
  if ( v4 )
    *v4 = 0;
  result = (*(int (__thiscall **)(int, char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
             dword_1047C96C,
             v12,
             "Precached",
             1,
             0);
  v6 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 168))(result);
    if ( !(_BYTE)result )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 48))(v6);
      v7 = v13;
      v8 = v13[4];
      v9 = v13[2];
      if ( v8 + 1 > v9 )
        sub_1010AFF0(v8 - v9 + 1);
      ++v7[4];
      v10 = v7[1];
      result = v7[4] - v8 - 1;
      v7[5] = v10;
      if ( result > 0 )
        result = (int)memcpy((void *)(v10 + 4 * v8 + 4), (const void *)(v10 + 4 * v8), 4 * result);
      v11 = (int *)(v7[1] + 4 * v8);
      if ( v11 )
        *v11 = v6;
    }
  }
  return result;
}
