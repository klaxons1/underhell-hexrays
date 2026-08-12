void __usercall sub_101B0600(int a1@<edi>, int a2)
{
  char v2; // bl
  int v3; // eax
  int v4; // esi
  int v5; // eax
  int v6; // esi
  _BYTE v7[48]; // [esp+2Ch] [ebp-84h] BYREF
  _BYTE v8[48]; // [esp+5Ch] [ebp-54h] BYREF
  _BYTE v9[12]; // [esp+8Ch] [ebp-24h] BYREF
  int v10[3]; // [esp+98h] [ebp-18h] BYREF
  int v11[3]; // [esp+A4h] [ebp-Ch] BYREF

  if ( a1 && a2 )
  {
    v2 = (*(int (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 40))(a1, v8, v7);
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 20))(a1);
    v4 = v3;
    if ( v3 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3) )
    {
      if ( v2 )
      {
        sub_10421A90(v8, v9);
        sub_10421CE0(v8, 3, v11);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v4 + 220))(v4, v10, v11);
        sub_1011CB60((float *)v10, (int)&flt_106F1CB4, 12.0, 0, 0.0);
      }
      sub_101B0550(v4, 0, 255, 0, 12);
    }
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
    v6 = v5;
    if ( v5 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
    {
      if ( v2 )
      {
        sub_10421A90(v7, v9);
        sub_10421CE0(v7, 3, v10);
        (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v6 + 220))(v6, v11, v10);
        sub_1011CB60((float *)v11, (int)&flt_106F1CB4, 12.0, 0, 0.0);
      }
      sub_101B0550(v6, 255, 0, 0, 12);
    }
  }
}
