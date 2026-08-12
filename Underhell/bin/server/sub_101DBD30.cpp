void __usercall sub_101DBD30(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10)
{
  int v10; // edi
  double v11; // st7
  int v12; // esi
  int v13; // eax
  int v14; // eax
  float v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v15[0] = -a5;
  v15[1] = -a6;
  v15[2] = -a7;
  off_10689714();
  v10 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_106BAFF8 + 20))(
          dword_106BAFF8,
          a9,
          a2,
          a3,
          a1);
  v11 = a8;
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 20))(dword_106BAFF8, a10);
  if ( *(_WORD *)(v12 + 72) == 67 )
  {
    if ( v11 >= 7840.0 )
LABEL_6:
      ((void (__thiscall *)(int (__stdcall ***)(char), int, float *, _DWORD, _DWORD))(*off_1061B7A0)[4])(
        off_1061B7A0,
        a4,
        v15,
        1.0,
        16.0);
  }
  else if ( *(_WORD *)(v12 + 72) == 68 && v11 >= 2250.0 )
  {
    goto LABEL_6;
  }
  if ( a8 > 25000.0 )
  {
    v13 = *(unsigned __int16 *)(v10 + 72);
    if ( v13 == 77 || v13 == 71 )
    {
      v14 = *(unsigned __int16 *)(v12 + 72);
      if ( v14 == 67 || v14 == 77 )
        ((void (__thiscall *)(int (__stdcall ***)(char), int, float *))(*off_1061B7A0)[6])(off_1061B7A0, a4, v15);
    }
  }
}
