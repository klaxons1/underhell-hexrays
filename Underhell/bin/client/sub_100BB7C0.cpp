int __thiscall sub_100BB7C0(_DWORD *this, int a2, int a3, int a4)
{
  int *v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  int v11; // ebx
  _DWORD *v12; // eax
  int v13; // ecx
  int result; // eax
  _BYTE v15[4]; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE v16[4]; // [esp+10h] [ebp-8h] BYREF
  _BYTE v17[4]; // [esp+14h] [ebp-4h] BYREF

  if ( a3 == 3 )
  {
    v5 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, int))(*this + 104))(this, v15, a4);
LABEL_10:
    v13 = *v5;
    goto LABEL_11;
  }
  if ( a3 != 4 )
  {
    if ( a3 == 5 )
    {
      v6 = dword_1047CA7C;
      v7 = *(_DWORD *)dword_1047CA7C;
      v8 = (*(int (__stdcall **)(const char *))(*(_DWORD *)dword_1047CA7C + 20))("SourceScheme");
      v9 = (_DWORD *)(*(int (__thiscall **)(int, int))(v7 + 32))(v6, v8);
      v10 = v9;
      if ( v9 )
      {
        v11 = *v9;
        v12 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(this[11] + 224))(this + 11, &a4);
        v5 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, _DWORD))(v11 + 20))(
                      v10,
                      v17,
                      "SteamLightGreen",
                      *v12);
      }
      else
      {
        v5 = (int *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 96))(this, v16);
      }
    }
    else
    {
      v5 = (int *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 96))(this, &a3);
    }
    goto LABEL_10;
  }
  v13 = dword_103E08B4;
LABEL_11:
  result = a2;
  *(_WORD *)a2 = v13;
  *(_BYTE *)(a2 + 2) = BYTE2(v13);
  *(_BYTE *)(a2 + 3) = -1;
  return result;
}
