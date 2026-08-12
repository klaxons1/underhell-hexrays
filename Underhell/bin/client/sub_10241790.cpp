int __thiscall sub_10241790(void *this, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *i; // ebx
  char *v6; // edi
  _DWORD *v7; // eax
  const char **v8; // eax
  const char **v9; // edi
  int v10; // eax
  int v11; // ecx
  const char *v12; // [esp+Ch] [ebp-8h] BYREF

  result = sub_10229C90(a3);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    v6 = (char *)sub_10229A00(i);
    v7 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
    v8 = sub_1023BD80(v6, v7);
    v9 = v8;
    if ( v8 )
    {
      if ( v8[2] )
      {
        v12 = v8[2];
        v10 = sub_1023CEC0((unsigned __int8 (__cdecl **)(int, int))&off_103FCF74, (int)&v12);
        if ( v10 != -1 )
        {
          v11 = *(_DWORD *)(dword_103FCF78 + 24 * v10 + 20);
          if ( v11 )
            (*(void (__thiscall **)(int, void *, _DWORD *, const char **))(*(_DWORD *)v11 + 4))(v11, this, a3, v9);
        }
      }
    }
    result = sub_1021F0F0(i);
  }
  return result;
}
