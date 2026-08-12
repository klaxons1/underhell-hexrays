char __thiscall sub_1015FFD0(void *this)
{
  int v2; // edi
  int v3; // eax
  char result; // al
  int *v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  char v10; // bl
  int v11[4]; // [esp+4h] [ebp-30h] BYREF
  int v12; // [esp+14h] [ebp-20h]

  if ( !byte_106B4AC1
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 52))(off_10627F88)
    || !(*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 56))(this)
    || !(**(unsigned __int8 (__thiscall ***)(int))off_10627F88)(off_10627F88) )
  {
    return 0;
  }
  v2 = *(_DWORD *)(dword_106B31D8 + 4);
  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)off_10627F88 + 64))(off_10627F88, "MOD");
  result = (*(int (__thiscall **)(int, int))(v2 + 40))(dword_106B31D8 + 4, v3);
  if ( result )
  {
    qword_106B4AC8 = (int)Plat_FloatTime();
    v5 = (int *)sub_1021A800("Steam");
    v6 = *v5;
    v7 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 68))(this, qword_106B4AC8);
    (*(void (__thiscall **)(int *, int))(v6 + 20))(v5, v7);
    sub_1021A3E0(v5);
    sub_1042DE40(0, 0, 0);
    v8 = *(_DWORD *)(dword_106B31D8 + 4);
    v9 = (*(int (__thiscall **)(void *, const char *, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 64))(
           this,
           "MOD",
           v11,
           0,
           0,
           0);
    (*(void (__thiscall **)(int, int))(v8 + 56))(dword_106B31D8 + 4, v9);
    if ( v12 && dword_106B31CC )
    {
      v10 = (**(int (__thiscall ***)(int, const char *, int, int, int))dword_106B31CC)(
              dword_106B31CC,
              String,
              1,
              v12,
              v11[0]);
      sub_1002A150(v11);
      return v10;
    }
    else
    {
      sub_1002A150(v11);
      return 0;
    }
  }
  return result;
}
