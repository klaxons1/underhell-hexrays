float *__thiscall sub_101701C0(void *this, float *a2)
{
  float *result; // eax
  int v3; // esi
  int v4; // edi
  int v5; // esi
  int v6; // edi

  result = (float *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_1041315C + 52))(
                      dword_1041315C,
                      "sprites/animglow01.vmt",
                      0);
  v3 = (int)result;
  if ( result )
  {
    v4 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, result);
    result = (float *)sub_1016FF80((int)this, a2, v3);
    v5 = (int)result;
    if ( result )
    {
      v6 = v4 - 1;
      result[497] = (float)v6;
      sub_10035090(result, 3, 0);
      *(_BYTE *)(v5 + 84) = 14;
      *(float *)(v5 + 2068) = 1.0;
      *(_DWORD *)(v5 + 2044) = 255;
      *(float *)(v5 + 2072) = (float)(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(
                                       dword_10413198,
                                       0,
                                       v6);
      *(float *)(v5 + 2060) = 1.0;
      sub_10037BA0(v5, a2);
      result = (float *)off_103DC81C;
      *(float *)(v5 + 1984) = *((float *)off_103DC81C + 3) + 0.01;
    }
  }
  return result;
}
