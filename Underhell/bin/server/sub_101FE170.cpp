int __thiscall sub_101FE170(int *this)
{
  int result; // eax
  const char *v3; // ecx
  int v4; // esi
  int v5; // edi
  int v6; // eax
  float v7; // [esp+0h] [ebp-14h]

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    result = sub_10261B20();
  }
  else
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0);
    if ( (_BYTE)result )
      return result;
    result = sub_1025FC50();
  }
  if ( result )
  {
    v3 = (const char *)this[200];
    if ( !v3 )
      v3 = String;
    v4 = *(_DWORD *)(result + 24);
    v5 = *(_DWORD *)dword_106B31D0;
    v6 = sub_1025F440("devshots_screenshot \"%s\"", (char)v3);
    (*(void (__cdecl **)(int, int, int))(v5 + 152))(dword_106B31D0, v4, v6);
    sub_100EC3F0(this, (int)sub_101FDE80, 0.0, 0);
    v7 = *(float *)(dword_106B31C8 + 12) + 4.0;
    return sub_100EC4A0(this, v7, 0);
  }
  return result;
}
