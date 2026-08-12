int __thiscall sub_100D0E80(_BYTE *this, int a2, int a3, int a4, int ArgList)
{
  int v6; // eax
  int v7; // edx
  int v9; // [esp-8h] [ebp-20h]
  int v10; // [esp-4h] [ebp-1Ch]
  wchar_t Buffer[6]; // [esp+Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a2);
  if ( this[283] )
  {
    v10 = ArgList % 60;
    v9 = ArgList / 60;
    if ( ArgList % 60 >= 10 )
      sub_100BC810(Buffer, (wchar_t *)asc_10308294, v9, v10);
    else
      sub_100BC810(Buffer, aD_3, v9, v10);
  }
  else
  {
    sub_100BC810(Buffer, (wchar_t *)L"%d", ArgList);
  }
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 284))(dword_1047CA6C, a2, 48);
  if ( ArgList < 100 && this[282] )
    v7 = v6 + a3;
  else
    v7 = a3;
  if ( ArgList < 10 && this[282] )
    v7 += v6;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v7, a4);
  return (*(int (__thiscall **)(int, wchar_t *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(dword_1047CA6C, Buffer, 0);
}
