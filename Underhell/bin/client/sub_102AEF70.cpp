char __thiscall sub_102AEF70(int *this, int a2, _DWORD *a3)
{
  int v3; // eax
  int *v5; // esi
  int v6; // edi
  void *v7; // esp
  char v8; // bl
  char v9[12]; // [esp+0h] [ebp-40h] BYREF
  int v10[2]; // [esp+Ch] [ebp-34h] BYREF
  int v11; // [esp+14h] [ebp-2Ch]
  int *v12; // [esp+3Ch] [ebp-4h]

  v12 = this;
  *a3 = -1;
  sub_1022EDF0((int)v10, 0, 0, 0);
  v3 = sub_102ADF20(a2, v10);
  switch ( v3 )
  {
    case -1:
      if ( v11 >= 0 )
      {
        if ( v10[0] )
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v10[0]);
      }
      return 0;
    case 7:
      if ( v11 >= 0 && v10[0] )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v10[0]);
      return 1;
    case 5:
      v5 = sub_1022E1D0();
      v6 = sub_1022EAF0((int)v10, (int)v5, 1);
      v7 = alloca(v6);
      sub_1022F190((int)v10, (int)v5, v9, v6);
      v8 = sub_102AECF0(v12, a2, v9, a3);
      sub_10008580(v10);
      return v8;
    default:
      sub_102ADD10((int)word_10482A60, "Expecting element type name, didn't find it!");
      sub_10008580(v10);
      return 0;
  }
}
