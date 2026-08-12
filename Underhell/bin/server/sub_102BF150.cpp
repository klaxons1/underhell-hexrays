int __thiscall sub_102BF150(int this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ebx
  void (__thiscall *v6)(int, char *, int, _DWORD); // edx
  char **v7; // ebx
  char *v8; // esi
  char *v9; // eax
  char String1[32]; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v11[3]; // [esp+2Ch] [ebp-10h] BYREF
  int v12; // [esp+38h] [ebp-4h]

  v2 = a2;
  result = sub_100E82A0((float *)this, a2);
  v5 = result;
  v12 = result;
  if ( result )
  {
    v6 = *(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)v2 + 64);
    HIBYTE(a2) = 0;
    v6(v2, (char *)&a2 + 3, 1, 0);
    if ( HIBYTE(a2) )
    {
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v2 + 24))(v2, String1);
      if ( !_stricmp(String1, "InstancedResponseSystem") )
      {
        v7 = (char **)(this + 816);
        if ( !*(_DWORD *)(this + 816) )
        {
          v8 = *(char **)(this + 808);
          if ( !v8 )
            v8 = (char *)String;
          v9 = sub_100A5B30(v8);
          *v7 = v9;
          if ( v9 )
          {
            v11[1] = 0;
            v11[2] = 0;
            v11[0] = v7;
            ((void (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *, int))(*off_1060A544)[1])(
              off_1060A544,
              v11,
              v2);
          }
        }
        v5 = v12;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
    }
    return v5;
  }
  return result;
}
