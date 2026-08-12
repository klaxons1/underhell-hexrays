int __usercall sub_100BD080@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  void (__thiscall *v4)(int, _DWORD); // edx
  void (__thiscall *v5)(int, int); // edx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  wchar_t v11[10]; // [esp+8h] [ebp-30h] BYREF
  wchar_t Buffer[10]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v13; // [esp+30h] [ebp-8h]
  int v14; // [esp+34h] [ebp-4h]

  result = sub_100422D0();
  v13 = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 224) = result;
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(result + 5296);
    if ( *(_BYTE *)(a1 + 212) || (result = sub_10236700(a1), result > 0) )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 40))(
        dword_1047CA6C,
        *(_DWORD *)(a1 + 245),
        a2);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 124))(a1, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 260))(a1, 0);
      v4 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 216);
      v14 = 0;
      v4(a1, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(a1 + 228));
      v5 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
      v14 = -229630;
      v5(dword_1047CA6C, -229630);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        (int)*(float *)(a1 + 308),
        (int)*(float *)(a1 + 316),
        (int)*(float *)(a1 + 364),
        (int)*(float *)(a1 + 356));
      v6 = dword_1047CA7C;
      v7 = *(_DWORD *)dword_1047CA7C;
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
      v9 = (*(int (__thiscall **)(int, int))(v7 + 32))(v6, v8);
      v10 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v9 + 12))(v9, "HudNumbers", 0);
      *(_DWORD *)(a1 + 252) = v10;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v10);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 245));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
        dword_1047CA6C,
        (int)*(float *)(a1 + 324),
        (int)*(float *)(a1 + 332));
      sub_100BC810(Buffer, (wchar_t *)L"%i/52", *(_DWORD *)(a1 + 216));
      (*(void (__thiscall **)(int, wchar_t *, unsigned int))(*(_DWORD *)dword_1047CA6C + 88))(
        dword_1047CA6C,
        Buffer,
        wcslen(Buffer));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
        dword_1047CA6C,
        (int)*(float *)(a1 + 340),
        (int)*(float *)(a1 + 348));
      result = *(_DWORD *)(v13 + 5304);
      if ( result )
      {
        sub_100BC810(v11, (wchar_t *)L"   %i/%i", *(_DWORD *)(v13 + 5300), *(_DWORD *)(v13 + 5304));
        return (*(int (__thiscall **)(int, wchar_t *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
                 dword_1047CA6C,
                 v11,
                 wcslen(v11),
                 0);
      }
    }
  }
  return result;
}
