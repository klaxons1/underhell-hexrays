__int16 *sub_10014410()
{
  int v0; // eax
  __int16 *result; // eax
  __int16 *v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 48))(dword_1041315C);
  result = (__int16 *)sub_1012D2F0(v0);
  if ( result )
  {
    result = (__int16 *)(*(int (__thiscall **)(__int16 *))(*(_DWORD *)result + 788))(result);
    v2 = result;
    if ( result )
    {
      v3 = sub_1000AA30(result);
      sub_10229120(*(float *)(v3 + 56));
      v4 = sub_1000AA30(v2);
      sub_10229120(*(float *)(v4 + 60));
      v5 = sub_1000AA30(v2);
      sub_10229120(*(float *)(v5 + 64));
      v6 = sub_1000AA30(v2);
      sub_10229120(*(float *)(v6 + 68));
      v7 = sub_1000AA30(v2);
      sub_10229120(*(float *)(v7 + 72));
      v8 = sub_1000AA30(v2);
      return (__int16 *)sub_10229120(*(float *)(v8 + 76));
    }
  }
  return result;
}
