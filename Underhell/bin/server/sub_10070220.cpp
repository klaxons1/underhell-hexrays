char *__cdecl sub_10070220(_DWORD *a1, int a2)
{
  char *v2; // ebx
  void (__thiscall *v3)(char *, _DWORD *); // edx
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  dword_10692FE0 = 0;
  dword_10692FE4 = 0;
  dword_10692FE8 = 0;
  dword_10692FEC = 0;
  dword_10692FF0 = 0;
  dword_10692FF4 = 0;
  dword_10692FF8 = 0;
  dword_10692FFC = 0;
  dword_10693000 = 0;
  v2 = (char *)sub_101811E0("ai_hint", -1);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v5[0] = a2;
    v5[2] = a2;
    v3 = *(void (__thiscall **)(char *, _DWORD *))(*(_DWORD *)v2 + 116);
    v5[1] = -1;
    v3(v2, v5);
    sub_100D5D20("ai_hint");
  }
  *((_DWORD *)v2 + 65) = *a1;
  sub_100E0D20(a1 + 1);
  qmemcpy(v2 + 800, a1, 0x38u);
  sub_10260750(v2);
  return v2;
}
